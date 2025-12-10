#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int N;

    while(cin >> N){
        if(N == 0)
            break;

        for(int i = 0; i < N; i++){
            cout << std::setw(3) << std::setfill(' ') << 1;

            for(int j = 1; j < N; j++){
                cout << std::setw(4) << std::setfill(' ') << std::min(std::min(i, N - 1 - i), std::min(j, N - 1 - j)) + 1;
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}