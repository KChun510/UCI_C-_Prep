# Define the compiler
CXX = g++

# Define the flags for compiling and linking
CXXFLAGS = -Wall -g
LDFLAGS =

# Define the target executable
TARGET = mainEx

# Define the object files
OBJECTS = main.o readAndConvert.o

# The default target to build
all: $(TARGET)

# Rule to link object files into the final executable
$(TARGET): $(OBJECTS)
	$(CXX) $(LDFLAGS) -o $@ $(OBJECTS)
	
# Rule to compile main.cpp into main.o
main.o: main.cpp readAndConvert.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Rule to compile readAndConvert.cpp into readAndConvert.o
readAndConvert.o: readAndConvert.cpp readAndConvert.h
	$(CXX) $(CXXFLAGS) -c readAndConvert.cpp

# Rule to clean up the build files
clean:
	rm -f $(OBJECTS) $(TARGET)

