# Nombre del compilador
CC = gcc

# Bandera de compilación
CFLAGS = -std=c99 -Wall -Werror -Wvla -g

# Archivos fuente
SRC = main.c set.c matrix.c

# Archivos objeto generados
OBJ = main.o set.o matrix.o

# Nombre del ejecutable
EXEC = program

# Regla principal
all: $(EXEC)

# Cómo generar el ejecutable
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -lm -o $(EXEC)

# Cómo generar el archivo objeto de main.c
main.o: main.c set.h matrix.h
	$(CC) $(CFLAGS) -c main.c -o main.o

# Cómo generar el archivo objeto de set.c
set.o: set.c set.h
	$(CC) $(CFLAGS) -c set.c -o set.o

# Cómo generar el archivo objeto de matrix.c
matrix.o: matrix.c matrix.h
	$(CC) $(CFLAGS) -c matrix.c -o matrix.o

# Limpiar archivos generados
clean:
	rm -f $(OBJ) $(EXEC)
