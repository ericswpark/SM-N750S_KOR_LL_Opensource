#!/bin/bash

export ARCH=arm

mkdir output

make -C $(pwd) O=output VARIANT_DEFCONFIG=msm8974_sec_frescolte_lgt_defconfig msm8974_sec_defconfig
make -C $(pwd) O=output

cp output/arch/arm/boot/Image $(pwd)/arch/arm/boot/zImage