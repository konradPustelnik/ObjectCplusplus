#Makefile

SOURCES=$(wildcard *.cpp)

main:	clean
	g++ ${SOURCES} -o main; ./main

clean:
	rm -f main

.SILENT:
