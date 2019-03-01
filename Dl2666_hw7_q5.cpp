#include <iostream>
#include <string>
using namespace std;

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize);
/*returns the base address of the array (containing the positive numbers), and updates the output parameter outPosArrSize with the array’s logical size. */
void getPosNums2(int* arr, int arrSize,int*& outPosArr, int& outPosArrSize);
/* updates the output parameter outPosArr with the base address of the array (containing the positive numbers), and the output parameter outPosArrSize with the array’s logical size.*/
int* getPosNums3(int* arr, int arrSize, int* outPosArrSizePtr);
/* returns the base address of the array (containing the positive numbers), and uses the pointer outPosArrSizePtr to update the array’s logical size.*/
void getPosNums4(int* arr, int arrSize,int** outPosArrPtr, int* outPosArrSizePtr);
/* uses the pointer outPosArrPtr to update the base address of the array (containing the positive numbers), and the pointer outPosArrSizePtr to update the array’s logical size.*/
typedef int* intPtr;
int main() {
    int outPosArrSize(0),arrSize;
    intPtr arr, outPosArr, outPosArrSizePtr, *outPosArrPtr;
   
    cout<<"How many integers in your array?: "<<endl;
    cin>>arrSize;
    
    arr = new int[arrSize];
    
    cout<<"Please input "<<arrSize<<" integers, separated by spaces:"<<endl;
    for(int i=0;i<arrSize;i++)
        cin>>arr[i];
 
    outPosArr = getPosNums1(arr, arrSize, outPosArrSize);
    cout<<"Test int Function 1:"<<endl;
    for(int i=0;i<outPosArrSize;i++)
        cout<<outPosArr[i]<<" ";
    
    cout<<endl;
    
    getPosNums2(arr, arrSize, outPosArr, outPosArrSize);
    cout<<"Test Void Function 2:"<<endl;
    for(int i=0;i<outPosArrSize;i++)
        cout<<outPosArr[i]<<" ";
    
    cout<<endl;
    
    //Below ptrs used in functions 3 & 4 to update original array
    outPosArrSizePtr = &arrSize;
    outPosArrPtr = &arr;
    
    arr=getPosNums3(arr, arrSize, outPosArrSizePtr);
    cout<<"Test int Function 3:"<<endl;
    for(int i=0;i<arrSize;i++)
        cout<<arr[i]<<" ";
    
    cout<<endl;
    
    getPosNums4(arr, arrSize, outPosArrPtr, outPosArrSizePtr);
    cout<<"Test Void Function 4:"<<endl;
    for(int i=0;i<arrSize;i++)
        cout<<arr[i]<<" ";
    
    cout<<endl;

    return 0;
}

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize){
    int countPos(0),index(0);
    intPtr posArr;
    for(int i=0;i<arrSize;i++){
        if(arr[i]>0)
            countPos++;
    }
    outPosArrSize=countPos;
    posArr=new int[outPosArrSize];

    for(int i=0;i<arrSize;i++){
        if(arr[i]>0){
            posArr[index]=arr[i];
            index++;
        }
    }
    return posArr;
}

void getPosNums2(int* arr, int arrSize,int*& outPosArr, int& outPosArrSize){
    int countPos(0),index(0);
    for(int i=0;i<arrSize;i++){
        if(arr[i]>0)
            countPos++;
    }
    outPosArrSize=countPos;
    outPosArr=new int[outPosArrSize];
    
    for(int i=0;i<arrSize;i++){
        if(arr[i]>0){
            outPosArr[index]=arr[i];
            index++;
        }
    }
}

int* getPosNums3(int* arr, int arrSize, int* outPosArrSizePtr){
    int count(0),index(0);
    intPtr posArr;
    for(int i=0;i<arrSize;i++){
        if(arr[i]>0)
            count++;
    }
    *outPosArrSizePtr=count;

    posArr=new int[count];
    for(int i=0;i<arrSize;i++){
        if(arr[i]>0){
            posArr[index]=arr[i];
            index++;
        }
    }
    cout<<endl;
   
    return posArr;
}
void getPosNums4(int* arr, int arrSize,int** outPosArrPtr, int* outPosArrSizePtr){
    int count(0),index(0);
    intPtr posArr;
    for(int i=0;i<arrSize;i++){
        if(arr[i]>0)
            count++;
    }
    *outPosArrSizePtr=count;
    posArr=new int[count];
    for(int i=0;i<arrSize;i++){
        if(arr[i]>0){
            posArr[index]=arr[i];
            index++;
        }
    }
    *outPosArrPtr=posArr;
    
    cout<<endl;
}
