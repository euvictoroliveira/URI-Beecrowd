#include <iostream>
#include <cmath>

using namespace std;

int calcula(int a, int b){
    int quociente;

    if(a > 0){
        if(b > 0){
            quociente = a / b;
        }else{
            quociente = ceil((double) a / b);
        }
    }else{
        if(b > 0){
            quociente = floor((double) a / b);
        }else{
            quociente = ceil((double) a / b);
        }

    }
    return quociente;
}

int main(){
    int a, b;


    cin >> a >> b;
    int quociente = calcula(a,b);

    cout << quociente << " " << a - (b * quociente) << endl;

    return 0;
}
