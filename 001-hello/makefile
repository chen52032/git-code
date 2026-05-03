TARGET = clangtest
SRCS = clangtest.cpp
OBJS = $(SRCS:.cpp=.o)
CXX = clang++
OPT = -Wall

$(TARGET): $(OBJS)
	$(CXX) $(OPT) -o $@ $^

%.o: %.cpp
	$(CXX) $(OPT) -c $< -o $@

	