CC = gcc
COMP_FLAG = -Wall 


all: isort txtfind

isort: sort.o 
	$(CC)  $(COMP_FLAG)   -o isort sort.c 
	
txtfind: string.c
	$(CC)  $(COMP_FLAG)   -o txtfind string.c

sort.o: sort.c 
	$(CC) $(COMP_FLAG) -c $*.c

string.o: string.c
	$(CC) $(COMP_FLAG) -c $*.c
	
.PHONY: clean all  

clean:
	rm -f *.a *.so *.o isort txtfind
