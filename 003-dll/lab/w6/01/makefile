TARGET = main.exe
obj = $(patsubst %.cpp, %.o, $(wildcard ./*.cpp))
LD = -L./lib
LIB = -lalib
$(TARGET) : $(obj)
	g++ $^ -o $@ $(LD) $(LIB)
%.o : %.cpp
	g++ -c $<