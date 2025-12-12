#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    int nProblema;
    char digito;
    string valor, resultado;

    while(cin >> digito >> valor){
        if(digito == '0' && valor == "0")
            break;

        nProblema = 0;
        resultado = "0";
        int tamanho = valor.length();

        for(int i = 0; i < tamanho; i++){
            if(valor[i] != digito)
                resultado += valor[i];
        }

        while(nProblema < (int) resultado.length()){
            if(resultado[nProblema] != '0')
                break;
            nProblema++;
        }

        if(nProblema == (int) resultado.length())
            cout << 0 << endl;
        else{
            resultado = resultado.substr(nProblema);
            cout << resultado << endl;
        }

    }

    return 0;
}