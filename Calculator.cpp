#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char resposta, tipo, nome[100];
	int num1, num2, resultado;
	
	printf("Ol�, para iniciar o programa digite seu nome: ");
	scanf("%s", &nome);
	
	
	do{
		printf("\nOl� %s, logo a baixo temos as op��es de calculo, cada uma representada por uma letra:", nome);
		
		printf("\nSoma(a)");
		printf("\nSubtra��o(b)");
		printf("\nMutiplica��o(c)");
		printf("\nDivi��o(d)");
		
		fflush(stdin);
		printf("\n\nDigite a letra de qual tipo de calculo voc� deseja resolver: ");
		scanf("%c", &tipo);
		
		if(tipo == 'a' || tipo == 'A'){
			
			do{
								
				printf("\nDigite um valor: ");
				scanf("%d", &num1);
				
				printf("\nDigite um valor: ");
				scanf("%d", &num2);
			
				resultado = num1 + num2;
			
				printf ("%d", resultado);
				
				fflush(stdin);
				printf("\nContinuar? sim(s) ou n�o(n) ");
				scanf("%c", &resposta);
				
			}while(resposta == 's' || resposta == 'S');

		}else if(tipo == 'b' || tipo == 'B'){
			
				do{
								
				printf("\nDigite um valor: ");
				scanf("%d", &num1);
				
				printf("\nDigite um valor: ");
				scanf("%d", &num2);
			
				resultado = num1 - num2;
			
				printf ("%d", resultado);
				
				fflush(stdin);
				printf("\nContinuar? sim(s) ou n�o(n) ");
				scanf("%c", &resposta);
				
			}while(resposta == 's' || resposta == 'S');
			
		}else if(tipo == 'c' || tipo == 'C'){
			
				do{
								
				printf("\nDigite um valor: ");
				scanf("%d", &num1);
				
				printf("\nDigite um valor: ");
				scanf("%d", &num2);
			
				resultado = num1 * num2;
			
				printf ("%d", resultado);
				
				fflush(stdin);
				printf("\nContinuar? sim(s) ou n�o(n) ");
				scanf("%c", &resposta);
				
			}while(resposta == 's' || resposta == 'S');
			
		}else if(tipo == 'd' || tipo == 'D'){
			
				do{
								
				printf("\nDigite um valor: ");
				scanf("%d", &num1);
				
				printf("\nDigite um valor: ");
				scanf("%d", &num2);
			
				resultado = num1 / num2;
			
				printf ("%d", resultado);
				
				fflush(stdin);
				printf("\nContinuar? sim(s) ou n�o(n) ");
				scanf("%c", &resposta);
				
			}while(resposta == 's' || resposta == 'S');
		}else {
			printf("\nAlgo n�o est� certo\n");
		}
		
		fflush(stdin);
		printf("\nDeseja realizar mais algum calculo? sim(s) n�o(n)\n");
		scanf("%c", &resposta);
		
	}while(resposta == 's' || resposta == 'S');
	
}
	
	
	
