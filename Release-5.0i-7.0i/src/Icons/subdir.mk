################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Icons/HomeIcons.cpp \
../src/Icons/KeyIcons.cpp \
../src/Icons/MiscIcons.cpp \
../src/Icons/NozzleIcons.cpp 

OBJS += \
./src/Icons/HomeIcons.o \
./src/Icons/KeyIcons.o \
./src/Icons/MiscIcons.o \
./src/Icons/NozzleIcons.o 

CPP_DEPS += \
./src/Icons/HomeIcons.d \
./src/Icons/KeyIcons.d \
./src/Icons/MiscIcons.d \
./src/Icons/NozzleIcons.d 


# Each subdirectory must supply rules for building sources it contributes
src/Icons/%.o: ../src/Icons/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	arm-none-eabi-g++ -DNDEBUG -D__SAM4S4B__ -DBOARD=USER_BOARD -DARM_MATH_CM4=true -DSCREEN_70E -I"D:\eclipse\PanelDue\PanelDue\src\config" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\thirdparty\CMSIS\Lib\GCC" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\sam\utils\cmsis\sam4s\include" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\common\utils" -I"D:\eclipse\PanelDue\PanelDue\src" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\sam\utils\cmsis\sam4s\source\templates" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\sam\utils" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\sam\utils\preprocessor" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\common\boards" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\sam\utils\header_files" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\common\boards\user_board" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\thirdparty\CMSIS\Include" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\sam\drivers\pio" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\sam\drivers\pmc" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\common\services\clock" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\common\services\delay" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\sam\drivers\wdt" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\sam\drivers\pwm" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\sam\drivers\uart" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\sam\drivers\matrix" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\sam\drivers\efc" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\sam\services\flash_efc" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\sam\drivers\rstc" -I"D:\eclipse\PanelDue\PanelDue\src\ASF\sam\drivers\chipid" -Os -Wall -Wextra -c -std=gnu++11 -mthumb -MD -MP -mcpu=cortex-m3 -ffunction-sections -fdata-sections -fno-threadsafe-statics -fno-rtti -fno-exceptions -nostdlib --param max-inline-insns-single=500 -mlong-calls -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


