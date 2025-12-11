#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    std::string expressao;
    int N, tamanho, nDiamantes, sinais;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> expressao;

        nDiamantes = 0;
        sinais = 0;

        tamanho = expressao.length();
        for(int j = 0; j < tamanho; j++){
            if(expressao[j] == '<'){
                sinais++;
            }else if(expressao[j] == '>' && sinais > 0){
                sinais--;
                nDiamantes++;
            }

        }

          cout << nDiamantes << endl;

    }

    return 0;
}