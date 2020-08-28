################################################################################
HOW TO BUILD KERNEL FOR SM-N750S_KOR_LL_M_SK

1. How to Build
	- get Toolchain
	download and install arm-eabi-4.8 toolchain for ARM EABI.
	Extract kernel source and move into the top directory.

	$ ./build_kernel.sh   
	(you can choise build model for skt, kt, lgu
	
2. Output files
	- Kernel : Kernel/arch/arm/boot/zImage
	- module : Kernel/drivers/*/*.ko
	
3. How to Clean	
    $ make clean
	
4. How to make .tar binary for downloading into target.
	- change current directory to Kernel/arch/arm/boot
	- type following command
	$ tar cvf SM-N750S_KOR_LL_M_SK_Kernel.tar.gz zImage
#################################################################################