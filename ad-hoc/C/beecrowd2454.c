#include <stdio.h>
 
int main() {
 
    int P,R;
    
    scanf("%d", &P);
    scanf("%d", &R);
    
    if( P == 0 )
        puts("C");
        
    if( P == 1 && R == 0)
        puts("B");
        
    if( P == 1 && R == 1)
        puts("A");
    
    return 0;
}