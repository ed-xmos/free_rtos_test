EXECUTABLE = bin/rtos_app.xe
BOARD ?= XCORE-AI-EXPLORER

.PHONY: all clean distclean run .FORCE
.FORCE:

all: $(EXECUTABLE)

clean:
	make -C build clean

distclean:
	rm -rf build
	rm -rf bin

build/Makefile:
	cmake -B build -DBOARD=$(BOARD)

$(EXECUTABLE): build/Makefile .FORCE
	make -C build

run: $(EXECUTABLE)
	xrun --xscope $(EXECUTABLE)

