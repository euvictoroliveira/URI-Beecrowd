#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int i, tamanho, parenteses;
    std::string expressao;

    while(cin >> expressao){
        parenteses = 0;
        tamanho = expressao.length();

        for(i = 0; i < tamanho; i++){
            if(expressao[i] == '('){
                parenteses++;
            }else if(expressao[i] == ')'){
                if(parenteses > 0)
                    parenteses--;
                else
                    break;
            }

        }

        if(i == tamanho && parenteses == 0){
            cout << "correct" << endl;
        }else{
            cout << "incorrect" << endl;
        }

    }

    return 0;

}