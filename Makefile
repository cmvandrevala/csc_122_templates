1: clean
	g++ 1.cpp complex_number.cpp -o 1
	./1

2: clean
	g++ 2.cpp complex_number.cpp -o 2
	./2

3: clean
	g++ 3.cpp complex_number.cpp -o 3
	./3

4: clean
	g++ 4.cpp planet.cpp complex_number.cpp -o 4
	./4

5: clean
	g++ 5.cpp planet.cpp -o 5
	./5

clean:
	@rm -f 1
	@rm -f 2
	@rm -f 3
	@rm -f 4
