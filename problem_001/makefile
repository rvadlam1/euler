all: main

main: main.o
	gcc -o main main.o

main.o: main.c
	gcc -c -Wall -g main.c

clean: 
	rm main.o main
