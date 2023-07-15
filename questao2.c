/*
Primeiramente, MMC e MDC não incluem o número 0, já que 0 é múltiplo de todos os números inteiros e não é divisor de nenhum deles. 

Segundamente, números negativos não possuem MMC, porque não importa qual número é o suposto menor múltiplo de um número negativo, 
já que sempre haverá um menor do que ele que também é múltiplo do par de números escolhido.

Em relação à lógica por trás dos cálculos: o MMC é sempre maior ou igual ao maior número digitado, então, partindo dele de forma ascendente, 
o primeiro número encontrado que seja múltiplo do maior e menor número digitado será o seu MMC. Já o MDC sempre será menor ou igual ao menor 
número digitado, então, partindo dele de forma descendente, o primeiro número que divide o par de números digitados será o seu MDC (este sempre 
será, no mínimo, 1), e usá-se o módulo dos valores digitados, pois o MDC de qualquer número negativo é igual ao MDC do seu antípoda.

Considerando o conjunto dos números inteiros como sendo o domínio desta questão, eu acredito que todos eles estão contemplados neste programa, tendo ou não MMC e MDC.
*/

#include <stdio.h>
#include <math.h>

int calcularMMC(int A, int B){
	int maior, i;
	if(A == B){
    		return A;
	}
	else if(A > B){
    		maior = A;
	}
	else {
    		maior = B;
	}
    
	for(i = maior; ; i++){
    		if(i%A == 0 && i%B == 0){
        		return i;
    		}
	}
}

int calcularMDC(int A, int B){
	int a = fabs(A), b = fabs(B);
	int menor, i;
	if(a == b){
    		return a;
	}
	else if(a < b){
    		menor = a;
	}
	else {
    		menor = b;
	}
    
	for (i = menor; ; i--){
    		if(a%i == 0 && b%i == 0){
        		return i;
    		}
	}
}

int main(){
	int n1, n2, mmc, mdc;
    
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite outro numero: ");
	scanf("%d", &n2);
    
	if(n1 == 0 || n2 == 0){
    		printf("\nO numero 0 nao possui MMC nem MDC.");
	}
	else {
    		if(n1 < 0 || n2 < 0){
        		printf("\nNumeros negativos nao possuem MMC\n");
    		}
    		else {
        		mmc = calcularMMC(n1, n2);
        		printf("\nMMC de %d e %d: %d\n", n1, n2, mmc);
    		}
   	 
    		mdc = calcularMDC(n1, n2);
    		printf("MDC de %d e %d: %d\n", n1, n2, mdc);
	}

	return 0;
}
