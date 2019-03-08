#include <iostream>
using namespace std;

int sumOfSquares(int arr[],int arrSize);
bool isSorted(int arr[],int arrSize);
int main() {
    int arrSize, num;
    cout<<"Please enter array size: "<<endl;
    cin>>arrSize;
    cout<<"Enter "<<arrSize<<" integers separated by spaces: "<<endl;
    int arr[arrSize];
    for(int i=0;i<arrSize;i++){
        cin>>num;
        arr[i]=num;
    }
    cout<<"Sum of each integer squared is "<<sumOfSquares(arr, arrSize)<<endl;;
  
    if(isSorted(arr, arrSize)==true){
        cout<<"The array is sorted"<<endl;
    }
    else
        cout<<"The Array is not sorted"<<endl;
    
    return 0;
}
int sumOfSquares(int arr[],int arrSize){
    if (arrSize==1)
        return (arr[0]*arr[0]);
    else
        return (sumOfSquares(arr, arrSize-1)+(arr[arrSize-1]*arr[arrSize-1]));
}
bool isSorted(int arr[],int arrSize){
    if (arrSize==1||arrSize==0){
        return true;
    }
    else{
        if(arr[arrSize-1]<arr[arrSize-2])
            return false;
        else
            return isSorted(arr, arrSize-1);
    }
}
