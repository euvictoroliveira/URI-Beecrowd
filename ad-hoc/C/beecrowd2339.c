#include <stdio.h>

int main(void){
    int nCompetidores, nFolhas, qtdFolhasCompetidor;

    scanf("%d %d %d", &nCompetidores, &nFolhas, &qtdFolhasCompetidor);

    if(nFolhas < nCompetidores*qtdFolhasCompetidor)
        printf("N\n");
    else
        printf("S\n");



    return 0;
}