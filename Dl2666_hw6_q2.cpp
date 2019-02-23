//palindromes
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str);

int main() {
    string str;
  
    
    cout<<"Please enter a word: ";
    cin>>str;
   
    if(isPalindrome(str)==true)
        cout<<str<<" is a palindrome"<<endl;
    else
        cout<<str<<" is NOT a palindrome"<<endl;
}
bool isPalindrome(string str){
    if(str[0]==str[str.length()-1])
        return true;
    else
        return false;
    
}
