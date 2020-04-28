all: main.o
	g++ -o count main.o 

main.o: main.cc
	g++ -c main.cc

clean:
	rm main.o
	rm count