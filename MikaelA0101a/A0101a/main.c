/* 
 * File:   main.c
 * Author: mikael
 *
 * Created on 22 de Agosto de 2017, 16:35
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int soma(int Num1, int Num2){
    int R;
    R=Num1+Num2;
    return R;
}
int main(int argc, char** argv) {
    int n1, n2, n3;
    n1=100;
    n2=200;
    printf("A soma de 10 com 20 e: %i \n",soma(10,20));
    printf("A soma de n1 com n2 e: %i \n",soma(n1,n2));
    n3=soma(1000,2000);
    printf("A soma de 1000 com 2000 (n3) e: %i",n3);
    return (EXIT_SUCCESS);
}



