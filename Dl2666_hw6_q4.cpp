#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

const int PIN_NUM=12587;
bool readPin(string secretPin,string userPin);
string convertPin(const int PIN_NUM,int pinArr[]);

int main()
{
    int pinArr[10];
    string userPin, secretPin;
    srand((unsigned)time(0));
    
    cout<<"Please enter your PIN according to the following mapping: \nPIN:\t";
    for(int i=0;i<10;i++){
        pinArr[i]=(rand() % 3) + 1;
        cout<<i<<" ";
    }
    
    cout<<"\nNUM:\t";
    for(int i:pinArr)
        cout<<i<<" ";
    cout<<endl;
    cin>>userPin;
    
    secretPin=convertPin(PIN_NUM,pinArr);
    
    if (readPin(secretPin,userPin)==true)
        cout<<"Your pin is correct"<<endl;
    else
        cout<<"Your pin is NOT correct"<<endl;
    return 0;
}

/*converts pin constant to its corresponding secret pin
and converts to string for later comparison*/
string convertPin(const int PIN_NUM,int pinArr[])
{
    int div(10000),dig,temp(PIN_NUM);
    string secretPin;
    
/*outer loop runs 5 times to individually convert each int
 innner loop iterates through array to conver to secret
 ints and cast to string*/
    for(int i=0;i<5;i++){
        dig=(temp/div);
        for(int j=0;j<10;j++)
            if(j==dig)
            {
                char addInt = pinArr[j] + '0';
                secretPin+=addInt;
            }
        temp=temp%div;
        div/=10;
    }
    return secretPin;
}

/*compares strings of actual secret pin
 and user's entered secret pinr*/
bool readPin(string secretPin,string userPin)
{
    if(secretPin==userPin)
        return true;
    else
       return false;
}

