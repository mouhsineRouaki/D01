#include <stdio.h>
#include <string.h>
	//Challenge 1 : Fonction de Somme
	int somme(int a , int b){
		return a + b;
	}
	//Challenge 2 : Fonction de Multiplication
	int funMultiplication(int a , int b){
		return a * b;
	}
	
	//Challenge 3 : Fonction de Maximum
	int funMax(int a , int b){
		if(a > b){
			return a ;
		}
		return b;
	}
	
	//Challenge 4 : Fonction de Minimum
	int funMin(int a , int b){
		if(a < b){
			return a ;
		}
		return b;
	};
	//Challenge 5 : Fonction de Factorielle
	int funFact(int nombre){
		int i ,factorielle=1;
		for (i=1;i <= nombre ; i++){
			factorielle *= i;
		}
		return factorielle;
	};
	//Challenge 6 : Fonction de Fibonacci
	int funFactorielle(int nombre){
		int i ,factorielle=1;
		for (i=1;i <= nombre ; i++){
			factorielle *= i;
		}
		return factorielle;
	}
	//Challenge 7 : Fonction d'Inversion de Chaîne
	void funFactorielle(char mot[6]){
		char str[6];
		strcpy(str,mot);
		int i ;
		int length = sizeof(str) / sizeof(str[0]) ;
		for (i=0;i < length / 2  ; i++){
			char temp = str[i];
			str[i] = str[length - 1 - i];
			str[length - 1 - i] = temp;
		}
		printf("%s",str);
	}
	//Challenge 8 : Fonction de Vérification de Parité
	int funParite(int nombre){
		if(nombre % 2 == 0 ){
			return a ;
		}
		return b;
	}
	
	
	
	
	
	
	
	
int main(){
	
	funFactorielle("mohsin");
	
	
	
	
	
	return 0;
}
