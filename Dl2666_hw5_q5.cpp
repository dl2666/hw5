#include <cmath>
#include <iostream>
using namespace std;

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num, int outSumDivs);

int main(int argc, const char * argv[]) {
    int userNum;
    cout<<"Enter a positive integer >= 2: ";
    cin>>userNum;
    
    for(int i=2;i<=userNum;i++){
        int outCountDivs(1),outSumDivs(1);
        analyzeDividors(i,outCountDivs,outSumDivs);
        if(isPerfect(i,outSumDivs)==true){
            
            cout<<i<<" is a Perfect Number"<<endl;
        }
        else{
            if(outSumDivs>=2 && outSumDivs<=userNum){
                int possAmicable =outSumDivs;
                int possSumDivs(0);
                for(int i=2;i<=sqrt(possAmicable);i++){
                    if (possAmicable%i==0){
                        possSumDivs+=i;
                        if(possAmicable/i!=i)
                            possSumDivs+=possAmicable/i;
                    }
                }
            }
        }
    }
    return 0;
}

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs){
    int sqrtNum;
    sqrtNum= sqrt(num);
    for(int i=2;i<=sqrtNum;i++){
        if (num%i==0){
            outSumDivs+=i;
            outCountDivs++;
            if(num/i!=i){
                outSumDivs+=num/i;
                outCountDivs++;
            }
        }
    }
}
bool isPerfect(int num, int outSumDivs){
    
    if(num==outSumDivs){
        return true;
    }
    else{
        return false;
    }
}
