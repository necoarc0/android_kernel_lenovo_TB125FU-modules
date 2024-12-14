obj-m := met.o

ccflags-y += -I$(srctree)/include/

met-y := default/met_main.o

all:
    make -C $(KERNEL_SRC) M=$(PWD) modules

clean:
    make -C $(KERNEL_SRC) M=$(PWD) clean

.PHONY: all clean
