#include <iostream>

using namespace std;

int main(){
    int x, y;

    cin >> x >> y;

    if((0 <= x && x <= 432) && (0 <= y && y <= 468))
        cout << "dentro" << endl;
    else
        cout << "fora" << endl;



    return 0;

}