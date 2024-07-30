#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//Finds the index of a number in an array
//Input: Array of distinct numbers, num to search for, size of the array
//Returns: index of number in the array. 
//        Otherwise, returns -1 if not found
int linear_search(int arr[], int num, int array_size){
    for(int i = 0; i < array_size; i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}

//Finds the index of a number in an array
//Input: Sorted array of distinct numbers
//Returns: index of number in the array. 
//        Otherwise, returns -1 if not found
int binary_search(int arr[], int num, int array_size){
    int low = 0;
    int high = array_size - 1;

    while(low <= high){
        int middle = (low + high) / 2;

        if(arr[middle] < num){
            low = middle + 1;
        } else if(arr[middle] > num){
            high = middle - 1;
        } else {
            return middle;
        }
    }
    return -1;
}