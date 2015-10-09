all: libA
	@echo "main..."
	gcc main.c -L. -lA -lB -o main

libA: libB
	@echo "create libA..."
	gcc -c libA.c -o libA.o
	ar -cvq libA.a libA.o

libB:
	@echo "create libB..."
	gcc -c libB.c -o libB.o
	ar -cvq libB.a libB.o

clean:
	rm -rf *.o *~ libA.a libB.a
	