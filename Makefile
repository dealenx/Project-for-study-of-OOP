# @Date:   2016-10-04T19:45:45+07:00
# @Last modified time: 2016-10-04T23:33:11+07:00
#
#
all:

hello: main.o table.o
	g++ main.o table.o -o hello

main.o: main.cpp
	g++ -c main.cpp

factorial.o: table.cpp
	g++ -c table.cpp

run: hello
