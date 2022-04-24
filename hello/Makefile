all: run

build:
	g++ -o out/hello hello.cpp

buildtest:
	g++ -DDOCTEST -g -o out/testhello hello.cpp -I/home/user/github/doctest/doctest

test: buildtest
	./out/testhello -d

buildrun:
	g++ -g -o out/hello hello.cpp

run: test buildrun
	./out/hello
