# Define compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++23 -Wall

# Source files
SRCS = main.cpp functions.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Target executable
TARGET = myprogram

# Default rule to build the target executable
$(TARGET): $(OBJS)
    $(CXX) $(CXXFLAGS) -o $@ $^

# Rule to compile each source file into object files
%.o: %.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule to remove object files and the target executable
clean:
    rm -f $(OBJS) $(TARGET)
