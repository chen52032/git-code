cpp_srcs = $(wildcard ./srcs/*.cpp)
cpp_objs = $(patsubst ./srcs/%.cpp, ./objs/%.o, $(cpp_srcs))
include_path =-I./include

# I_opt=$(include_path:%=-I%)
# e:
# 	echo $(cpp_srcs)
# 	echo $(cpp_objs)
# 	echo $(dll_obj)

# co: $(cpp_objs)
./objs/%.o: ./srcs/%.cpp
	g++ -c $< -o $@ $(include_path)

dll_obj = $(filter-out ./objs/main.o, $(cpp_objs))
dll = ./lib/libmymath.dll
cd:$(dll)
$(dll): $(dll_obj) 
	g++ -shared -fPIC $^ -o $@

L_opt=-L./lib
l_opt=-lmymath
main: ./objs/main.o $(dll)
	g++ $^ -o $@ $(L_opt) $(l_opt)