#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int D, VF, VG;
    double distanciaGuarda, tempoFugitivo, tempoGuarda;

    while (cin >> D >> VF >> VG)
    {
        tempoFugitivo = 12.0 / VF;
        distanciaGuarda = sqrt(144 + (D * D));
        tempoGuarda = distanciaGuarda / VG;

        cout << (char)(tempoFugitivo < tempoGuarda ? 'N' : 'S') << endl;
    }

    return 0;
}