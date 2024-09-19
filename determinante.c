#include "funcoes.h"

float determinante3x3(float mat[3][3]) {
    float determinante;
    
    float d1 = mat[0][0] * mat[1][1] * mat[2][2];
    float d2 = mat[0][1] * mat[1][2] * mat[2][0];
    float d3 = mat[0][2] * mat[1][0] * mat[2][1];
    
   float e1 = mat[0][2] * mat[1][1] * mat[2][0];
   float e2 = mat[0][0] * mat[1][2] * mat[2][1];
   float e3 = mat[0][1] * mat[1][0] * mat[2][2];
   
   determinante = (d1 + d2 + d3) - (e1 + e2 + e3);
   return determinante;
}

float determinante2x2(float mat[2][2]) {
    float determinante = (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
    
    return determinante;
}
