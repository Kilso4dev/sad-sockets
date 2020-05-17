all: compile;

EXECUTABLE = "sad_main"

ARGS = ""

clean:
	rm -f -r ./build


prepare: clean;
	mkdir -p build && \
	cd build && \
	cmake ..

compile:
	if [ ! -d "build" ]; then make prepare; fi
	cd build && \
	make

run: compile;
	cd build && ./${EXECUTABLE}

gdb-debug: compile;
	cd build && gdb --args ${EXECUTABLE} ${ARGS}

valgrind-debug: compile;
	cd build && valgrind --leak-check=full ./${EXECUTABLE}
