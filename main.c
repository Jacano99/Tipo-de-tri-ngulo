/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: jesus
 *
 * Created on 4 de septiembre de 2018, 06:00 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int a,b,c;
    int suma;
        printf("Insertar angulo1: ");
        scanf("%d",&a);
        printf("Insertar angulo2: ");
        scanf("%d",&b);
        printf("Insertar angulo3: ");
        scanf("%d",&c);
        suma=a+b+c;
        if((a>0)&&(b>0)&&(c>0)){
            if(suma==180){
                if((a==b)&&(a==c)&&(b==c)){
                    printf("Es equilatero");
                }
                else if((a!=b)&&(a!=c)&&(b!=c)){
                    printf("Es escaleno");
                }
                else{
                    printf("Es isosceles");
                }
                               
            }
            else{
                printf("error");
                
            }
        }
        else{
            printf("error");
        }
        
        

    return 0;
}

