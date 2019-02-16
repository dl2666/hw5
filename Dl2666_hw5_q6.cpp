
#include <iostream>
using namespace std;

double eApprox(int n);
int main() {

    cout.precision(30);
    for (int n = 1; n <= 15; n++) {
        cout<<"n = "<<n<<'\t'<<eApprox(n)<<endl;
    }

    return 0;
}
double eApprox(int n){
    double e(1.0);
    for (int i = 1; i < n; i++)
    {
        //resets back ti 1 each iteration
        double nFactorial = 1;
        for(int j = i; j > 0; j--)
        {
            nFactorial *= (1/(double)j);
        }
        e += nFactorial;
    }
    return e;
}
