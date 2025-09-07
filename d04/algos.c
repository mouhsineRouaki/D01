#include <stdio.h>
#include <math.h>
#include <string.h>
int triRapide(int T[],int bat , int haut){
	if (haut > bat ){
		
	}
}

int main(){
	//Challenge 1 : Tri à Bulles
	/*
		int i,j=0,tab[10] = {4,3,5,65,2,98,124,32,67,93};
		int length = sizeof(tab)/sizeof(tab[0]);
		for(i=0;i < length;i++){
			for(j=0;j < length-1-i;j++){
				if(tab[j] > tab[j+1]){
					int temp = tab[j];
					tab[j]=tab[j+1] ;
					tab[j+1] = temp;
				}
			}
		}
		for(i = 0 ; i < length ;i++){
			printf("%d,",tab[i]);
		}
		*/
	//Challenge 2 : Tri par Insertion
	/*
		int i,j=0,tab[10] = {4,3,5,65,2,98,124,32,67,93};
		int length = sizeof(tab)/sizeof(tab[0]);
		for(i = 0 ; i < length ;i++){
			printf("%d,",tab[i]);
		}
		printf("\n");
		for(i=1;i < length;i++){
			int temp = tab[i];
			int j = i-1;
			while(temp < tab[j] && j >=0){
				tab[j+1] = tab[j];
				j--;
			}
			tab[j+1] = temp;
		}
		for(i = 0 ; i < length ;i++){
			printf("%d,",tab[i]);
		}
	*/
	//Challenge 3 : Tri par Sélection
		int i,j=0,tab[10] = {4,3,5,65,2,98,124,32,67,93};
		int length = sizeof(tab)/sizeof(tab[0]);
		for(i=0;i < length;i++){
			for(j=i+1;j < length;j++){
				if(tab[j] < tab[i]){
					int temp = tab[i];
					tab[i]=tab[j] ;
					tab[j] = temp;
				}
			}
		}
		for(i = 0 ; i < length ;i++){
			printf("%d,",tab[i]);
		}
	//Challenge 4 : Tri Rapide
		
		
		
		
		
	return 0;
}
