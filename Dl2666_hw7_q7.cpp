#include <iostream>
#include <cmath>
using namespace std;

typedef int* intPtr;
int* findMissing(int arr[], int n, int& resArrSize);
int main() {
    int n,resArrSize(0);
    intPtr newArr;
    cout<<"Enter a logical size for array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=rand()%(n+1);
    }
    newArr = findMissing(arr,n, resArrSize);
    cout<<"Original array of ["<<n<<"]: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Missing number(s) include ["<<resArrSize<<"]: ";
    for(int i=0;i<resArrSize;i++){
        cout<<newArr[i]<<" ";
    }
    cout<<"\n"<<endl;
    return 0;
}

int* findMissing(int arr[], int n, int& resArrSize){
    intPtr resArr;
    int findNum;
    
    resArr=new int[n];
    findNum = 0;
    
    while(findNum<=n){
        int count(0);
        for(int i=0;i<n;i++){
            if(arr[i]!=findNum)
                count++;
            else
                i=n-1;
        }
        if (count==n){
            resArr[resArrSize]=findNum;
            resArrSize++;
        }
        findNum++;
    }
    intPtr resArr2=new int[resArrSize];
    for(int i=0;i<resArrSize;i++){
        resArr2[i]=resArr[i];
    }
    delete resArr;
    resArr=resArr2;
    return resArr;
    
}
