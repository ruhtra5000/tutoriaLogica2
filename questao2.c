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
