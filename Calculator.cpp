#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char resposta, tipo, nome[100];
	int num1, num2, resultado;
	
	printf("Olá, para iniciar o programa digite seu nome: ");
	scanf("%s", &nome);

	do{
		printf("\nOlá %s, logo a baixo temos as opções de calculo, cada uma representada por uma letra:\n", nome);
		
		printf("\nSoma(a)");
		printf("\nSubtração(b)");
		printf("\nMutiplicação(c)");
		printf("\nDivição(d)");
		
		fflush(stdin);
		printf("\n\nDigite a letra de qual tipo de calculo você deseja resolver: ");
		scanf("%c", &tipo);
		
		if(tipo == 'a' || tipo == 'A' || tipo == 'b' || tipo == 'B' || tipo == 'd' || tipo == 'D' || tipo == 'c' || tipo == 'C'){
			
			do{
			
			printf("\nDigite um valor: ");
			scanf("%d", &num1);
					
			printf("\nDigite um valor: ");
			scanf("%d", &num2);
				
			if(tipo == 'a' || tipo == 'A'){
									
				resultado = num1 + num2;
	
			}else if(tipo == 'b' || tipo == 'B'){
				
				resultado = num1 - num2;
				
			}else if(tipo == 'c' || tipo == 'C'){
				
				resultado = num1 * num2;
				
			}else if(tipo == 'd' || tipo == 'D'){
				
				resultado = num1 / num2;	
			}
			
			printf("\n%d\n", resultado);
			
			fflush(stdin);
			printf("Deseja repetir a operação? sim(s), não(n)");
			scanf("%c", &resposta);
			
		}while(resposta == 's' || resposta == 's');
		
	}else {
		printf("\nAlgo não está certo\n");
	}
		
		fflush(stdin);
		printf("\nDeseja realizar mais algum calculo? sim(s) não(n)\n");
		scanf("%c", &resposta);
		
	}while(resposta == 's' || resposta == 'S');
}
