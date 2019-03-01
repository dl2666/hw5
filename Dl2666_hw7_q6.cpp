#include <iostream>
#include <vector>
using namespace std;

typedef int* intPtr;
void main1();
void main2();
int search(int *intArr, int size,int &ind, int searchNum);

int main() {
    main1();
    main2();
    return 0;
}
void main1(){
    int size(3),ind(0),userNum, searchNum, searchVal(0);
    bool printVals=true;
    intPtr intArr = new int[size];
    
    cout<<"Please enter a sequence of positive integers, each in a separate line"
    <<"\n End your input by typing -1"<<endl;
    cin>>userNum;
    while(userNum!=-1){
        if(ind>=size){
            intPtr intArr2 = new int[size*2];
            for(int i=0;i<size;i++){
                intArr2[i]=intArr[i];
            }
            delete [] intArr;
            intArr = intArr2;
            size *= 2;
        }
        intArr[ind]=userNum;
        ind++;
        cin>>userNum;
    }
    cout<<"Please enter a number you want to search: "<<endl;
    cin>>searchNum;

    ind=0;
    searchVal = search(intArr,size,ind,searchNum);
    
    if(searchVal==-1)
        cout<<searchNum<<" was not found in sequence"<<endl;
    else{
        cout<<searchNum<<" shows in lines "<<searchVal;
        while(printVals){
            searchVal= search(intArr,size,ind,searchNum);
            if(searchVal!=-1)
                cout<<", "<<searchVal;
            else
                printVals=false;
        }
        cout<<"."<<endl;
    }
}
    
int search(int *intArr, int size,int &ind, int searchNum){
    for(int i=ind;i<size;i++){
        if(intArr[i]==searchNum){
            ind=i+1;
            return ind;
        }
    }
    return -1;
}

void main2(){
    vector<int> intVect, searchVect;
    int userInt,searchInt,index(0);
    
    cout<<"Please enter a sequence of positive integers, each in a separate line"
    <<"\n End your input by typing -1"<<endl;
    cin>>userInt;
    while(userInt!=-1){
        intVect.push_back(userInt);
        cin>>userInt;
    }
    cout<<"Please enter a number you want to search: "<<endl;
    cin>>searchInt;
    
    for(unsigned int i=0;i<intVect.size();i++){
        if(intVect[i]==searchInt)
            searchVect.push_back(i+1);
    }
    
    if(searchVect.size()==0)
        cout<<searchInt<<" was not found in sequence"<<endl;
    else{
        cout<<searchInt<<" shows in lines "<<searchVect[index];
        index++;
        while(index<searchVect.size()){
            if(searchVect[index]!='\0'){
                cout<<", "<<searchVect[index];
                index++;
            }
        }
        cout<<"."<<endl;
    }
}
