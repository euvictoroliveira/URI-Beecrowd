#include <iostream>

using std namespace;

int main(){
    int p, j1, j2, r, a;

    cin >> p >> j1 >> j2 >> r >> a;

    int soma = j1 + j2;
    if( p == 1){

        if(soma % 2 == 0){
            if(r == a && a == 0)
                cout << "Jogador 1 ganha!" << endl;
            else if(r == a && a == 1)
                cout << "Jogador 2 ganha!" << endl;
            else if(r == 1 && a == 0)
                cout << "Jogador 1 ganha!" << endl;
            else if(r == 0 && a == 1)
                cout << "Jogador 1 ganha!" << endl;
        }else{
            if(r == a && a == 0)
                cout << "Jogador 2 ganha!" << endl;
            else if(r == a && a == 1)
                cout << "Jogador 2 ganha!" << endl;
            else if(r == 1 && a == 0)
                cout << "Jogador 1 ganha!" << endl;
            else if(r == 0 && a == 1)
                cout << "Jogador 1 ganha!" << endl;
        }

    }else{
        if(soma % 2 == 0){
            if(r == a && a == 0)
                cout << "Jogador 2 ganha!" << endl;
            else if(r == a && a == 1)
                cout << "Jogador 2 ganha!" << endl;
            else if(r == 1 && a == 0)
                cout << "Jogador 1 ganha!" << endl;
            else if(r == 0 && a == 1)
                cout << "Jogador 1 ganha!" << endl;
        }else{
            if(r == a && a == 0)
                cout << "Jogador 1 ganha!" << endl;
            else if(r == a && a == 1)
                cout << "Jogador 2 ganha!" << endl;
            else if(r == 1 && a == 0)
                cout << "Jogador 1 ganha!" << endl;
            else if(r == 0 && a == 1)
                cout << "Jogador 1 ganha!" << endl;


        }
    }

    return 0;

}
    
