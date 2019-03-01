#include <iostream>
#include <string>
using namespace std;

int nextWord(string str,int currIndex);
void charFrequency(string str);
const int ALPHA_SIZE=26;
int main() {
    string userStr;
    int currIndex(0),numWords;
    
    cout<<"Please enter a line of text: "<<endl;
    getline(cin,userStr);
    for(int i=0;i<userStr.length();i++){
        userStr[i]=tolower(userStr[i]);
    }
    numWords=nextWord(userStr,currIndex);
    cout<<numWords<<"\twords"<<endl;
    charFrequency(userStr);
   
    return 0;
}

int nextWord(string str,int currIndex){
    int wordCount(0);
    int nextInd = (int) str.find(" ",currIndex);
    while (nextInd!=string::npos) {
        wordCount++;
        currIndex=nextInd+1;
        nextInd = (int) str.find(" ",currIndex);
    }
    return wordCount+1;
}

void charFrequency(string str){
    int charCount[ALPHA_SIZE];
    //set all indices to 0, will increase
    //if index +'a' is seen
    for(int i=0;i<ALPHA_SIZE;i++){
        charCount[i]=0;
    }
    //only count letters, add one to correlating ind #
    //'a'=0,'b'=1,'c'=2,etc
    for(int i=0;i<str.length();i++){
        if(str[i]>='a'&&str[i]<='z')
            charCount[str[i] -'a']+=1;
    }
    //don't print letters that didnt occur
    //this array will print letters alphabetically
    for(int i=0;i<ALPHA_SIZE;i++){
        if(charCount[i]!=0)
            cout<<charCount[i]<<"\t"<<(char)(i+'a')<<endl;
    }
}

