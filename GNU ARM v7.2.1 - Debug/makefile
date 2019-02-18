################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include serial/subdir.mk
-include emlib/subdir.mk
-include emdrv/subdir.mk
-include Main/subdir.mk
-include Drivers/subdir.mk
-include CMSIS/EFM32TG11B/subdir.mk
-include BSP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: SLSTK3301A_can_board.axf

# Tool invocations
SLSTK3301A_can_board.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m0plus -mthumb -T "SLSTK3301A_can_board.ld" -Xlinker --gc-sections -Xlinker -Map="SLSTK3301A_can_board.map" --specs=nano.specs -o SLSTK3301A_can_board.axf "./BSP/bsp_bcc.o" "./BSP/bsp_stk.o" "./BSP/bsp_stk_leds.o" "./BSP/bsp_trace.o" "./CMSIS/EFM32TG11B/startup_efm32tg11b.o" "./CMSIS/EFM32TG11B/system_efm32tg11b.o" "./Drivers/segmentlcd.o" "./Main/can_demo.o" "./emdrv/uartdrv.o" "./emlib/em_assert.o" "./emlib/em_can.o" "./emlib/em_cmu.o" "./emlib/em_core.o" "./emlib/em_emu.o" "./emlib/em_gpio.o" "./emlib/em_lcd.o" "./emlib/em_rtc.o" "./emlib/em_usart.o" "./serial/retargetio.o" "./serial/retargetserial.o" -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building hex file: SLSTK3301A_can_board.hex'
	arm-none-eabi-objcopy -O ihex "SLSTK3301A_can_board.axf" "SLSTK3301A_can_board.hex"
	@echo ' '

	@echo 'Building bin file: SLSTK3301A_can_board.bin'
	arm-none-eabi-objcopy -O binary "SLSTK3301A_can_board.axf" "SLSTK3301A_can_board.bin"
	@echo ' '

	@echo 'Building s37 file: SLSTK3301A_can_board.s37'
	arm-none-eabi-objcopy -O srec "SLSTK3301A_can_board.axf" "SLSTK3301A_can_board.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "SLSTK3301A_can_board.axf"
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) SLSTK3301A_can_board.axf
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
