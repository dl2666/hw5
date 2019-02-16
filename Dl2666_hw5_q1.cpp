//user input positive integer
//output is fib num that is equal user's input in finonacci sequence

#include <iostream>
using namespace std;

int fib(int num);
int main() {
    int num,fibNum;
    
    cout<<"Please enter positive integer (max 100): ";
    cin>>num;
    
    fibNum=fib(num);
    cout<<fibNum<<endl;
    
    
    return 0;
}
int fib(int num)
{
    int index0 = 0, index1= 1, curr, i;
    if( num== 0)
        return index0;
    for (i = 2; i <= num; i++)
    {
        curr = index0 + index1;
        index0 = index1;
        index1 = curr;
    }
    return index1;
}


