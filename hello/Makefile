all: run

main:	hello.cpp main.cpp
	g++ -o out/main hello.cpp main.cpp

test:	hello.cpp test.cpp
	g++ -g -o out/test hello.cpp test.cpp -I/home/user/github/doctest/doctest

run: ./out/main ./out/test
	./out/test
	./out/main
