#include <stdio.h>

int main(){
	
	float nota;
	
	printf("\nInsira a nota do Aluno: \n");
	scanf("%f", &nota);
	
	//Cálculo: 
	if(nota >= 7.0){
		printf("Aprovado(a)!\n");
	}
}
