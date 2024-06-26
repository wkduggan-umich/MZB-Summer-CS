/* 
    =======================================================================================
                                  SEARCHING TESTS DO NOT EDIT!
    =======================================================================================
*/


#include "Searching_Starter.hpp"

int main(){
    cout << "Testing Linear Search...\n";

    cout << "Testing Array: [1,2,3,4,5], Num: 4...";
    int arr[5] = {1,2,3,4,5};

    if(linear_search(arr, 4, 5) == 3){
        cout << "Pass!\n";
    } else {
        cout << "Fail!\n";
    }

    cout << "Testing Array: [1,2,3,4,5], Num: 1...";

    if(linear_search(arr, 1, 5) == 0){
        cout << "Pass!\n";
    } else {
        cout << "Fail!\n";
    }

    cout << "Testing Array: [1,2,3,4,5], Num: 6...";

    if(linear_search(arr, 6, 5) == -1){
        cout << "Pass!\n";
    } else {
        cout << "Fail!\n";
    }

    int arr_large[100000];

    for(int i = 0; i < 100000; ++i){
        arr_large[i] = 2 * i - 1;
    }

    cout << "Testing Large Array, Num: 81...";

    if(linear_search(arr_large, 81, 100000) == 41){
        cout << "Pass!\n";
    } else {
        cout << "Fail!\n";
    }

    cout << "Testing Large Array, Num: 1,425...";

    if(linear_search(arr_large, 1425, 100000) == 713){
        cout << "Pass!\n";
    } else {
        cout << "Fail!\n";
    }

    cout << "Testing Large Array, Num: -1...";

    if(linear_search(arr_large, -1, 100000) == 0){
        cout << "Pass!\n";
    } else {
        cout << "Fail!\n";
    }

    cout << "Testing Large Array, Num: 12,801...";

    if(linear_search(arr_large, 12801, 100000) == 6401){
        cout << "Pass!\n";
    } else {
        cout << "Fail!\n";
    }

    cout << "Testing Large Array, Num: 120,123...";

    if(linear_search(arr_large, 120123, 100000) == 60062){
        cout << "Pass!\n";
    } else {
        cout << "Fail!\n";
    }

    cout << "Testing Large Array, Num: 199,997...";

    if(linear_search(arr_large, 199997, 100000) == 99999){
        cout << "Pass!\n";
    } else {
        cout << "Fail!\n";
    }

    cout << "\n\n";

    cout << "Testing Binary Search...\n";

    cout << "Testing Array: [1,2,3,4,5], Num: 4...";

    if(binary_search(arr, 4, 5) == 3){
        cout << "Pass!\n";
    } else {
        cout << "Fail!\n";
    }

    cout << "Testing Array: [1,2,3,4,5], Num: 1...";

    if(binary_search(arr, 1, 5) == 0){
        cout << "Pass!\n";
    } else {
        cout << "Fail!\n";
    }

    cout << "Testing Array: [1,2,3,4,5], Num: 6...";

    if(binary_search(arr, 6, 5) == -1){
        cout << "Pass!\n";
    } else {
        cout << "Fail!\n";
    }

    cout << "Testing Large Array, Num: 81...";

    if(binary_search(arr_large, 81, 100000) == 41){
        cout << "Pass!\n";
    } else {
        cout << "Fail!\n";
    }

    cout << "Testing Large Array, Num: 1,425...";

    if(binary_search(arr_large, 1425, 100000) == 713){
        cout << "Pass!\n";
    } else {
        cout << "Fail!\n";
    }

    cout << "Testing Large Array, Num: -1...";

    if(binary_search(arr_large, -1, 100000) == 0){
        cout << "Pass!\n";
    } else {
        cout << "Fail!\n";
    }

    cout << "Testing Large Array, Num: 12,801...";

    if(binary_search(arr_large, 12801, 100000) == 6401){
        cout << "Pass!\n";
    } else {
        cout << "Fail!\n";
    }

    cout << "Testing Large Array, Num: 120,123...";

    if(binary_search(arr_large, 120123, 100000) == 60062){
        cout << "Pass!\n";
    } else {
        cout << "Fail!\n";
    }

    cout << "Testing Large Array, Num: 199,997...";

    if(binary_search(arr_large, 199997, 100000) == 99999){
        cout << "Pass!\n";
    } else {
        cout << "Fail!\n";
    }

}