#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	//Challenge 1 : Affichage d'une Chaîne
	/*
		char str[100];
		printf("donner un nombre :");
		scanf("%s",&str);
		printf("%s",str);
	*/
	//Challenge 2 : Longueur de la Chaîne
	/*
		char str[100];
		printf("donner un nombre :");
		scanf("%s",&str);
		printf("longueur cest %d",strlen(str));
	*/
	//Challenge 3 : Concaténation de Chaînes
	/*
		char str1[100],str2[100];
		printf("donner premier mot :");
		scanf("%s",&str1);
		printf("donner deuxieme mot :");
		scanf("%s",&str2);
		printf("la concatination cest %s",strcat(str1,str2));
	*/
	//Challenge 4 : Comparaison de Chaînes
	/*
		char str1[100],str2[100];
		printf("donner premier mot :");
		scanf("%s",&str1);
		printf("donner deuxieme mot :");
		scanf("%s",&str2);
		if(strcmp(str1,str2) == 0){
			printf("sont egaux");
		}else{
			printf("ne sont pas egaux");
		}
	*/
	//Challenge 5 : Inversion de Chaîne
	/*
		char str[100];
		char temp[100];
		int i;
		printf("donner le mot :");
		scanf("%s",&str);
		int length = strlen(str) ;
		for(i = 0 ; i < length / 2 ;i++){
			temp[i] = str[i];
			str[i] = str[length - i - 1];
			str[length - i - 1]= temp[i];
		}
		printf("mot inverser %s",str);
	*/
	//Challenge 6 : Compte des Occurrences d'un Caractère
	/*
		char str[100];
		char charactere;
		int i,cmp = 0;
		printf("donner le charactere :");
		scanf("%c",&charactere);
		printf("donner le mot :");
		getchar();
		scanf("%[^\n]",&str);
		int length = strlen(str) ;
		for(i = 0 ; i < length ;i++){
			if(charactere == str[i]){
				cmp +=1;
			}
		}
		printf("il repeter %d fois ",cmp);
	*/
	//Challenge 7 : Conversion en Majuscules
	/*
		char str[100],strMaj[100];
		int i;
		printf("donner le mot :");
		scanf("%s",&str);
		int length = strlen(str) ;
		for(i = 0 ; i < length ;i++){
			strMaj[i] = toupper(str[i]);
		}
		printf("en majiscule :%s",strMaj);
	*/
	//Challenge 8 : Conversion en Minuscules
	/*
		char str[100],strMin[100];
		int i;
		printf("donner le mot :");
		scanf("%s",&str);
		int length = strlen(str) ;
		for(i = 0 ; i < length ;i++){
			strMin[i] = tolower(str[i]);
		}
		printf("en miniscule :%s",strMin);
	*/
	//Challenge 9 : Suppression des Espaces
	/*
		char str[100];
		int i,j;
		printf("donner le mot:");
		getchar();
		scanf("%[^\n]",&str);
		int length = strlen(str) ;
		for(i = 0 ; i < length ;i++){
			if(str[i] == ' '){
				for(j = i; j < length;j++){
					str[j] = str[j+1];
				}
				length-=1;
			}
		}
		for(i = 0 ; i < length ;i++){
			printf("%c",str[i]);
		}
	*/
	//Challenge 10 : Trouver un Sous-String
	/*
		char str[100],souStr[100];
		int i,j,cmpTrouve = 0,cmp=0;
		printf("donner le mot:\n");
		scanf("%s",&str);
		printf("donner le sous mot:");
		scanf("%s",&souStr);
		int lengthStr = strlen(str) ;
		int lengthSouStr = strlen(souStr) ;
		for(i = 0 ; i < lengthStr ;i++){
			if(str[i] == souStr[0]){
				for(j = i; j < lengthStr;j++){
					if(str[j] == souStr[cmp] ){
						cmp +=1;
						cmpTrouve +=1;
					}
				}
			}
		}
		if(cmpTrouve == lengthSouStr){
			printf("sous string exist");
		}else{
			printf("sous string ne pas exist");
		}
	*/




	return 0 ;
}
