################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Main/can_demo.c 

OBJS += \
./Main/can_demo.o 

C_DEPS += \
./Main/can_demo.d 


# Each subdirectory must supply rules for building sources it contributes
Main/can_demo.o: ../Main/can_demo.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m0plus -mthumb -std=c99 '-DDEBUG_EFM=1' '-DRETARGET_VCOM=1' '-DDEBUG=1' '-DEFM32TG11B520F128GM80=1' -I"C:\Users\daseymou\SimplicityStudio\v4_250_workspace\SLSTK3301A_can_board\serial_inc" -I"C:\Users\daseymou\SimplicityStudio\v4_250_workspace\SLSTK3301A_can_board\external_copied_files" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.5//platform/emdrv/uartdrv/inc" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.5//platform/emdrv/uartdrv/config" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.5//platform/emdrv/dmadrv/inc" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.5//platform/emdrv/dmadrv/config" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.5//platform/emdrv/common/inc" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.5//platform/emdrv/gpiointerrupt/inc" -I"C:\Users\daseymou\SimplicityStudio\v4_250_workspace\SLSTK3301A_can_board\emdrv" -I"C:\Users\daseymou\SimplicityStudio\v4_250_workspace\SLSTK3301A_can_board\emlib" -I"C:\Users\daseymou\SimplicityStudio\v4_250_workspace\SLSTK3301A_can_board\serial" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.5//hardware/kit/common/drivers" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.5//platform/CMSIS/Include" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.5//platform/emlib/inc" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.5//hardware/kit/SLSTK3301A_EFM32TG11/config" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.5//hardware/kit/common/bsp" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v2.5//platform/Device/SiliconLabs/EFM32TG11B/Include" -O0 -Wall -c -fmessage-length=0 -mno-sched-prolog -fno-builtin -ffunction-sections -fdata-sections -MMD -MP -MF"Main/can_demo.d" -MT"Main/can_demo.o" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


