#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define linha_semana 4
#define coluna_dias 6

float matriz [linha_semana][coluna_dias];
int l,c,i,j,menu;
float m, soma;

float vendas(){	
	for (l = 0; l < linha_semana; l++){
		for (c = 0; c < coluna_dias; c++){							
			printf("\ninforme o valor da venda:R$ ");
			scanf("%f", &matriz[l][c]);
			getchar();
		}	
	}
	return 0;
}

int imprimir(){	
	for(j = 1; j < linha_semana ;j++){	 
    	for (l = 0; l < linha_semana; l++){
          printf("\n -------%dª Semana -------",j++);           
          for(i = 1;i < coluna_dias ;i++){		  		  
		    for (c = 0; c < coluna_dias; c++){ 			     	
			 printf("\n %dª Venda diaria: %.2f",i++,matriz[l][c]);			  	 
			}
		  }
	printf("\n");
	    }	    
	}
	return 0;
}

float media(){	
	soma = 0;
	for (l = 0; l < linha_semana; l++){
		for (c = 0; c < coluna_dias; c++){				
			soma = soma + matriz[l][c];	
			 m = soma / 24;				
		}
	}
		printf("\n MEDIA MENSAL É: %.2f ", m);	 
	return 0;
}

int main(){	
	setlocale(LC_ALL,"");
	while (menu != 4){
	printf("\n---------MENU------------\n");
	printf(" ________________________");
	printf("\n | 1 => PREENCHER VENDAS|\n | 2 => EXIBIR VENDAS   | \n | 3 => MEDIA DE VENDAS | \n | 4 => SAIR            | ");
	printf("\n |______________________|\n");
	printf(" \n ***ESCOLHA A OPÇÃO*** \n ");
	scanf("%d", &menu);		
	system("cls");  
	switch(menu){
		case 1: printf("\n 1 => PREENCHER VENDAS\n"); vendas();
		 break;
		case 2: printf("\n 2 => EXIBIR VENDAS\n");imprimir();
		 break;
		case 3: printf("\n 3 => MEDIA DE VENDAS MENSAL\n"); media();
		 break;		 
		default:printf("\n *** OPÇÃO INVALIDA *** ");		
	}
}
	return 0;
}
