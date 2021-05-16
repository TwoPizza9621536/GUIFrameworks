CXX = g++
CXXFLAGS = -v -O2 -Wall -Wextra -pipe -std=c++11
CFLAGS = `pkg-config --cflags gtkmm-4.0`
LDFLAGS = `pkg-config --libs gtkmm-4.0`

PROGRAM = helloworld
OBJECTS = $(PROGRAM).o main.o

.PHONY: all clean

.SUFFIXES: .o .cpp

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(CFLAGS)

all: $(PROGRAM)

$(PROGRAM): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f *.o $(PROGRAM) *.exe
