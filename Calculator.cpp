#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char resposta, tipo, conta, nome[100];
	float num1, num2, resultado, taxa;
	int contador, controle;
	
	printf("Olá, como posso te chamar? ");
	scanf("%s", &nome);
	do{
		controle = 10;//Controle para quendo digitado algo de errado não execultar pergunta//
		contador = 1;//Zerando o contador devolta para um, para realizar o lup normalmente//
		
		printf("\n%s, logo abaixo é apresentado nosso catalogo de calculos que posso resolver", nome);
	
		printf("\nContas básicas (A)\n");
		printf("\nJuros simples ou composto(B)\n");
		
		fflush(stdin);
		printf("\nDigite a letra que representa o calculo:  ");
		scanf("%c", &conta);
			
		do{
			if(conta == 'a' || conta == 'A' || conta == 'b' || conta == 'B'){
				if(conta == 'a' || conta == 'A'){
						
					char op;
						
					for(contador = contador; contador <= 1; contador ++){
						printf("\n%s, me informe qual é a letra do calculo básico que quer que eu resolva:\n", nome);
					
						printf("\nSoma(a)");
						printf("\nSubtração(b)");
						printf("\nMutiplicação(c)");
						printf("\nDivição(d)");
							
						fflush(stdin);
						printf("\n\nDigite a letra de qual tipo de calculo você deseja resolver: ");
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
						printf("\n\n%0.2f %c %0.2f = %0.2f\n", num1, op, num2, resultado);
					}
					else{
						printf("\n\nDigito incorreto\n\n");
						controle ++;
					}
				}
				if(conta == 'b' || conta == 'B'){
						
					float montante, juros;
					
					for(contador = contador; contador == 1; contador ++){
						printf("\n%s, vou te pedir para ecolher o tipo de juros que quer que eu calcule \n", nome);
						printf("\nJuros simples (A)\n");
						printf("\nJuros composto(B)\n");
								
						fflush(stdin);
						printf("\nMe informe a letra que representa o tipo de Juros que quer calcular: ");
						scanf("%c", &tipo);
					}	
					printf("\nInforme o valor da sua capital: ");
					scanf("%f", &num1);
					printf("\nInforme o tempo de rendimento: ");
					scanf("%f", &num2);
					printf("\nInforme a taxa de juros de rendimento: ");
					scanf("%f", &taxa);
								
					taxa = taxa / 100;
								
					if (tipo == 'A' || tipo == 'a'){
								
						float juros;
								
						juros = num1 * num2 * taxa;
									
						printf("\n\nCom a copital inicial de %0.2f", num1);
						printf("\n\nTaxa de juros a %0.2f%%", taxa * 100);
						printf("\n\nO juros jerado foi de %0.2f", juros);
						printf("\n\nSeu montate será no total: %0.2f", juros + num1);
					}
					else if(tipo == 'b' || tipo == 'B'){
						float taxa2, montante;
								
						taxa2 = taxa;
						taxa = taxa + 1;
						taxa = pow(taxa, num2);
						montante = num1 * taxa;					
							
						printf("\n\nCapital inicial de %0.2f", num1);
						printf("\n\nCom a taxa de juros de %0.2f%%", taxa2 * 100);
						printf("\n\nCom periodo de rendimento de %0.0f", num2);
						printf("\n\nCom o amento de %0.2f", montante - num1);
						printf("\n\nSeu montate foi de %0.2f", montante);
					}
					else{
						printf("Digito incorreto");
						controle ++;
					}
				}
			}
			else {
				printf("\n\nDigito incorreto\n\n");
				controle ++;
			}
			if(controle == 10){
					
				fflush(stdin);
				printf("\n\nDeseja repetir a operação? Sim(s) ou Não(n) ");
				scanf("%c", &resposta);
			}	
		}
		while(resposta == 's' || resposta == 'S');
		
		fflush(stdin);
		printf("\nDeseja realizar mais algum calculo? sim(s) não(n)\n");
		scanf("%c", &resposta);
	}
	while(resposta == 's' || resposta == 'S');
}
