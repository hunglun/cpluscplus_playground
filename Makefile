all: hello e17

hello:
	g++ -o out/hello hello.cpp
e17:
	g++ -g -o out/e17 euler_problem_17.cpp -I/home/user/github/doctest/doctest
test:
	./out/hello
	./out/e17
