#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int n;

    while(cin >> n){
        int asteriscos = 1;
        int espacos = n/2;

        while(espacos >= 0){
            for(int i = 0; i < espacos; ++i){
                cout << ' ';
            }

            for(int i = 0; i < asteriscos; ++i){
                cout << '*';
            }

            cout << endl;

            espacos -= 1;
            asteriscos += 2;
        }

        espacos = n/2;
        for(int i = 0; i < espacos; ++i){
            cout << ' ';
        }

        cout << '*' << endl;

        espacos -= 1;
        for(int i = 0; i < espacos; ++i){
            cout << ' ';
        }

        for(int i = 0; i < 3; ++i){
            cout << '*';
        }

        cout << endl << endl;

    }

    return 0;

}