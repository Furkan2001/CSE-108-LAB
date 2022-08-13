all: clear compile run clean

compile: Lab4.c
	@echo "-------------------------------------------"
	@echo "Compiling..."
	@gcc -c  Lab4.c
	@gcc -o test Lab4.o
run:
	@echo "-------------------------------------------"
	@echo "Running the tests...."
	@echo "================================================================================="
	./test
	@echo "================================================================================="
	@echo "Completed tests...."

clear:
	@clear

clean:
	@echo "-------------------------------------------"
	@echo "Removing compiled files..."
	@rm -f *.o
	@rm -f test
	@rm -f *.out



