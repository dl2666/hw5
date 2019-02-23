#include <iostream>
#include <string>
using namespace std;

int main()
{
    string lastName, firstName, middleInitial;
    cout<<"Enter your first, middle, and last name separated by spaces(enter 'XX' for middle name if you dont have one): "<<endl;
    cin>>firstName>>middleInitial>>lastName;
    
    if(middleInitial.length()==2 && middleInitial=="XX"){
        cout<<lastName<<", "<<firstName<<endl;
    }
    else{
        middleInitial=middleInitial[0];
        cout<<lastName<<", "<<firstName<<" "<<middleInitial<<"."<<endl;
    }

    return 0;
}
