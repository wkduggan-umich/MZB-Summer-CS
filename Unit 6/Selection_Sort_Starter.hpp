#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* 
    ====================================     TASK     =====================================
    Task: The selection sort function below is intentionally buggy. There are syntax bugs
    and implementation bugs in the code. First, understand how selection sort works. Here
    is a video explaining the mechanics of the sort:
      
        https://www.youtube.com/watch?v=g-PGLbMth_g
    
    Once you feel comfortable with the selection sort proccess. Look at the function below.
    Try to understand how each part of function works. Finally, try to fix the bugs so that 
    all of the tests pass. There are a total of 6 bugs!

    Challenge: Write the selection sort yourself! This will definitely introduce you to 
    the debugging process. If you want try this, just delete the code inside the function
    and implement it all yourself.
    =======================================================================================

    ==================================== HOW TO RUN ME ====================================
    How to run me:
        First, compile the program:
            g++ -o selection_sort Selection_Sort_Checker.cpp
        Next, run the program:
            ./selection_sort
    =======================================================================================
*/


void selection_sort(vector<int>& v){
    //loop over all of the array
    for(int i = 0; i <= v.length(); ++i){ 
        
        //used to get the value and location of the min
        int min_index = i;
        int min = v[i];
        
        //loop over the remaining part of the array
        for(int j = i; j < v.length(); ++j) 
            
            //check if an item is smaller than the min
            if(v[i] < min){   
                
                min_index = j  
                min = v[j];

            }

        }
        
        //swap the two 
        v[i] = v[min_index]; 
        v[min_index] = temp;

    }

}