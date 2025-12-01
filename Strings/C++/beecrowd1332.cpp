#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main(void){
    int palavras, iguais;
    string palavra, um = "one";

    cin >> palavras;

    while(palavras--){
        cin >> palavra;

        if(palavra.length() == 5)
            cout << 3 << endl;
        else{
            iguais  = 0;

            for(int i = 0; i < 3; i++){
                if(palavra[i] == um[i])
                    iguais++;
            }

            if(iguais > 1)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }

    }

    return 0;
    
}