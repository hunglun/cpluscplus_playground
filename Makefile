all: hello e17

hello:
	g++ -o out/hello hello.cpp
e17:
	g++ -DDOCTEST -g -o out/test_e17 euler_problem_17.cpp -I/home/user/github/doctest/doctest
test17:
	./out/test_e17 -d
run17:
	g++ -g -o out/e17 e17.cpp euler_problem_17.cpp -I/home/user/github/doctest/doctest
	./out/e17
