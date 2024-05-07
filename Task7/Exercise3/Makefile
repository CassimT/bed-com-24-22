output: mani.o square.o triangle.o circle.o area.o
	g++ main.o square.o triangle.o circle.o area.o -o Area_of_chapes
mani.o: main.cpp
	g++ -c main.cpp
square.o: square.cpp square.h
	g++ -c square.cpp 
triangle.o: triangle.cpp triangle.h
	g++ -c triangle.cpp
circle.o: circle.cpp circle.h
	g++ -c circle.cpp
area.o: area.cpp area.h
	g++ -c area.cpp
clear:
	rm *.o

