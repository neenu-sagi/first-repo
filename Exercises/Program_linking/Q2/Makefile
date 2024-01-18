# Compile the program using a Makefile

# 'result' is a target
result_program: calc.o main.o
	gcc -o result_program calc.o main.o

# 'calc.o' is a prerequisite
calc.o: calc.c
	gcc -c calc.c -o calc.o

# 'main.o' is a prerequisite
main.o: main.c
	gcc -c main.c -o main.o

# 'clean' is a target
clean:
# '-rm' ignores errors if the file doesn't exist
	-rm -f result_program calc.o main.o


