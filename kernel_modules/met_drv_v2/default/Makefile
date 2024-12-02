# Makefile for building the kernel module met.o

obj-m += met.o

# Include additional CFLAGS
ccflags-y += -I$(srctree)/include/

# Specify the source files for the module
met-y := default/met_main.o

# Default target
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

# Clean target
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
