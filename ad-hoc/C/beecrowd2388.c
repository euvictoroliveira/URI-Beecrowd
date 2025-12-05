#include <stdio.h>

int main(void){
    int nIntervalos, tempoDecorrido, velocidadeMedia, distanciaTotal = 0;

    scanf("%d", &nIntervalos);

    while(nIntervalos--){
        scanf("%d %d", &tempoDecorrido, &velocidadeMedia);
        distanciaTotal += tempoDecorrido * velocidadeMedia;

    }

    printf("%d\n", distanciaTotal);


    return 0;

}