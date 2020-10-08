lab2:	main.o myList.o myHash.o 
		gcc main.c myList.c myHash.c  -o lab2

main.o: main.c myList.c myHash.c
		gcc -c main.c

myList.o: myList.c myLib.h
		gcc -c myList.c

myHash.o: myHash.c myLib.h
		gcc -c myHash.c


run:
	./lab2 5 texto.txt

clear:
	rm -rf *.exe
	rm -rf *.o