#!/usr/bin/env bash
set -e

export XCODE_VERSION=$(xcodebuild -version | awk '/Xcode/ {print $2}' | tr -d '\n')
export IIG=$(xcrun -sdk macosx -find iig)
export SYSROOT_SDK=$(xcrun -sdk macosx -show-sdk-path)

export SOURCE_DIR=$(realpath "$(dirname "${BASH_SOURCE[0]}")")
export HEADER_DIR=$SOURCE_DIR/header
export OUTPUT_DIR=$SOURCE_DIR/output/$XCODE_VERSION

mkdir -p $OUTPUT_DIR
rm $OUTPUT_DIR/* | true

export IIG_OPTIONS="--framework-name DriverKit -- -I$HEADER_DIR/iokit -I$HEADER_DIR/osfmk -I$HEADER_DIR/bsd -I$HEADER_DIR/bsd-generated -I$HEADER_DIR/EXTERNAL_HEADERS -I -isysroot $SYSROOT_SDK -x c++ -std=gnu++1z -D__IIG=1 -DDRIVERKIT_PRIVATE=1 -DPLATFORM_MacOSX"
export IIG_FILE_LIST=$(find $SOURCE_DIR/iig -name "*.iig" | xargs -n 1 basename | cut -d '.' -f 1)

for IIG_FILE in $IIG_FILE_LIST
do
    $IIG --def $SOURCE_DIR/iig/$IIG_FILE.iig --header $OUTPUT_DIR/$IIG_FILE.h --impl $OUTPUT_DIR/$IIG_FILE.iig.cpp $IIG_OPTIONS 
done

pushd $OUTPUT_DIR && md5sum *.h *.iig.cpp | sort | md5sum && popd
