all: build test run


build: hello buildtest17 buildrun17

test: test17

run: run17

hello:
	g++ -o out/hello hello.cpp

buildtest17:
	g++ -DDOCTEST -g -o out/test_e17 euler_problem_17.cpp -I/home/user/github/doctest/doctest

test17:
	./out/test_e17 -d

buildrun17:
	g++ -g -o out/e17 e17.cpp euler_problem_17.cpp -I/home/user/github/doctest/doctest

run17:
	./out/e17 | tail
