#include <iostream>

using namespace std;

class No{
    public:
    char valor;
    No* esq;
    No* dir;

    No(char valor){
        this->valor = valor;
        esq = NULL;
        dir = NULL;
    }
};

int indicePrefix;


No* cria_arvore(string prefix, string infix){
    char letra = prefix[indicePrefix++];
    No* no = new No(letra);
    int indiceInfix = infix.find(letra);

    string infixEsq = infix.substr(0,indiceInfix);
    string infixDir = "";
    if(indiceInfix < (int)infix.length() - 1){
        infixDir = infix.substr(indiceInfix + 1);
    }
    
    if(infixEsq.length() == 0 && infixDir.length() == 0){
        return no;
    }

    if(infixEsq.length() > 0){
        no->esq = cria_arvore(prefix, infixEsq);
    }
    if(infixDir.length() > 0){
        no->dir = cria_arvore(prefix, infixDir);
    }

    return no;

}

void posfix(No* no){
    if(no != NULL){
        posfix(no->esq);
        posfix(no->dir);
        cout << no->valor;
    }
}


int main(){
    string prefix, infix;
    No* raiz;

    while(cin >> prefix >> infix){
        indicePrefix = 0;
        raiz = cria_arvore(prefix, infix);
        posfix(raiz);
        cout << endl;

    }

    return 0;

}

