#include <stdio.h>

void trocarValorVerdade(int *p, char *t){
	if((*p) == 0){
    		(*p) = 1;
    		(*t) = 'V';
	}
	else {
    		(*p) = 0;
    		(*t) = 'F';
	}
}

void criarTabela(char operacao){
	int A = 1, B = 1; //Proposições abstratas
	char a = 'V', b = 'V'; //Texto das proposições
	int i;
	printf(" A | B | A %c B\n", operacao);
	for(i = 0; i < 4; i++){
    		printf(" %c | %c |  ", a, b);
    		switch(operacao) {
        		case '^':
            		if(A == 1 && B == 1)
                			printf("V\n");
            		else
                			printf("F\n");
            		break;
        		case 'v':
            		if(A == 1 || B == 1)
                			printf("V\n");
            		else
                			printf("F\n");
            		break;
        		case '+':
            		if(A != B)
                			printf("V\n");
            		else
                			printf("F\n");
            		break;
        		case '>':
            		if(A == 1 && B == 0)
                			printf("F\n");
            		else
                			printf("V\n");
            		break;
        		case '=':
            		if(A == B)
                			printf("V\n");
            		else
                			printf("F\n");
            		break;
    		}
   	 
    		//Passando por todas as combinações
    		//de valores verdade
    		if(i == 1){
        		trocarValorVerdade(&A, &a);
    		}
    		trocarValorVerdade(&B, &b);
	}
}

int main(){
	char opc;
    
	printf("Criar tabela verdade\n^ -> Conjuncao\n");
	printf("v -> Disjuncao\n+ -> Disjuncao exclusiva\n");
	printf("> -> Condicional\n= -> Bicondicional\n");
	scanf("%c", &opc);
    
	if(opc == '^' || opc == 'v' || opc == '+'
	|| opc == '>' || opc == '='){
    		criarTabela(opc);   
	}
	else {
    		printf("Entrada invalida.");
	}

	return 0;
}
