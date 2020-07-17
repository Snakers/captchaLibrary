#!/bin/bash
#This File Created by Louay Hesham.
mkdir /usr/local/include/captchaLib
mkdir /usr/include/x86_64-linux-gnu/captchaLib
DEST_INCLUDE_DIR="/usr/local/include/captchaLib"
DEST_LIB_DIR="/usr/local/lib"
DEST_LIB_DIR_2="/lib/x86_64-linux-gnu"
DEST_INCLUDE_DIR_2="/usr/include/x86_64-linux-gnu/captchaLib"
DEST_PKGCONFIG_1="/usr/share/pkgconfig"
DEST_PKGCONFIG_2="/usr/local/lib/pkgconfig"
DEST_PKGCONFIG_3="/usr/local/share/pkgconfig"
DEST_PKGCONFIG_4="/usr/lib/x86_64-linux-gnu/pkgconfig"
DEST_PKGCONFIG_5="/usr/lib/pkgconfig"


cp "./include/"* "$DEST_INCLUDE_DIR"

cp  "./LibFolder/"* "$DEST_LIB_DIR"

cp "./include/"* "$DEST_INCLUDE_DIR_2"

cp  "./LibFolder/"* "$DEST_LIB_DIR_2"


cp "./CaptchaLib.pc" "$DEST_PKGCONFIG_1"

cp "./CaptchaLib.pc" "$DEST_PKGCONFIG_2"

cp "./CaptchaLib.pc" "$DEST_PKGCONFIG_3"

cp "./CaptchaLib.pc" "$DEST_PKGCONFIG_4"

cp "./CaptchaLib.pc" "$DEST_PKGCONFIG_5"


echo "Thank You"
