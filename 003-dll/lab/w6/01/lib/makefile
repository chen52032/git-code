TARGET = alib.lib
OBJ = $(patsubst %.cpp, %.o, $(wildcard ./*.cpp))

$(TARGET) : $(OBJ)
	ar -cr $@ $^
%.o : %.cpp
	g++ -c $< -o $@