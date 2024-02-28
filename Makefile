CC = g++
CFLAGS = -Wall -std=c++17

# Build all targets
all: imc AnoBissexto

# Compile imc target
imc: imc.cpp
	$(CC) $(CFLAGS) -o imc imc.cpp

# Compile AnoBissexto target
AnoBissexto: AnoBissexto.cpp
	$(CC) $(CFLAGS) -o AnoBissexto AnoBissexto.cpp

# Run both imc and AnoBissexto targets
run: imc AnoBissexto
	./imc
	./AnoBissexto

# Clean the generated executables
clean:
	rm -f imc AnoBissexto