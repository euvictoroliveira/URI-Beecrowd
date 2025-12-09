#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int fib[40], nCasos[40];

void fibonacci(int n){

    if(fib[n] == -1){
        fibonacci(n -1);
        fibonacci(n - 2);

        fib[n] = fib[n - 1] + fib[n - 2];
        nCasos[n] = nCasos[n - 1] + nCasos[n - 2] + 1;
    }
}

int main(){
    int nTestes, X;

    fib[0] = 0;
    fib[1] = 1;

    nCasos[0] = 1;
    nCasos[1] = 1;

    for(int i = 2; i < 40; i++){
        fib[i] = -1;
        nCasos[i] = -1;
    }

    cin >> nTestes;

    while(nTestes--){
        cin >> X;
        fibonacci(X);

        cout << "fib(" << X << ") = " << nCasos[X] - 1 << " calls = " << fib[X] << endl;
    }

    return 0;

}