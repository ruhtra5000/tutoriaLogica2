#include <stdio.h>

int negacao(int A){
	if(A == 1){
    		return 0;
	}
	else {
    		return 1;
	}
}

int conjuncao(int A, int B){
	if(A == 1 && B == 1){
    		return 1;
	}
	else {
    		return 0;
	}
}

int disjuncao(int A, int B){
	if(A == 1 || B == 1){
    		return 1;
	}
	else {
    		return 0;
	}
}

int main(){
	int A = 1, B = 0, C = 1;
    
	//Letra a
	if(conjuncao(A, disjuncao(B, C)) ==  1){
    		printf("A ^ (B v C) eh verdadeiro\n");
	}
	else {
    		printf("A ^ (B v C) eh falso\n");
	}
    
	//Letra b
	if(disjuncao(conjuncao(A, B), C) ==  1){
    		printf("(A ^ B) v C eh verdadeiro\n");
	}
	else {
    		printf("(A ^ B) v C eh falso\n");
	}
    
	//Letra c
	if(disjuncao(negacao(conjuncao(A, B)), C) ==  1){
    		printf("(A ^ B)' v C eh verdadeiro\n");
	}
	else {
    		printf("(A ^ B)' v C eh falso\n");
	}
    
	//Letra d
	if(disjuncao(negacao(A), conjuncao(negacao(B), C)) ==  1){
    		printf("A' v (B' ^ C) eh verdadeiro\n");
	}
	else {
    		printf("A' v (B' ^ C) v C eh falso\n");
	}

	return 0;
}
