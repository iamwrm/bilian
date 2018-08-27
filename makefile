all: main.cpp sim.cpp
	g++ -Wall -std=c++11 main.cpp -o build/bilian

run: all
	./build/bilian