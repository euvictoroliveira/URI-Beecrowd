#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    int n;
    static int teste = 1;

    while (true){
        cin >> n;
        if(n == 0)
            break;

        vector<int> convidados(n);
        int vencedor = -1; 
        
        for(int i = 0; i < n; i++){
            cin >> convidados[i];
            if(convidados[i] == i + 1)
                vencedor = convidados[i];
        }

        cout << "Teste " << teste++ << endl;
        cout << vencedor << endl << endl;
    }

    return 0;
}
