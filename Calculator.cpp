#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char resposta, tipo, op, conta, nome[100];
	float num1, num2, resultado;
	int contador = 1;
	
	printf("Ol�, como posso te chamar? ");
	scanf("%s", &nome);
	do{
		contador = 1;//Zerando o contador devolta para um, para realizar o lup normalmente//
		
		printf("\n%s, logo abaixo � apresentado nosso catalogo de calculos que posso resolver", nome);
		printf("\nLembrando que cada calculo representado por uma letra, digite somente a letra para ecolher\n");
	
		printf("\nContas b�sicas (A)\n");
		printf("\nJuros simples e composto(B)\n");
		
		fflush(stdin);
		printf("\nEm qual tipo de calculo psso te ajudar? ");
		scanf("%c", &conta);
		
		do{
			if(conta == 'a' || conta == 'A'){
				
				for(contador = contador; contador <= 1; contador ++){
					printf("\n%s, me informe qual � a letra do calculo b�sico que quer que eu resolva:\n", nome);
			
					printf("\nSoma(a)");
					printf("\nSubtra��o(b)");
					printf("\nMutiplica��o(c)");
					printf("\nDivi��o(d)");
					
					fflush(stdin);
					printf("\n\nDigite a letra de qual tipo de calculo voc� deseja resolver: ");
					scanf("%c", &tipo);
				}
					
				if(tipo == 'a' || tipo == 'A' || tipo == 'b' || tipo == 'B' || tipo == 'd' || tipo == 'D' || tipo == 'c' || tipo == 'C'){
				
					printf("\nDigite um valor: ");
					scanf("%f", &num1);
								
					printf("\nDigite um valor: ");
					scanf("%f", &num2);
						
					if(tipo == 'a' || tipo == 'A'){
													
						resultado = num1 + num2;
						op = '+';
					
					}else if(tipo == 'b' || tipo == 'B'){
						
						resultado = num1 - num2;
						op = '-';
						
					}else if(tipo == 'c' || tipo == 'C'){
						
						resultado = num1 * num2;
						op = '*';
					
					}else if(tipo == 'd' || tipo == 'D'){
						
						resultado = num1 / num2;
						op = '/';	
					}
						
					printf("\n%0.2f %c %0.2f = %0.2f\n", num1, op, num2, resultado);
			
				}else {
					printf("\nAlgo n�o est� certo\n");		
				}
			
			}
			if(conta == 'b' || conta == 'B'){
				
				
			}

			fflush(stdin);
			printf("Deseja repetir a opera��o? sim(s), n�o(n)");
			scanf("%c", &resposta);
			
						
		}while(resposta == 's' || resposta == 's');

	
		fflush(stdin);
		printf("\nDeseja realizar mais algum calculo? sim(s) n�o(n)\n");
		scanf("%c", &resposta);
			
	}while(resposta == 's' || resposta == 's');
}
