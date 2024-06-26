/* 
    =======================================================================================
                            SELECTION SORT CHECKER DO NOT EDIT!
    =======================================================================================
*/


#include "Selection_Sort_Starter.hpp"

vector<int> make_vector(int arr[], int array_size){
    vector<int> v;
    for(int i = 0; i < array_size; ++i){
        v.push_back(arr[i]);
    }
    return v;
}

void print_vector(vector<int> arr){
    cout << "[ ";
    for(int i = 0; i < arr.size(); i++){
        if(i != arr.size() - 1){
            cout << arr[i] << " , ";
            continue;
        }
        cout << arr[i];
    }
    cout << " ]\n";
}

void check_array(vector<int> sorted_vector, vector<int> selection_sort_vector){
    for(int i = 0; i < sorted_vector.size(); ++i){
        if(sorted_vector[i] != selection_sort_vector[i]){
            cout << "FAILED!\n";
            return;
        }
    }
    cout << "PASSED!\n"; 
}

int main(){
    cout << "Test 1: Small Array...\n";
    int arr1[5] = {5, 1, 4, 7, 2};
    vector<int> v1 = make_vector(arr1, 5);
    vector<int> sorted_v1 = v1;
    std::sort(sorted_v1.begin(),sorted_v1.end());
    cout << "Original Array: ";
    print_vector(v1);
    selection_sort(v1);
    cout << "Selection Sort Output: ";
    print_vector(v1);
    check_array(v1, sorted_v1);

    cout << "Test 2: Medium Array...\n";
    int arr2[11] = {6, 123, 14, 1, 421, 142, 2, 3, 4, 1, 3};
    vector<int> v2 = make_vector(arr2, 11);
    vector<int> sorted_v2 = v2;
    std::sort(sorted_v2.begin(),sorted_v2.end());
    cout << "Original Array: ";
    print_vector(v2);
    selection_sort(v2);
    cout << "Selection Sort Output: ";
    print_vector(v2);
    check_array(v2, sorted_v2);

    cout << "Test 3: Large Array...\n"; 
    int arr3[1000];
    int num = 10;
    for(int i = 0; i < 1000; ++i){
        arr3[i] = num;
        num = 3*i + 4*num;
        if(num > 400){
            num = num % 400;
        }
    }
    vector<int> v3 = make_vector(arr3, 1000);
    vector<int> sorted_v3 = v3;
    std::sort(sorted_v3.begin(),sorted_v3.end());
    selection_sort(v3);
    check_array(v3, sorted_v3);

    cout << "Test 4: Huge Array...\n"; 
    int arr4[10000];
    for(int i = 0; i < 10000; ++i){
        arr4[i] = num;
        num = 3*i + 4*num;
        if(num > 100000){
            num = num % 100000;
        }
    }
    vector<int> v4 = make_vector(arr4, 10000);
    vector<int> sorted_v4 = v4;
    std::sort(sorted_v4.begin(),sorted_v4.end());
    selection_sort(v4);
    check_array(v4, sorted_v4);
}