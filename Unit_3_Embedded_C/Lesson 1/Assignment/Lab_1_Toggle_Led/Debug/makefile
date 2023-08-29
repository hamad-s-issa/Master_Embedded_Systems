################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Lab_1_Toggle_Led.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Lab_1_Toggle_Led.list \

OBJCOPY_HEX += \
Lab_1_Toggle_Led.hex \

OBJCOPY_BIN += \
Lab_1_Toggle_Led.bin \


# All Target
all: Lab_1_Toggle_Led.elf secondary-outputs

# Tool invocations
Lab_1_Toggle_Led.elf: $(OBJS) $(USER_OBJS) C:\Users\hs179\Downloads\Master_Embedded_Systems-master\Master_Embedded_Systems-master\Unit_3_Embedded_C\Lesson\ 1\Assignment\Lab_1_Toggle_Led\STM32F103C6UX_FLASH.ld
	arm-none-eabi-gcc -o "Lab_1_Toggle_Led.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\hs179\Downloads\Master_Embedded_Systems-master\Master_Embedded_Systems-master\Unit_3_Embedded_C\Lesson 1\Assignment\Lab_1_Toggle_Led\STM32F103C6UX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Lab_1_Toggle_Led.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Lab_1_Toggle_Led.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Lab_1_Toggle_Led.list"
	@echo 'Finished building: $@'
	@echo ' '

Lab_1_Toggle_Led.hex: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "Lab_1_Toggle_Led.hex"
	@echo 'Finished building: $@'
	@echo ' '

Lab_1_Toggle_Led.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Lab_1_Toggle_Led.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
