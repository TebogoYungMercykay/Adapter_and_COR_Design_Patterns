main:
	g++ -g *.cpp -std=c++98 -pedantic -o main

clean:
	rm -f *.o *.tar.gz *.zip *.tar main
	reset
	clear

run:
	valgrind --leak-check=full ./main

tar:
	tar -cvz *.* makefile -f Pattern_Code.tar.gz

untar:
	tar -zxvf *.tar.gz