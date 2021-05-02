################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../extanal_devices/lcd \
../firmware \
../firmware/spi \
../firmware/ports \
../extanal_devices


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../extanal_devices/lcd/lcd.c \
../firmware/ports/ports.c \
../firmware/spi/spi.c \
../main.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
extanal_devices/lcd/lcd.o \
firmware/ports/ports.o \
firmware/spi/spi.o \
main.o

OBJS_AS_ARGS +=  \
extanal_devices/lcd/lcd.o \
firmware/ports/ports.o \
firmware/spi/spi.o \
main.o

C_DEPS +=  \
extanal_devices/lcd/lcd.d \
firmware/ports/ports.d \
firmware/spi/spi.d \
main.d

C_DEPS_AS_ARGS +=  \
extanal_devices/lcd/lcd.d \
firmware/ports/ports.d \
firmware/spi/spi.d \
main.d

OUTPUT_FILE_PATH +=primer_modulo.elf

OUTPUT_FILE_PATH_AS_ARGS +=primer_modulo.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler
extanal_devices/lcd/lcd.o: ../extanal_devices/lcd/lcd.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.31
	$(QUOTE)D:\FILES\Program Files\Microchip\xc8\v2.31\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATmega328P  -mdfp="D:\FILES\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATmega328P__ -DDEBUG  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

firmware/ports/ports.o: ../firmware/ports/ports.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.31
	$(QUOTE)D:\FILES\Program Files\Microchip\xc8\v2.31\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATmega328P  -mdfp="D:\FILES\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATmega328P__ -DDEBUG  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

firmware/spi/spi.o: ../firmware/spi/spi.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.31
	$(QUOTE)D:\FILES\Program Files\Microchip\xc8\v2.31\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATmega328P  -mdfp="D:\FILES\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATmega328P__ -DDEBUG  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

./main.o: .././main.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.31
	$(QUOTE)D:\FILES\Program Files\Microchip\xc8\v2.31\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATmega328P  -mdfp="D:\FILES\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATmega328P__ -DDEBUG  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	




# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking:  XC8 C Linker : 2.31
	$(QUOTE)D:\FILES\Program Files\Microchip\xc8\v2.31\bin\xc8-cc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -mcpu=ATmega328P  -mdfp="D:\FILES\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.6.364\xc8"  -Wl,-Map="primer_modulo.map" -funsigned-char -funsigned-bitfields -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums --memorysummary,memoryfile.xml  
	@echo Finished building target: $@
	"D:\FILES\Program Files\Microchip\xc8\v2.31\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "primer_modulo.elf" "primer_modulo.hex"
	"D:\FILES\Program Files\Microchip\xc8\v2.31\bin\avr-objcopy.exe" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0 --no-change-warnings -O ihex "primer_modulo.elf" "primer_modulo.eep" || exit 0
	"D:\FILES\Program Files\Microchip\xc8\v2.31\bin\avr-objdump.exe" -h -S "primer_modulo.elf" > "primer_modulo.lss"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "primer_modulo.elf" "primer_modulo.hex" "primer_modulo.eep" "primer_modulo.map" "primer_modulo.usersignatures" "primer_modulo.a"  "primer_modulo.lss"
	