#include <stdio.h>


int main(){

    int num;

    printf("\nInsira um valor de 1 a 7: \n");
    scanf("%d", &num);

    switch(num){
        case 1:
                printf("\nDomingo.\n");
                break;
        case 2:
                printf("\nSegunda-feira.\n");
                break;
        case 3:
                printf("\nTer�a-feira.\n");
                break;
        case 4:
                printf("\nQuarta-feira.\n");
                break;
        case 5:
                printf("\nQuinta-feira.\n");
                break;
        case 6:
                printf("\nSexta-feira.\n");
                break;
        case 7:
                printf("\nS�bado.\n");
                break;
        default:
                printf("\nValor Inv�lido MOTHERF@#$%&.\n");
                break;


    }







}


