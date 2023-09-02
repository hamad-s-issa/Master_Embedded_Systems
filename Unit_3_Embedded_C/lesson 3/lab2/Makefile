#@CopyRight hamad sayed
#@Description : This is the generic makefile for arm32 projects

CC     =arm-none-eabi-
CFLAGS =-mcpu=cortex-m3 -gdwarf-2 -mthumb
INCS   =-I .
LIBS   =
SRC    =$(wildcard *.c)
OBJ    =$(SRC:.c=.o)
ASM    =$(wildcard *.s)
ASMOBJ =$(ASM:.s=.o)
Project_Name =cortex-m3-program

All: $(Project_Name).bin
	@echo "============== Build is Done ============="
	

%.o: %.c
	$(CC)gcc.exe $(CFLAGS) -std=c99 $(INCS) -c $< -o $@

$(Project_Name).elf: $(OBJ) $(ASMOBJ)
	$(CC)ld.exe -T Linker_Script.ld $(INCS) $(OBJ) -Map=Map_File.map -o $@ 

$(Project_Name).bin: $(Project_Name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *elf *.bin
	@echo "============== Everything Clean ============="

clean:
	rm *.elf *.bin