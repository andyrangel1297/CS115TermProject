CS115 Project Part 1
====================

Program Description
--------------------

The program implements eight different sorting algorithms including Selection, Merge, Insertion, Bubble, Quick, Radix, Heap, and Counting sorts.  For each sorting algorithm, the program measures the time taken to sort an array of size 10, 100, 1000, and 10000 in the best, worst, and average case.

Getting Started
--------------------

To use this program, follow these steps:
    
    1. Clone the repository or download the source code files
    2. Open the terminal or command prompt and navigate to the directory containing the source code files.
    3. Compile the source code files using a C++ compiler.  
    
    For example, using g++: g++ -o experiment experiment.cpp Selection.cpp Merge.cpp Insertion.cpp Bubble.cpp Radix.cpp Heap.cpp Counting.cpp

    4. Run the program by typing './experiment' in the terminal.

Dependencies
--------------------

This program was implemented using C++ and requires a C++ compiler to comile and run the source code files.

Results
--------------------

The program prints the time taken for each sorting algorithm to sort an array of size 10, 100, 1000, and 100000 in the best, worst, and average case.  The results are printed to the console in microseconds.


CS115 Project Part 2 - Pair Sum Problem
====================

Program Description
--------------------

The program solves the Pair Sum problem by finding a pair of elements in an integer array that add up to a given sum.  It implements two algorithms: brute force and efficient.

Getting Started
--------------------

To use this program, follow these steps:
    
    1. Clone the repository or download the source code files
    2. Open the terminal or command prompt and navigate to the directory containing the source code files.
    3. Compile the source code files using a C++ compiler.  
    
    For example, using g++: g++ PairSum.cpp -o experiment2

    4. Run the program by typing './experiment2' in the terminal.

Dependencies
--------------------

This program was implemented using C++ and requires a C++ compiler to comile and run the source code files.

Results
--------------------

This program implements a brute force algorithm and an efficient algorithm for finding pairs of integers in an array that add up to a given value.  The program also uses a counting sort algorithm to sort the input array before searching for pairs.

When the program is run, the following output is generated:

    1 1 3 7 13

    Brute Force: Pair not found
    Efficient: Pair not found

In this example, the input array '{3, 1, 1, 13, 7, 5}' is first sorted using the counting sort algorithm.  The sorted array is then printed to the console.  Next, the program attempts to find a pair of integers taht add up to the value '10' using both the brute force and effiecient algorithms.  In this case, no such pair is found.

Note that the performance of the brute force and efficient algorithms may vary depending on the size and characteristics of the input array.  In few cases, the brute force algorithm may be faster than the effiecient algorithm.  For example, this can happen if the array is very small in which case the setting up the efficient algorithm may outweigh the savings of the brute force algorithm.  Another scenario may be when theinput array is already or nearly already sorted making it so that the counting sort is unecessary.


Authors
--------------------

This program was created by Andy Rangel, Adrian Castillo, Christian Reusch, Mohammad Skouti, and Ramon Cortes.
