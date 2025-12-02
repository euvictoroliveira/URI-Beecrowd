#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int nTestes;

    cin >> nTestes;

    while(nTestes--){
        int nLinhas;

        cin >> nLinhas;

        cout << (long long int)pow(2, nLinhas) - 1 << endl;

    }

    return 0;

}