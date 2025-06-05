#!/usr/bin/env bash
set -e

# If DEVELOPER_DIR is not set, try autodetect
if [ -z "$DEVELOPER_DIR" ]; then
    export DEVELOPER_DIR=$(dirname $(dirname $(xcode-select -p)))
fi

export XCODE_VERSION=$(xcodebuild -version | awk '/Xcode/ {print $2}' | tr -d '\n')
echo "Detected Xcode version: $XCODE_VERSION"
echo "Detected Xcode directory: $DEVELOPER_DIR"

# xcrun doesn't work on some old Xcode versions
export IIG=$DEVELOPER_DIR/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/iig
export SYSROOT_SDK=$DEVELOPER_DIR/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk

export SOURCE_DIR=$(realpath "$(dirname "${BASH_SOURCE[0]}")")
export HEADER_DIR=$SOURCE_DIR/header
export OUTPUT_DIR=$SOURCE_DIR/output/$XCODE_VERSION

mkdir -p $OUTPUT_DIR
rm $OUTPUT_DIR/* | true

export IIG_OPTIONS="--framework-name DriverKit -- -I$HEADER_DIR/iokit -I$HEADER_DIR/osfmk -I$HEADER_DIR/bsd -I$HEADER_DIR/bsd-generated -I$HEADER_DIR/EXTERNAL_HEADERS -isysroot $SYSROOT_SDK -x c++ -std=gnu++2b -D__IIG=1 -DDRIVERKIT_PRIVATE=1 -DPRIVATE_WIFI_ONLY=1 -DXNU_PLATFORM_MacOSX"
export IIG_FILE_LIST=$(find $SOURCE_DIR/iig -name "*.iig" | xargs -n 1 basename | cut -d '.' -f 1)

for IIG_FILE in $IIG_FILE_LIST
do
    $IIG --def $SOURCE_DIR/iig/$IIG_FILE.iig --header $OUTPUT_DIR/$IIG_FILE.h --impl $OUTPUT_DIR/$IIG_FILE.iig.cpp $IIG_OPTIONS 
done

pushd $OUTPUT_DIR && md5sum *.h *.iig.cpp | sort | md5sum && popd
