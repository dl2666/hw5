//
//  main.cpp
//  Exam2Q7_dl2666
//
//  Created by Diana Levy on 3/7/19.
//  Copyright © 2019 Diana Levy. All rights reserved.
//

#include <iostream>
using namespace std;

int printForwardAndBackwards(int arr[], int n);
int main() {
    int arr[]={7,1,51,4,2};
    printForwardAndBackwards(arr, 5);
  
    return 0;
}
int printForwardAndBackwards(int arr[], int n){
    if(n>0){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        return n;
    }
    else{
        return printForwardAndBackwards(arr, n-1);
        
    }
    
    
    

    

    
    
  

    

    
}
