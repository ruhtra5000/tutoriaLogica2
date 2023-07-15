/*
Sabendo que A é verdadeiro, B é falso e C é verdadeiro, podemos assumir que:
a) (B ∨ C) é verdadeiro, portanto A ∧ (B ∨ C) é verdadeiro, já que A também é verdadeiro.
b) (A ∧ B) tem valor verdade falso, pois B é falso, mas C é verdadeiro, então: (A ∧ B) ∨ C é verdadeiro.
c) (A ∧ B)’ tem valor verdade verdadeiro, pois seu valor verdade padrão é falso, então sua negação é verdadeira, e C também é verdadeiro, 
   então: (A ∧ B)’ ∨ C é verdadeiro.
d) (B’ ∧ C) assume valor verdadeiro, e A torna-se falso com a sua negação, portanto: A’ ∨ (B’ ∧ C) é verdadeiro.

Ao resolver esse problema de forma computacional, é interessante a criação de algumas funções para cada um dos conectivos lógicos utilizados: 
conjunção, disjunção e negação; e usá-los para criar os casos particulares em cada letra da questão.
*/
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
