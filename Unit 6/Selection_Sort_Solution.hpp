#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//There were a total of 6 bugs placed in the starter code. The bugs have been outline here. 
//The code below is correct. However, there may be other ways to correct the bugs so if they
//pass the tests then they're good.

void selection_sort(vector<int>& v){
    for(int i = 0; i < v.size(); ++i){ //Bug 1: no less then or equals to -> should be less than
        int min_index = i;
        int min = v[i];
        for(int j = i + 1; j < v.size(); ++j){ //Bug 2 & 3: should be i + 1 and no curly bracket
            if(v[j] < min){ //Bug 4: should be v[j] instead of v[i]
                min_index = j; //Bug 5: no semicolon
                min = v[j];
            }
        }
        int temp = v[i]; //Bug 6: need to use a temp in order to properly swap
        v[i] = v[min_index];
        v[min_index] = temp;
    }
}