
GCC=arm-none-eabi-gcc
CFLAGS=-Wall -g -std=c99 -mlittle-endian -mcpu=cortex-m0 -march=armv6-m -mthumb -ffunction-sections -fdata-sections -I platform -I.
LDFLAGS=-Wl,--gc-sections -Lplatform -T../$(LINKER_SCRIPT)

LINKER_SCRIPT=platform/stm32f030.ld
STARTUP_SRC=platform/startup_stm32f0xx.s

TARGETS=main.elf main.bin

SRCS=main.c $(STARTUP_SRC)

.PHONY: all clean test

all:$(TARGETS)

clean:
	-rm $(TARGETS)

%.bin: %.elf
	arm-none-eabi-objcopy -O binary $< $@

main.elf: $(SRCS) $(LINKER_SCRIPT) $(HEADERS)
	$(GCC) $(CFLAGS) $(LDFLAGS) $(SRCS) -o $@

