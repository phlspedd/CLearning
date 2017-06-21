#include <stdio.h>

#define impar(x) x%2==0 ? 0 : 1

void main(void){
    #undef impar
    int saida = impar(3);
    printf("%d\n\n",saida);
}
