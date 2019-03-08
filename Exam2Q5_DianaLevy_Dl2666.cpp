
#include <iostream>
using namespace std;
void alternatingParityReordering(int arr[], int n);
typedef int* intPtr;
int main() {
    int arr[]={2,8,1,7,3,4};
    int size = 6;
    alternatingParityReordering(arr, size);
    
    
    return 0;
}
void alternatingParityReordering(int arr[], int n){
    intPtr oddArr=new int[n/2];
    intPtr evenArr=new int[n/2];
    intPtr temp = new int[n];
    int indE(0),indO(0);
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evenArr[indE]=arr[i];
            indE++;
        }
        else{
            oddArr[indO]=arr[i];
            indO++;
        }
    }
    if(arr[0]%2==0){
        int indE(0),indO(0);
        for(int i=0;i<n;i++){
            if(i%2==0){
                temp[i]=evenArr[indE];
                indE++;
            }
            else{
                temp[i]=oddArr[indO];
                indO++;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(i%2==0){
                temp[i]=oddArr[indO];
                indO++;
            }
            else{
                temp[i]=evenArr[indE];
                indE++;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
   
}
