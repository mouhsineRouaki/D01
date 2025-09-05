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
	int funFibonacci(int nombre){
		if (nombre == 0){
			return 0;
		}else if(nombre == 1) {
			return 1;
		}else{
			return funFibonacci(nombre - 1)+ funFibonacci(nombre - 2);
		}
	}
	//Challenge 7 : Fonction d'Inversion de Chaîne
	char* funIversString(char mot[6]){
		char str[6];
		strcpy(str,mot);
		int i ;
		int length = sizeof(str) / sizeof(str[0]) ;
		for (i=0;i < length / 2  ; i++){
			char temp = str[i];
			str[i] = str[length - 1 - i];
			str[length - 1 - i] = temp;
		}
		return str;
	}
	//Challenge 8 : Fonction de Vérification de Parité
	int funParite(int nombre){
		if(nombre % 2 == 0 ){
			return 1 ;
		}
		return 0;
	}
	
	
	
	
	
	
	
	
int main(){
	printf("//Challenge 1 : Fonction de Somme\n");
	printf("%d\n",somme(5,10));
	printf("//Challenge 2 : Fonction de Multiplication\n");
	printf("%d\n",funMultiplication(5,10));
	printf("//Challenge 3 : Fonction de Maximum\n");
	printf("%d\n",funMax(5,10));
	printf("//Challenge 4 : Fonction de Minimum\n");
	printf("%d\n",funMin(5,10));
	printf("//Challenge 5 : Fonction de Factorielle\n");
	printf("%d\n",funFact(5));
	printf("//Challenge 6 : Fonction de Fibonacci\n");
	printf("%d\n",funFibonacci(6));
	printf("//Challenge 7 : Fonction d'Inversion de Chaine\n");
	printf("%s\n",funIversString("mohsin"));
	printf("//Challenge 8 : Fonction de Vérification de Parite\n");
	printf("%d\n",funParite(5));
	

	return 0;
}
