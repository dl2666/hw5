#include <iostream>
#include <string>
using namespace std;

int nextSpace(string str,int currInd);
void analyzeWord(string& str, int currInd, int nextInd);
bool isDigit(char x);
int main(){
    string str;
    bool keepReading(true);
    int currInd(0),nextInd;
    
    cout<<"Please enter a line of text:"<<endl;
    getline(cin,str);
    
    while(keepReading){
        nextInd = nextSpace(str,currInd);
        //this will print the last word (whether all digits or not)
        if(nextInd==string::npos){
            if(isDigit(str[currInd])==true){
                for(int i=currInd;i<str.length();i++)
                    str[i]='x';
            }
            keepReading=false;
        }
        else{
            if(isDigit(str[currInd])==true){
                analyzeWord(str,currInd,nextInd);
                currInd = (nextInd + 1);
            }
            else
                currInd = (nextInd + 1);
        }
    }
    
    //exits while loop, print new string with x's instead of digits
    for(int i=0;i<str.length();i++)
        cout<<str[i];
    cout<<endl;
    return 0;
}

int nextSpace(string str,int currIndex){
    currIndex++;
    int nextInd = (int) str.find(" ",currIndex);
    return nextInd;
}

bool isDigit(char ch){
    if(ch>='0'&&ch<='9')
        return true;
    else
        return false;
}

void analyzeWord(string& str,int currInd,int nextInd){
    for(int i=currInd;i<nextInd;i++){
        str[i]='x';
    }
}


