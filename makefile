Project1: major1.o palindrome.o power.o reverse.o replace.o
	g++ -o Project1 -std=c++11 major1.o palindrome.o power.o reverse.o replace.o

major1.o: major1.c major1.h 
	g++ -c -std=c++11 major1.c

palindrome.o: palindrome.c 
	g++ -c -std=c++11 palindrome.c
	
power.o: power.c
	g++ -c -std=c++11 power.c

reverse.o: reverse.c
	g++ -c -std=c++11 reverse.c
	
replace.o: replace.c
	g++ -c -std=c++11 replace.c

clean:
	rm *.o Project1

run: 
	./Project1
