CC = g++

output: main.o  tree.o
	$(CC) main.o tree.o -o P0

main.o: main.cpp
	$(CC) -c main.cpp

tree.o: tree.cpp tree.h
	$(CC) -c tree.cpp

clean:
	rm *.o P0
