LibrarySort: Shapes.o ShapesTest.o
	gcc -o LibrarySort Shapes.o ShapesTest.o

Shapes.o: LibrarySort/Shapes.c
	gcc -o Shapes.o LibrarySort/Shapes.c

ShapesTest.o: LibrarySort/ShapesTest.c
	gcc -o ShapesTest.o LibrarySort/ShapesTest.c

