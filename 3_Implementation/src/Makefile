build:code test
code:code.out
test:test.out

code.out:addition.o log.o exponential.o modulus.o power.o subtraction.o main.o multiplication.o square_root.o square.o division.o factorial.o
	gcc $^ -o $@ -lm
test.out:addition.o log.o exponential.o modulus.o power.o subtraction.o multiplication.o square_root.o square.o division.o factorial.o test_calc.o ../unity/unity.o 
	gcc $^ -o $@ -lm -Iunity 
clean: clean-code clean-test
clean-code:
	rm -rf *.o code.out
clean-test:
	rm -rf *.o test.out        
run: run-code run-test
run-code:
	./code.out
run-test:
	./test.out        


