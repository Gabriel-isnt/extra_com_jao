#include <stdio.h>
#include "funcoes.h"

int main(){
    
    // entrada usuário
    double matriz2x2[2][3];
    double matriz3x3[3][4];
    
    
    for(int l = 0; l < 2; l++){
        for(int c = 0; c < 3; c++){
            scanf("%lf", &matriz2x2[l][c]);
        }
    }

    resolve2x2(matriz2x2);
    
    
    return 0;
}



