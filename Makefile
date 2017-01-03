# Makefile for diamond.c

# standard gcc compiler
CC = gcc

# for debugging
CFLAGS = -g -Wall

diamond: diamond.c
	$(CC) $(CFLAGS) -o ascii diamond.c

run: ascii
	./ascii

clean: ascii
	rm ascii

# <target>: <dependencies>
# [tab]<system command>
