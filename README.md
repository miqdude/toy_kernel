# TOY OS in x86_64 arch
This os is made for celebrating Indonesia's 75th independence day.

## Requirements
1. gcc
1. grub-mkrescue
1. xorriso
1. grub-pc-bin (you may need this if using WSL)

## How to compile
1. compile the kernel using make kernel.o
1. compile the loader using make loader.o
1. build the kernel using make kernel.bin
1. if you want to make the iso file type make wow_os.iso

Note : I compiled the code in WSL