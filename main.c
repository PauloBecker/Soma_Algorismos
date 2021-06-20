/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: paulobecker
 *
 * Created on 28 de maio de 2021, 08:58
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main() {
    
    int num;
    int resto, resto1,resto2,q0,q1,q2;
    int soma = 0;
    
    
    printf("Informe um numero : ");
    scanf("%d" , &num);
    
    
    if(num > 999 && num < 10000){
        
        q0=num/1000;
        resto = num %1000;
        q1 = resto / 100;
        resto1 = resto % 100;
        
        q2 = resto1 / 10;
        resto2 = resto1 % 10;

        soma = resto2 + q0 + q1 + q2;

         printf("A soma dos algorismos %d + %d + %d + %d e = %d" , q0,q1,q2,resto2,soma);
   
    }else{
        
       
        printf("#### ERRO #### \n Informe um numero que seja maior que 99 e menor que 1000");
        
    }

    return 0;
    
}

