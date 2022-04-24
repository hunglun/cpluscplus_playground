all: hello e17

hello:
	g++ -o out/hello hello.cpp
e17:
	g++ -o out/e17 euler_problem_17.cpp -I.
test:
	./out/hello
	./out/e17
