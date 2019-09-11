# Default compile flags.
# Use these flags to compile for the debugger
CXXFLAGS=-Wall -g -Og

 
# Use the C++ compiler to link
LINK.o = $(LINK.cc)

# First target, what is compiled by default
all: runtests

# Use these flags to compile for speed
fast: CXXFLAGS=-Wall -O3
fast: runtests

# the objects needed for the runtests program
runtests: runtests.o binsearch.o linearsearch.o

# clean up
clean:
	rm -f runtests *.o
