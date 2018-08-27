all: main.cpp sim.cpp
	g++ -std=c++11 main.cpp sim.cpp -o build/bilian

run: all
	./build/bilian