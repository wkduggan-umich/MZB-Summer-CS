#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

/* 
    ====================================     TASK     =====================================
    Task: Implement two searching functions. First, implement the linear search. This 
    function should simply loop over the array until the desired number is found. If the 
    number is never found, return -1 to signify that. Second, implement the core loop of
    the binary search function. To get you started, here are the basic steps of the loop:

    Binary Search Loop Steps:
        1. Calculate the middle index of the array
        2. If this value is greater than the desired number, then set high to be one less
           than the middle value. 
        3. If this value is less than the desired number, then set low to one more than 
           the middle value.
        4. If this value is the desired number, then return the middle index
        5. Loop until low is greater than high

    Here is a video that may be helpful for understanding binary search:
        https://www.youtube.com/watch?v=P3YID7liBug
    =======================================================================================

    ==================================== HOW TO RUN ME ====================================
    How to run me:
        First, compile the program:
            g++ -o search Searching_Test.cpp
        Next, run the program:
            ./search
    =======================================================================================
*/

//Finds the index of a number in an array
//Input: Array of distinct numbers, num to search for, size of the array
//Returns: index of number in the array. 
//        Otherwise, returns -1 if not found
int linear_search(int arr[], int num, int array_size){
    //TODO: implement the linear search function

    //Return -1 for not found
    return -1;
}

//Finds the index of a number in an array
//Input: Sorted array of distinct numbers
//Returns: index of number in the array. 
//        Otherwise, returns -1 if not found
int binary_search(int arr[], int num, int array_size){
    //Calculate the starting low and high values
    //DO NOT EDIT THESE VALUES
    int low = 0;
    int high = array_size - 1;

    //TODO: implement the loop of the binary search
    //HINT: middle = (high + low) / 2

    //Return -1 for not found
    return -1;
}