//determine if two strings are anagrams
#include <iostream>
#include <string>
using namespace std;

int* charCount(string str,int array[]);
bool compareStrs(int arrayOne[], int arrayTwo[]);
const int ALPHA_SIZE=26;

int main() {
    string str1, str2;
    int arrayOne[ALPHA_SIZE],arrayTwo[ALPHA_SIZE];
    cout<<"Enter 1st line of text: "<<endl;
    getline(cin,str1);
    cout<<"Enter 2nd line of text: "<<endl;
    getline(cin,str2);
    
    charCount(str1, arrayOne);
    charCount(str2, arrayTwo);

    if(compareStrs(arrayOne, arrayTwo)==true)
        cout<<str1<<" and "<<str2<<" are anagrams"<<endl;
    else
        cout<<str1<<" and "<<str2<<" are not anagrams"<<endl;
    
    return 0;
}

int* charCount(string str,int array[]){
    for(int i=0;i<str.length();i++){
        str[i]=tolower(str[i]);
    }
    for(int i=0;i<ALPHA_SIZE;i++){
        array[i]=0;
    }
    for(int i=0;i<str.length();i++){
        if(str[i]>='a'&&str[i]<='z')
            array[str[i] -'a']+=1;
    }
    //return array with frequences of each letter str[0]='a' to str[25]='z'
    return array;
}

bool compareStrs(int arrayOne[], int arrayTwo[]){
    for(int i=0;i<ALPHA_SIZE;i++){
        if(arrayOne[i]==arrayTwo[i])
            i++;
        else
            return false;
    }
    //all indices have been checked to equal each other
    return true;
}
