main:
	g++ -g *.cpp -std=c++98 -pedantic -o main

clean:
	rm -f *.o *.tar.gz main
	reset
	clear

run:
	valgrind --leak-check=full ./main

tar:
	tar -cvz *.* makefile -f Practical_04_COS214.tar.gz

untar:
	tar -zxvf *.tar.gz