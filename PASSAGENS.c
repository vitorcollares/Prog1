#include <stdio.h>
int main()

{
int ori;
int des;
float RJSP=150, RSSA=300, SPRJ=160, SSA=180, RJ=280, SP=175, dolar=3.4;
/*
p1=RIO->SP
p2=RIO->SSA
p3=SP->RIO
p4=SP->SSA
p5=SSA->RIO
p6=SSA->SP
*/

printf("\nOla, meu nome e Vitor, qual a sua origem (1-Rio/2-SP/3-SSA)?\n");
scanf("%d",&origem);

	switch(origem)
	{
/*RJ*/
case 1:
        	printf("\nEntendi, Rio de Janeiro.\nQual o seu destino (1-Rio/2-SP/3-SSA)?\n");
          	scanf("%d", &destino);
					switch(destino)
					{
							case 1:
							do
							{
            				printf("\nOps!! Seu destino não pode ser o mesmo que a origem. Qual é seu destino (2-SP/3-SSA)?\n");
							scanf("%d", &destino);
							}while(destino==1);
							
								switch(destino)
									{
									case 2:
									printf("\nEntendi, Sao Paulo!\n"); 
									printf("Valor para passagem Rio de Janeiro -> Sao Paulo:\n");
									printf("R$ %.2f ou $ %.2f\n", p1, (p1/dolar));
									printf("Obrigado e boa viagem!\n");
									break;

									case 3:
									printf("\nEntendi, Salvador!\n"); 
									printf("Valor para passagem Rio de Janeiro -> Salvador:\n");
									printf("R$ %.2f ou $ %.2f\n", p2, (p2/dolar));
									printf("Obrigado e boa viagem!\n");
									break;
									}
							break;
							
							case 2:
							printf("\nEntendi, Sao Paulo!\n"); 
							printf("Valor para passagem Rio de Janeiro -> Sao Paulo:\n");
							printf("R$ %.2f ou $ %.2f\n", p1, (p1/dolar));
							printf("Obrigado e boa viagem!\n");
							break;
							
							case 3:
							printf("\nEntendi, Salvador!\n"); 
							printf("Valor para passagem Rio de Janeiro -> Salvador:\n");
							printf("R$ %.2f ou $ %.2f\n", p2, (p2/dolar));
							printf("Obrigado e boa viagem!\n");
							break;
							
					}
					break;
/*SP*/
case 2:
        	printf("\nEntendi, Sao Paulo.\nQual o seu destino (1-Rio/2-SP/3-SSA)?\n");
          scanf("%d", &destino);
					switch(destino)
					{
							
							case 2:
							do
							{
            	printf("\nOps!! Seu destino não pode ser o mesmo que a origem.\nQual é seu destino (1-Rio/3-SSA)?\n");
							scanf("%d", &destino);
							}while(destino==2);
							
								switch(destino)
									{
									case 1:
									printf("\nEntendi, Rio de Janeiro!\n"); 
									printf("Valor para passagem Sao Paulo -> Rio de Janeiro:\n");
									printf("R$ %.2f ou $ %.2f\n", p3, (p3/dolar));
									printf("Obrigado e boa viagem!\n");
									break;

									case 3:
									printf("\nEntendi, Salvador!\n"); 
									printf("Valor para passagem Sao Paulo -> Salvador:\n");
									printf("R$ %.2f ou $ %.2f\n", p4, (p4/dolar));
									printf("Obrigado e boa viagem!\n");
									break;
									}
							break;
							
							case 1:
							printf("\nEntendi, Rio de Janeiro!\n"); 
							printf("Valor para passagem Sao Paulo -> Rio de Janeiro:\n");
							printf("R$ %.2f ou $ %.2f\n", p3, (p3/dolar));
							printf("Obrigado e boa viagem!\n");
							break;
							
							case 3:
							printf("\nEntendi, Salvador!\n"); 
							printf("Valor para passagem Sao Paulo -> Salvador:\n");
							printf("R$ %.2f ou $ %.2f\n", p4, (p4/dolar));
							printf("Obrigado e boa viagem!\n");
							break;
					}
					break;

case 3:
        	printf("\nEntendi, Salvador.\nQual o seu destino (1-Rio/2-SP/3-SSA)?\n");
          scanf("%d", &destino);
					switch(destino)
					{
							
							case 3:
							do
							{
            	printf("\nOps!! Seu destino não pode ser o mesmo que a origem.\nQual é seu destino (1-Rio/2-SP?)\n");
							scanf("%d", &destino);
							}while(destino==3);
							
								switch(destino)
									{
									case 1:
									printf("\nEntendi, Rio de Janeiro!\n"); 
									printf("Valor para passagem Salvador -> Rio de Janeiro:\n");
									printf("R$ %.2f ou $ %.2f\n", p5, (p5/dolar));
									printf("Obrigado e boa viagem!\n");
									break;
								
									case 2:
									printf("\nEntendi, Sao Paulo!\n"); 
									printf("Valor para passagem Salvador -> Sao Paulo:\n");
									printf("R$ %.2f ou $ %.2f\n", p6, (p6/dolar));
									printf("Obrigado e boa viagem!\n");
									break;
									}
							break;
							
							case 1:
							printf("\nEntendi, Rio de Janeiro!\n"); 
							printf("Valor para passagem Salvador -> Rio de Janeiro:\n");
							printf("R$ %.2f ou $ %.2f\n", p5, (p5/dolar));
							printf("Obrigado e boa viagem!\n");
							break;
							
							case 2:
							printf("\nEntendi, Sao Paulo!\n"); 
							printf("Valor para passagem Salvador -> Sao Paulo:\n");
							printf("R$ %.2f ou $ %.2f\n", p6, (p6/dolar));
							printf("Obrigado e boa viagem!\n");
							break;
					}
					break;

printf()
		

}
return(0);
}
	
