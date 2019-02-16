#include <cmath>
#include <iostream>
using namespace std;

void printDivisors(int num);
int main() {
    int userNum;
    cout<<"Please enter a positive integer >= 2: ";
    cin>>userNum;
    
    printDivisors(userNum);
    
    return 0;
}
void printDivisors(int num){
    int sqrtNum;
    sqrtNum= sqrt(num);
    for(int i=1;i<=sqrtNum;i++){
        if (num%i==0)
            cout<<i<<" ";
    }
    for(int i=sqrtNum;i>=1;i--){
        if ((num%i==0)&&(num/i!=i))
            cout<<(num/i)<<" ";
    }
    cout<<endl;
    
    
}
