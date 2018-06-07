#create makefile
PRO_DIR := .
PROJ_NAME := tinhcvdt
OUTPUT_PATH := $(PRO_DIR)/output

src := $(PRO_DIR)/main.c
src += $(PRO_DIR)/src/chon.c
src += $(PRO_DIR)/src/tinh_hcn.c
src += $(PRO_DIR)/src/tinh_tam_giac.c

inc := $(PRO_DIR)/inc
LINKER_FILE	:= $(PRO_DIR)/linker/STM32F030_mini_board.ld

build :
	@echo "Chay build------------"
	$(COMPILER) $(src) -I$(inc) -o tinhcvdt