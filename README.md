# ECE231L Homework Week 3

## Overview

For this assignment I have given you some code to start with.  There are just a few places where
you will need to write code to implement functionality.

The file `numbers` contains a sorted list of 1,000,000 random numbers. This is the set of numbers which
we will want to search.

The file `search` contains an unsorted list of 2,000 random numbers. We want to search the set above for
each of the numbers in this file and show how many are in the above set.

## Linear Search

We are going to use two different methods to conduct our searches. In the file `linearsearch.cpp` I have
skeleton functions which you must implement. One version you are given a `std::vector<int>` to search.
The second version of the function you are given pointers to the `begin` and `end` of the array you need
to search.

## Binary Search

In the file `binsearch.cpp` I also have two skeleton functions which you must implement. Just like with the
linear search functions, one version you are given a `std::vector<int>` to search and the second function you
are given the `begin` and `end` pointers. The structure of the two functions will be nearly identical as there
will only be very small changes needed to implement using pointers.

## The `main` program

The `main()` function is located in the file `runtests.cpp`. At the top of `main`, add code to read the
two files `numbers` and `search` into two `std::vector<int>` objects. Additionally, copy the two blocks of code
which call the `linearsearch` functions, paste them below, and modify them to call the two `binarysearch`
functions.

## Timer.h

You will notice that I provided you a class called `Timer` in `Timer.h` which times the execution of a block.
I provided this class so you can see the timing of your functions, how long each takes to run. By default the
`Makefile` compiles code with the `-g` flag so you can step through your code with a debugger. But I also want
you to compile and run your code with optimizations turned on so you can also see the difference in the speed
of your functions and compare the run times when debug is on vs. run times when optimizations are turned on.

You should not have to modify the `Makefile` for this assignment. To compile your code with debug symbols, execute
the following commands:

    $ make clean
    $ make

Then to run, your program:

    $ ./runtests
    
To compile with optimizations:

    $ make clean
    $ make fast

And to run:

    $ ./runtests
    
## Deliverables

You will need to modify and submit the following files:

  1. `linearsearch.cpp`
  1. `binsearch.cpp`
  1. `runtests.cpp`
  1. `results.md` as described below.

I want you to create and submit a file called `results.md` which you talk about the results of
executing your code. Talk about the differences in execution time between the two versions of the linear
functions, the two versions of the binary functions, and the difference in execution time of linear vs.
binary searches. Also, talk about the difference in execution time when the code is run with debugging
symbols `-g` vs. with optimizations. This file will be 50% of your grade for this assignment.
