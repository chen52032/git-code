TARGET = main
DLL = libmymath.dll
CPP = $(wildcard *.cpp)
OBJ = $(CPP:.cpp=.o)
SHARE_OPT = -shared -fPIC

%.o: %.cpp
	g++ -c $< -o $@

$(DLL):mymath.o
	g++ $(SHARE_OPT) $^ -o $@

$(TARGET):main.o
	g++ -L. -lmymath -o $@ main.o
