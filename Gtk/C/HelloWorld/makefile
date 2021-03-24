CC = gcc
CCFLAGS = -v -O2 -g -Wall -Wextra -pipe -std=c89
CFLAGS = `pkg-config --cflags gtk4`
LDFLAGS = `pkg-config --libs gtk4`

PROGRAM = hello-world-gtk
OBJECTS = $(PROGRAM).o

.SUFFIXES: .o .cpp

.cpp.o:
	$(CC) $(CCFLAGS) -c $< -o $@ $(CFLAGS)

all: $(PROGRAM)

$(PROGRAM): $(OBJECTS)
	$(CC) $(CCFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f *.o $(PROGRAM) *.exe
