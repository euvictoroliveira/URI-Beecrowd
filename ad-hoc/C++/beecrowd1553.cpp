#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    int nPerguntas, fatorFrequencia, P, resposta;
    vector<int> frequencias;

    while(cin >> nPerguntas >> fatorFrequencia){
        if(!nPerguntas && !fatorFrequencia)
            break;

        resposta = 0;
        frequencias.assign(nPerguntas + 1, 0);


        for(int i = 0; i < nPerguntas; i++){
            cin >> P;

            frequencias[P]++;
            if(frequencias[P] == fatorFrequencia)
                resposta++;
        }

        cout << resposta << endl;
    }

    return 0;
}