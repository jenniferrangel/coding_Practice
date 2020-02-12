# **************************************************
# Variables to control Makefile operation
CXX= -g++ -static-libstdc++
CXXFLAGS= -Wall -g -O3
#*****************************************************
# Targets needed to bring the executable up to date
all: program 

program:obj_practice_3.o Roster.o student.o 
	$(CXX) $(CXXFLAGS) obj_practice_3.o Roster.o student.o -o program.out

obj_practice_3.o: obj_practice_3.cpp
	$(CXX) $(CXXFLAGS) -c obj_practice_3.cpp

Roster.o: Roster.cpp
	$(CXX) $(CXXFLAGS) -c Roster.cpp

student.o: student.cpp
	$(CXX) $(CXXFLAGS) -c student.cpp

clean: wipe
		rm -rf *o program program.out

wipe:
