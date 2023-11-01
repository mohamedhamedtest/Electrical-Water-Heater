################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Cool_Heat_Elements/Cool_Heat_Elements.c 

OBJS += \
./Cool_Heat_Elements/Cool_Heat_Elements.o 

C_DEPS += \
./Cool_Heat_Elements/Cool_Heat_Elements.d 


# Each subdirectory must supply rules for building sources it contributes
Cool_Heat_Elements/%.o: ../Cool_Heat_Elements/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


