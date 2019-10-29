KERNEL_DIR ?= /home/hanch/study/runninglinuxkernel_4.0/
ifeq ($(KERNELRELEASE), )
modules:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) modules
install:
#	$(MAKE) -C $(KERNEL_DIR) INSTALL_MOD_PATH=$(KERNEL_DIR)/kmodules  install
	cp *.ko $(KERNEL_DIR)/kmodules
clean:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) clean

else
	obj-m := test.o
	obj-m += add.o sub.o
	#test-objs := add.o sub.o
endif
