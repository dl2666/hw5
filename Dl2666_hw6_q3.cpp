
#include <iostream>
using namespace std;

void reverseArray(int arr[], int arrSize);
void removeOdd(int arr[], int& arrSize);
void splitParity(int arr[],int arrSize);

void printArray(int arr[], int arrSize);

int main() {
    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;
    int arr2[10] = {21, 12, 6, 7, 14};
    int arr2Size = 5;
    int arr3[10] = {3, 6, 4, 1, 12};
    int arr3Size = 5;
    
    reverseArray(arr1, arr1Size);
    
    removeOdd(arr2, arr2Size);

    splitParity(arr3, arr3Size);
    
    cout<<endl;
   
    return 0;
}
void reverseArray(int arr[], int arrSize){
    for(int i=arrSize-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
}

void removeOdd(int arr[], int& arrSize){
    int evenCount(0);
    for (int i=0;i<arrSize;i++){
        if(arr[i]%2==0){
            evenCount++;
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    arrSize=evenCount;
}
void splitParity(int arr[],int arrSize){
    for (int i=0;i<arrSize;i++){
        if (arr[i]%2 != 0)
            cout<<arr[i]<<" ";
     }
    for (int i=0;i<arrSize;i++){
        if (arr[i]%2==0)
            cout<<arr[i]<<" ";
    }
    cout<<endl;
}
/*void printArray(int arr[], int arrSize){ int i;
    for (i = 0; i < arrSize; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    
}*/
