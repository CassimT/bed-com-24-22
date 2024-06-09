output: main.o rectangle.o 
	g++ main.o rectangle.o -o rectangle
main.o: main.cpp
	g++ -c main.cpp
rectangle.o: rectangle.cpp rectangle.h
	g++ -c rectangle.cpp
clear:
	rm *.o