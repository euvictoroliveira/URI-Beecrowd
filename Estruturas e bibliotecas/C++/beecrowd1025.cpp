#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

template <typename T>
int BuscaBinaria(vector<T> &V, T valor){
    int inicio = 0, final = V.size(), resposta = -1;

    while(inicio <= final){
        int meio = (inicio+final) / 2;
    
        if(valor == V[meio]){
            resposta = meio;
            final = meio - 1;
        }
        else if(valor < V[meio])
            final = meio - 1;
        else
            inicio = meio + 1;

    }

    return resposta;
}

int main(){
    vector<int> marmores;
    int caso = 0, nMarmores, nConsultas, consulta;

    while(cin >> nMarmores >> nConsultas){

        if(!nMarmores && !nConsultas)
            break;
        
        marmores.assign(nMarmores, 0);
        for(int i = 0; i < nMarmores; i++)
            cin >> marmores[i];

        sort(marmores.begin(), marmores.end());

        cout << "CASE# " << ++caso << ":" << endl;

        for(int i = 0; i < nConsultas; i++){
            cin >> consulta;

            int posicao = BuscaBinaria(marmores, consulta);

            if(posicao == -1)
                cout << consulta << " not found" << endl;
            else
                cout << consulta << " found at " << posicao + 1 << endl;
        }

    }

    return 0;
}