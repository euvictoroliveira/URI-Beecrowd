#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void){
    int T;

    cin >> T;

    while(T--){
        int nRetas;

        cin >> nRetas;

        int nRegioes = 1 + (nRetas*(nRetas + 1) / 2);

        cout << nRegioes << endl;



    }


    return 0;
}