CC = gcc
FLAGS = -I. -Wall

all: isort txtfind

isort:isort.o
	$(CC) $(FLAGS) $< -o $@ 

txtfind:txtfind.o
	$(CC) $(FLAGS) $< -o $@ 

%.o: %.c
	$(CC) $(FLAGS) -c $<

.PHONY: clean all

clean:
	rm -f *.o isort txtfind