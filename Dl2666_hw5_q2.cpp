#include <iostream>
using namespace std;

void printShiftedTriangle(int lines,int shift, char symbol);
void printPineTree(int numOfTriangles, char symbol);

int main() {
    int lines, shift, numOfTriangles;
    char symbol;
    //part a,shifted triangle
    cout<<"Enter size (# of lines) for triangle: ";
    cin>>lines;
    cout<<"Enter # of spaces to shift the triangle from left: ";
    cin>>shift;
    cout<<"Enter symbol for your triangle(eg.'*','$','+',etc.): ";
    cin>>symbol;
    printShiftedTriangle(lines,shift,symbol);
    cout<<"Enter # of triangles of increasing sizes you'd like printed: ";
    cin>>numOfTriangles;
    cout<<"Enter symbol your triangles are filled with: ";
    cin>>symbol;
    
    printPineTree(numOfTriangles,symbol);
    
    return 0;
}
void printShiftedTriangle(int lines,int shift, char symbol){
    int numOfSymbols = 1;
    for(int row=1;row<=lines;row++)
    {
        for(int space=1;space<=((lines+shift)-row);space++){
            cout<<" ";
        }
        for(int sym=1;sym<=numOfSymbols;sym++){
            cout<<symbol;
        }
        cout<<endl;
        numOfSymbols+=2;
    }
    
}
void printPineTree(int numOfTriangles, char symbol){
    int shift=numOfTriangles-1;
    int lines=2;
    int numOfSymbols = 1;
    for(int repeat=1;repeat<=numOfTriangles;repeat++){
        for(int row=1;row<=lines;row++)
        {
            for(int space=1;space<=((lines+shift)-row);space++){
                cout<<" ";
            }
            for(int sym=1;sym<=numOfSymbols;sym++){
                cout<<symbol;
            }
            cout<<endl;
            numOfSymbols+=2;
        }
        numOfSymbols=1;
        lines++;
        shift--;
    }
}
