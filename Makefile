all: compile;

EXECUTABLE = "sad_main"

ARGS = ""

clear:
	rm -f -r ./build


prepare: clear;
	mkdir -p build && \
	cd build && \
	cmake ..

compile:
	#[ ! -d "build" ] && make clear && make prepare
	cd build && \
	make

run: compile;
	cd build && ./${EXECUTABLE}

gdb-debug: compile;
	cd build && gdb --args ${EXECUTABLE} ${ARGS}

valgrind-debug: compile;
	cd build && valgrind --leak-check=full ./${EXECUTABLE}
