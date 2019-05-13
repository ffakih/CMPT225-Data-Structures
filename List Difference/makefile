all: a4

a4: a4.o 
	g++ -o a4 a4.o 

test1.o: a4.cpp heap.h
	g++ -c a4.cpp heap.h

clean:
	rm -f a4 *.o  


