DEBUG_FLAGS = -O0 -g3
RELEASE_FLAGS = -O3

FLAGS = $(RELEASE_FLAGS)

preprocess:
	g++ $(FLAGS) -E Functions2.cpp > Temp.cc

assemble:
	g++ $(FLAGS) -S Functions2.cpp

compile:
	g++ $(FLAGS) -c Functions2.cpp -o Functions2.o

build:
	g++ $(FLAGS) Functions2.o -o Functions2
