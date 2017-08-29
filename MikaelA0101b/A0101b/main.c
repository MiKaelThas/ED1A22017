/* 
 * File:   main.c
 * Author: mikael
 *
 * Created on 22 de Agosto de 2017, 17:01
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int processo(int num1,int num2,int *num3){
    num1*=10;
    num2*=100;
    *num3 = (*num3) * 1000;
    printf("O valor de n1 em processo: %i\n",num1);
    printf("O valor de n2 em processo: %i\n",num2);
    printf("O valor de n3 em processo: %i\n",*num3);    
}
int main(int argc, char** argv) {
    int n1,n2,n3;
    int *N3;
    n1=1;
    n2=2;
    n3=3;
    N3=&n3;
    processo(n1,n2,N3);
    printf("O valor de n1: %i\n",n1);
    printf("O valor de n2: %i\n",n2);
    printf("O valor de N3: %i",*N3);
    
    return (EXIT_SUCCESS);
}

