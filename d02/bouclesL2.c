#include <stdio.h>
#include <math.h>

int main(){
	//Challenge 1 : Table de Multiplication Inversée
	/*
		int i ,nombre;
		printf("donner un nombre :");
		scanf("%d",&nombre);
		for (i= nombre ; i > 0 ; i--){
			printf("%d * %d = %d\n",nombre , i ,nombre* i );
		}
	*/
	//Challenge 2 : pyramide d'étoile
	/*
      	int i,j,k,cmp = 1 ,nombre,cmpEspace = nombre;
		printf("donner un nombre de line  :");
		scanf("%d",&nombre);
		for (i= 1 ; i <=nombre ; i++){
			for (k= cmpEspace ; k>0 ; k--){
				printf(" ");
			}
			cmpEspace--;
			for (j= 1 ; j <=cmp ; j++){
				printf("*");
			}
			printf("\n");
			cmp +=2;
		}
	*/
	
	//Challenge 3 : Affichage des Nombres Premiers
	/*
		int i ,nombre;
		printf("donner un nombre :");
		scanf("%d",&nombre);
		printf("les nombre premiere c est  : ");
		for (i= nombre ; i > 2 ; i--){
			if (i > 1){
				if(i % 2 != 0)
					printf("%d," ,i);
			}
		}
	*/
	//Challenge 4 : Inversion d'un Entier
	/*
		int i ,nombre,nombreInvers;
		printf("donner un nombre :");
		scanf("%d",&nombre);
		while(nombre){
			nombreInvers = nombreInvers *10  + nombre % 10;
			nombre /= 10;
		}
		printf("%d",nombreInvers);
	*/
	//Challenge 5 : Somme des N Nombres
	/*
		int i ,nombre,somme = 0;
		printf("donner un nombre :");
		scanf("%d",&nombre);
		for (i = 1 ; i <= nombre ; i++){
			somme += i;
		}
		printf("somme : %d",somme);
	*/
	//Challenge 6 : Facteurs d'un Nombre
	/*
		int i ,nombre;
		printf("donner un nombre :");
		scanf("%d",&nombre);
		for (i = 1 ; i <= nombre ; i++){
			if (nombre % i == 0){
				printf("%d,",i);
			}
		}
	*/
	//Challenge 7 : Suite de Fibonacci
	/*
		int i ,nombre,a = 0 , b = 1 , suivant;
		printf("donner un nombre :");
		scanf("%d",&nombre);
		for (i = 0 ; i < nombre ; i++){
			printf("%d,",a);
			suivant = a + b;
			a = b;
			b = suivant;
		}
	*/
	//Challenge 9 : Calcul de la Puissance
	/*
		int exposant,nombre,puissance=1;
		printf("donner un nombre :");
		scanf("%d",&nombre);
		printf("\ndonner l'exposant :");
		scanf("%d",&exposant);
		while(exposant > 0){
			puissance *= nombre;
			exposant--;
		}
		printf("puissance  :%d",puissance);
	*/
	//Challenge 10 : Générateur de Mot de Passe
	/*
		int i ,nombre;
		char Maj[26] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		char min[26] = "abcdefghijklmnopqrstuvwxyz";
		char chiffre[10] = "123456789";
		char motPass[100];
		printf("donner un nombre :");
		scanf("%d",&nombre);
		for (i = 0 ; i < nombre ; i++){
			int cmp = rand() % 10;
			if(nombre >= 0 ){
				printf("%c",Maj[cmp]);
				nombre--;
			}
			if(nombre >= 0 ){
				printf("%c",min[cmp]);
				nombre--;
			}
			if(nombre >= 0 ){
				printf("%c",chiffre[cmp]);
				nombre--;
			}
			
		}
	*/
	//Challenge 11 : Moyenne des Nombres
	/*
		int i ,nombre,cmp = 0,somme = 0;
		printf("donner un nombre :");
		scanf("%d",&nombre);
		for (i = nombre ; i > 0 ; i--){
			if(i % 10 == 0){
				somme += i;
				cmp +=1;
			}
			
		}
		printf("%d",somme/cmp);
	*/
	//Challenge 12 : Tri par Bulles
	/*
		int i,j ,nombre;
		int tab[100];
		printf("donner le nombre delement :");
		scanf("%d",&nombre);
		for (i = 0 ; i < nombre ; i++){
			scanf("%d",&tab[i]);
		}
		for (i = 0 ; i < nombre ; i++){
			for (j = 0 ; j < nombre - i -1 ; j++){
				if(tab[j] > tab[j+1] ){
					int temp = tab[j];
					tab[j] = tab[j+1];
					tab[j+1] = temp;
				}
			}
			
		}
		for (i = 0 ; i < nombre ; i++){
			printf("%d,",tab[i]);
		}
	*/
	//Challenge 13 : Table de Multiplication avec Somme
	/*
		int i ,nombre,somme = 0;
		printf("donner un nombre :");
		scanf("%d",&nombre);
		for (i= nombre ; i > 0 ; i--){
			printf("%d * %d = %d\n",nombre , i ,nombre* i );
			somme += nombre* i;
		}
		printf("somme = %d",somme );
	*/
	//Challenge 14 : Sélection de Sortie
	/*
		int i ,nombre,selection;
		char jours[7][20] = {"lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"};
		int length = sizeof(jours) / sizeof(jours[0]);
		for (i = 0 ; i > length ; i++){
			printf("%d-%s\n",i+1,jours[i]);
		}
		printf("selectionner un jours :");
		scanf("%d",&selection);
		if(selection > 0 && selection <=length){
			printf("le jour selectionner : %s\n",jours[selection-1]);
			printf("les jours suivant :\n");
			for (i = selection ; i < length ; i++){
				printf("%s\n",jours[i]);
			}
		}
	*/
	//Challenge 15 : Calcul de la Factorielle
	/*
		int i ,nombre,factorille = 1;
		printf("donner un nombre");
		scanf("%d",&nombre);
		for (i = 1 ; i <= nombre ; i++){
			factorille *= i;
		}
		printf("factorille c est :");
		printf("%d",factorille);
	*/
		
		
	
	return 0;
}
