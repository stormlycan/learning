# Makefile for C and C++ Learning Projects

# Compiler settings
CC = gcc
CXX = g++
CFLAGS = -Wall -Wextra -std=c99
CXXFLAGS = -Wall -Wextra -std=c++11

# Targets
all: hello_world_c hello_world_cpp classes_and_objects constructors_destructors 
	inheritance pointers polymorphism stl_lib

# C Programs
hello_world_c: coding/c/c_project_01_hello_world.c
	$(CC) $(CFLAGS) -o hello_world_c coding/c/c_project_01_hello_world.c

variables_and_input: coding/c/c_project_03_variables_and_input.c
	$(CC) $(CFLAGS) -o variables_and_input coding/c/c_project_03_variables_and_input.c

control_structures: coding/c/c_project_04_control_structures.c
	$(CC) $(CFLAGS) -o control_structures coding/c/c_project_04_control_structures.c

functions: coding/c/c_project_05_functions.c
	$(CC) $(CFLAGS) -o functions coding/c/c_project_05_functions.c

arrays: coding/c/c_project_06_arrays.c
	$(CC) $(CFLAGS) -o arrays coding/c/c_project_06_arrays.c

pointers: coding/c/c_project_07_pointers.c
	$(CC) $(CFLAGS) -o pointers coding/c/c_project_07_pointers.c

structures: coding/c/c_project_08_structures.c
	$(CC) $(CFLAGS) -o structures coding/c/c_project_08_structures.c

file_io: coding/c/c_project_09_file_io.c
	$(CC) $(CFLAGS) -o file_io coding/c/c_project_09_file_io.c

dynamic_memory: coding/c/c_project_10_dynamic_memory.c
	$(CC) $(CFLAGS) -o dynamic_memory coding/c/c_project_10_dynamic_memory.c

cpp_basics: coding/cpp/cpp_project_11_cpp_basics.cpp
	$(CXX) $(CXXFLAGS) -o cpp_basics coding/cpp/cpp_project_11_cpp_basics.cpp

# C++ Programs
hello_world_cpp: coding/cpp/cpp_02_hello_world.cpp
	$(CXX) $(CXXFLAGS) -o hello_world_cpp coding/cpp/cpp_02_hello_world.cpp

classes_and_objects: coding/cpp/cpp_project_12_classes_and_objects.cpp
	$(CXX) $(CXXFLAGS) -o classes_and_objects coding/cpp/cpp_project_12_classes_and_objects.cpp

constructors_destructors: coding/cpp/cpp_project_13_constructors_destructors.cpp
	$(CXX) $(CXXFLAGS) -o constructors_destructors coding/cpp/cpp_project_13_constructors_destructors.cpp

inheritance: coding/cpp/cpp_project_14_inheritance.cpp
	$(CXX) $(CXXFLAGS) -o inheritance coding/cpp/cpp_project_14_inheritance.cpp

polymorphism: coding/cpp/cpp_project_15_polymorphism.cpp
		$(CXX) $(CXXFLAGS) -o polymorphism coding/cpp/cpp_project_15_polymorphism.cpp

stl_lib: coding/cpp/cpp_project_16_stl.cpp
	$(CXX) $(CXXFLAGS) -o stl_lib coding/cpp/cpp_project_16_stl.cpp

smart_ptr: coding/cpp/cpp_project_17_smart_pointers.cpp
	$(CXX) $(CXXFLAGS) -o smart_ptr coding/cpp/cpp_project_17_smart_pointers.cpp

# Clean build files
clean:
	rm -f hello_world_c hello_world_cpp cpp_basics classes_and_objects constructors_destructors inheritance polymorphism stl_lib

.PHONY: all clean
