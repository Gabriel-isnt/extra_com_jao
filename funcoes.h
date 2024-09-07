double determinante2x2(double matriz[2][2]){
    return (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]); 
}

double determinante3x3(double matriz[3][3]){
    
    double d1 = (matriz[0][0] * matriz[1][1] * matriz[2][2]);
    double d2 = (matriz[0][1] * matriz[1][2] * matriz[2][0]);
    double d3 = (matriz[0][2] * matriz[1][0] * matriz[2][1]); 
    
    double e1 = (matriz[0][2] * matriz[1][1] * matriz[2][0]);
    double e2 = (matriz[0][0] * matriz[1][2] * matriz[2][1]);
    double e3 = (matriz[0][1] * matriz[1][0] * matriz[2][2]);
    
    double direita = (d1 + d2 + d3);
    double esquerda = (e1 + e2 + e3);
    
    return (direita - esquerda);
}


void resolve2x2(double matriz[2][3]){
    
    // garantindo o pivô da primeira
    matriz[0][0] /= matriz[0][0]; 
    matriz[0][1] /= matriz[0][0];
    matriz[0][2] /= matriz[0][0];
    
    // arrumando o pivô da segunda linha
    matriz[1][0] -= matriz[0][0];
    matriz[1][1] -= matriz[0][1];
    matriz[1][2] -= matriz[0][2];
    
    // não sei o que esperar agora
    
    
    
}
