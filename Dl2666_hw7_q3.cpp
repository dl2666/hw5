
#include <iostream>
using namespace std;

typedef int* intArrayPtr;

void oddsKeepEvensFlip(int arr[], int arrSize);

int main() {
    int arrSize;
    intArrayPtr arrPtr;
    
    cout<<"How many integers in your array?: "<<endl;
    cin>>arrSize;
    arrPtr = new int[arrSize];
    
    cout<<"Enter "<<arrSize<<" integers: "<<endl;
    for(int i=0;i<arrSize;i++){
        cin>>arrPtr[i];
    }
    oddsKeepEvensFlip(arrPtr, arrSize);
    for(int i=0;i<arrSize;i++){
        cout<<arrPtr[i]<<" ";
    }

    return 0;
}
void oddsKeepEvensFlip(int arr[], int arrSize){
    int newArr[arrSize],index(0);
    for(int i=0;i<arrSize;i++){
        if(arr[i]%2!=0){
            newArr[index]=arr[i];
            index++;
        }
    }
    for(int i=arrSize-1;i>=0;i--){
        if(arr[i]%2==0){
            newArr[index]=arr[i];
            index++;
        }
    }
    delete arr;
    
    for(int i=0;i<arrSize;i++)
        arr[i]=newArr[i];
    cout<<endl;
}
