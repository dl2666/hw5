
#include <iostream>
#include <string>
using namespace std;

typedef string* strPtr;
string* createWordsArray(string sentence, int& outWordsArrSize);
int wordCount(string str);
int main() {
    string sentence;
    int outWordsArrSize;
    
    cout<<"Please enter a sentence: "<<endl;
    getline(cin,sentence);
    outWordsArrSize=(int)sentence.length();
    
    strPtr returnArr = createWordsArray(sentence, outWordsArrSize);
   
    for(int i=0;i<outWordsArrSize;i++){
        cout<<returnArr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
string* createWordsArray(string sentence, int& outWordsArrSize){
    int nextInd,numWords,countSpace(0);
    for(int i=0;i<sentence[i];i++){
        nextInd=(int)sentence.find(" ",i);
        if(nextInd!=string::npos){
            countSpace++;
            i=nextInd+1;
        }
    }
    numWords = countSpace+1;
    outWordsArrSize=numWords;
    strPtr wordArr = new string[numWords];
    
    int currInd(0),length;
    for(int i=0;i<numWords;i++){
        nextInd=(int)sentence.find(" ",currInd);
        length=nextInd-currInd;
        wordArr[i]=sentence.substr(currInd,length);
        currInd=nextInd+1;
    }
    
   
    return wordArr;
}
