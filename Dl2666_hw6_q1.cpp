#include <iostream>

using namespace std;

int minInArray(int arr[],int arrSize);
void minIndices(int minInt,int arr[],int arrSize);
int main() {
   
    int arrSize(20),minInt,currInt;
        int arr[arrSize];
    
    cout<<"Please enter 20 integers separated by a space: "<<endl;
    for(int i=0;i<arrSize;i++){
        cin>>currInt;
        arr[i]=currInt;
    }
   
    minInt=minInArray(arr,arrSize);
    minIndices(minInt,arr,arrSize);
    
    cout<<"The minimum value is: "<<minInt;
    return 0;
}

int minInArray(int arr[],int arrSize){
    int minInt(0);
    for(int i=0;i<arrSize;i++){
        if(i==0)
            minInt=arr[i];
        else
            if(arr[i]<=minInt)
                minInt=arr[i];
    }
    return minInt;
    
}
void minIndices(int minInt,int arr[],int arrSize){
    cout<<"The minimum value is "<<minInt<<", and it's located in the following indices: ";
    for(int i=0;i<arrSize;i++){
        if(arr[i]==minInt)
            cout<<i<<" ";
    }
    cout<<endl;
}
