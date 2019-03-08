
#include <iostream>
#include <cmath>
using namespace std;

int jumpIt(int arr[], int currInd, int end);
typedef int* intPtr;
int main() {
    int rSize,size(6);
    intPtr arr1;
    int arr[]={0,3,80,6,57,10};
    cout<<"The lowest sequence possible is: "<<jumpIt(arr,arr[0],size-1)<<endl;
    
    
    //board with different #s
    cout<<"Enter length of your JumpIt! board: "<<endl;
    cin>>rSize;
    arr1=new int[rSize]();
    for(int i=1;i<rSize;i++){
        arr1[i]=(rand() % 100)+1;
    }
    cout<<"The lowest sequence possible is: "<<jumpIt(arr1,arr1[0], rSize-1)<<endl;

    return 0;
}
int jumpIt(int arr[], int currInd, int lastInd){//end is the last index of the array
    //Break case
    if(currInd == lastInd)
        return arr[lastInd];
    else{
        if(currInd + 1 == lastInd)
            return arr[currInd] + jumpIt(arr, currInd + 1, lastInd);
        
        else if(currInd + 2 == lastInd)
            return arr[currInd] + arr[lastInd];
        
        else{
            //compare values of index next to current position or 2 away
            if(jumpIt(arr, currInd + 1, lastInd) > jumpIt(arr, currInd + 2, lastInd))
                return arr[currInd] + jumpIt(arr, currInd + 2, lastInd);
            else
                return arr[currInd] + jumpIt(arr, currInd + 1, lastInd);
            
        }
    }
}
