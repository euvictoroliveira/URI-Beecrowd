#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int N;

    while(cin >> N){
        if(!N)
            break;

        for(int i = 0; i < N; i++){
            cout << std::setw(3) << std::setfill(' ') << i + 1;

            for(int j = 1; j < N; j++)
                    cout << std::setw(4) << std::setfill(' ') << abs(i - j) + 1;

            cout << endl;
                            
        }

        cout << endl;
    }

    return 0;

}