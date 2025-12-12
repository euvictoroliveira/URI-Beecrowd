#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int a, b, c;

    while(cin >> a){
        if(a == 0)
            break;

        cin >> b >> c;

        cout << floor(sqrt(a * b * 100 / c)) << endl;

    }

    return 0;
}