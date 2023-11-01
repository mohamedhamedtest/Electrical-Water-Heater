################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include TIMER/subdir.mk
-include Sys/subdir.mk
-include SSD_disp/subdir.mk
-include LED/subdir.mk
-include EEPROM/subdir.mk
-include Cool_Heat_Elements/subdir.mk
-include BUTTONS/subdir.mk
-include ADC/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
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
LSS += \
Electrical\ Water\ Heater.lss \

FLASH_IMAGE += \
Electrical\ Water\ Heater.hex \

EEPROM_IMAGE += \
Electrical\ Water\ Heater.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: Electrical\ Water\ Heater.elf secondary-outputs

# Tool invocations
Electrical\ Water\ Heater.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Electrical Water Heater.map -mmcu=atmega32 -o "Electrical Water Heater.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Electrical\ Water\ Heater.lss: Electrical\ Water\ Heater.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Electrical Water Heater.elf  >"Electrical Water Heater.lss"
	@echo 'Finished building: $@'
	@echo ' '

Electrical\ Water\ Heater.hex: Electrical\ Water\ Heater.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Electrical Water Heater.elf  "Electrical Water Heater.hex"
	@echo 'Finished building: $@'
	@echo ' '

Electrical\ Water\ Heater.eep: Electrical\ Water\ Heater.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Electrical Water Heater.elf  "Electrical Water Heater.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Electrical\ Water\ Heater.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Electrical Water Heater.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) "Electrical Water Heater.elf"
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
