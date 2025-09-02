#include <stdio.h>

int main(){
    // Challenge 1 : Initialisation et Affichage
    /*
    int tab[] = {1,2,3,4,5};
    int i=0;
    int lenght = sizeof(tab)/sizeof(tab[0]);
    for(i = 0;i < lenght;i++ ){
        printf("%d\n",tab[i]);
    };
    */
    
    
    
    //Challenge 2 : Saisie et Affichage des Éléments
    /*
    int tab1[100];
    int i=0;
    int nombre;
    scanf("%d", &nombre);
    for(i = 0;i < nombre;i++ ){
        scanf("%d", &tab1[i]);
    };
    for(i = 0;i <nombre;i++ ){
        printf("%d\n",tab1[i]);
    };
    */
    
    
    
    //Challenge 3 : Somme des Éléments
    /*
    int tab2[]= {1,2,3,4,5,5,8};
    int i=0;
    int somme=0;
    int lenght = sizeof(tab2)/sizeof(tab2[0]);
    for(i = 0;i < lenght;i++ ){
        somme += tab2[i];
    };
    printf("la somme %d",somme);
    */
    
    
    
    //Challenge 4 : Trouver le Maximum
    /*
    int tab2[]= {1,2,3,4,5,5,8,9,16,4};
    int i=0;
    int max=0;
    int lenght = sizeof(tab2)/sizeof(tab2[0]);
    for(i = 0;i < lenght;i++ ){
        if(tab2[i] > max ){
            max = tab2[i];
        };
    };
    printf("la max c'est  %d",max);
    */
    
    
    
    
    //Challenge 5 : Trouver le Minimum
    /*
    int tab2[]= {1,2,3,4,5,5,8,9,16,4};
    int i=0;
    int min;
    int lenght = sizeof(tab2)/sizeof(tab2[0]);
    for(i = 0;i < lenght;i++ ){
        if(tab2[i] < min ){
            min = tab2[i];
        };
    };
    printf("la min c'est  %d",min);
    */
    
    
    //Challenge 6 : Multiplication des Éléments
    /*
    int tab2[]= {1,2,3,4,5,5,8,9,16,4};
    int i=0;
    int facteur;
    int tabMultiple[10];
    scanf("%d",&facteur)
    int lenght = sizeof(tab2)/sizeof(tab2[0]);
    for(i = 0;i < lenght;i++ ){
    	tabMultiple[i] = tab2[i] * facteur ; 
        
    };
    for(i = 0;i <lenght;i++ ){
        printf("%d\n",tabMultiple[i]);
    };
    */
    
    
    
    
    //Challenge 7 : Tableau en Ordre Croissant
    /*
    int tailleTab;
    scanf("%d",&tailleTab);
    int tab2[tailleTab];
    int i,j;
    for(i = 0;i < tailleTab;i++ ){
    	scanf("%d",&tab2[i]);
	}
    for(i = 0;i < tailleTab;i++ ){
    	for(j = i+1;j < tailleTab;j++ ){
    		if(tab2[i] > tab2[j]){
    			int stable = tab2[i];
    			tab2[i] = tab2[j];
    			tab2[j] = stable;
			};	
    	};
    };
    for(i = 0;i < tailleTab;i++ ){
        printf("%d,",tab2[i]);
    };
    */
    
    
    
    
    //Challenge 8 : Copie d'un Tableau
    /*
    
    int tab2[10]={1,3,6,19,34,055,34,23,12,9};
    int lenght = sizeof(tab2)/sizeof(tab2[0]);
    int tabCopier[10];
    int i,j;
    for(i = 0;i < lenght;i++ ){
    	tabCopier[i] = tab2[i];
	}
	printf("Table origin :\n");
    for(i = 0;i < lenght;i++ ){
        printf("%d,",tab2[i]);
    };
    printf("\nTable copier :\n");
    for(i = 0;i < lenght;i++ ){
        printf("%d,",tabCopier[i]);
    };
    */
    
    
    
    
    //Challenge 9 : Inversion d'un Tableau
    /*
    int tab2[10]={1,3,6,19,34,055,34,23,12,9};
    int lenght = sizeof(tab2)/sizeof(tab2[0]);
    int tab3[10];
    int i,j;
    for( i = 0; i < lenght / 2; i++) {
        int temp = tab2[i];
        tab2[i] = tab2[lenght - 1 - i];
        tab2[lenght - 1 - i] = temp;
    }
	for(i = 0;i < lenght;i++ ){
        printf("%d,",tab2[i]);
    };
    */
    
    
    
    
    //Challenge 10 : Rechercher un Élément
    /*
    
    int i=0;
    int nombreRechercher;
    int nombre;
    printf("Saisie le nombre delement de tablaeu :");
    scanf("%d", &nombre);
    int tab4[nombre];
    printf("\n Saisie les elements de tablaeu\n ");
    for(i = 0;i < nombre;i++ ){
        scanf("%d", &tab4[i]);
    };
    printf("\n Saisie lelemnet que tu recherche\n  ");
    scanf("%d", &nombreRechercher);
    
    for(i = 0;i < nombre;i++ ){
        if(tab4[i] == nombreRechercher){
        	printf("le  nombre existe ");
        	return ;
		}	
    };
    printf("le  nombre ne pas existe ");
    */
    
    
    
    
    
    //Challenge 11 : Remplacer un Élément
    /*
    int i=0;
    int nombreRechercher,nouvelleValeur;
    int nombre;
    printf("Saisie le nombre delement de tablaeu :");
    scanf("%d", &nombre);
    int tab4[nombre];
    printf("\n Saisie les elements de tablaeu\n ");
    for(i = 0;i < nombre;i++ ){
        scanf("%d", &tab4[i]);
    };
    printf("\n Saisie la valeur a remplacer \n  ");
    scanf("%d", &nombreRechercher);
    printf("\n Saisie nouvelle valeur  \n  ");
    scanf("%d", &nouvelleValeur);
    
    for(i = 0;i < nombre;i++ ){
        if(tab4[i] == nombreRechercher){
        	tab4[i] = nouvelleValeur;
        	printf("la valeur bien modifier");
        	return ;
		}	
    };
    printf("le  nombre ne pas existe ");
    */
    
    
    
    
    
    //Afficher les Éléments Paire
    /*
    int i=0;
    int nombre;
    printf("Saisie le nombre delement de tablaeu :");
    scanf("%d", &nombre);
    int tab4[nombre];
    printf("\n Saisie les elements de tablaeu\n ");
    for(i = 0;i < nombre;i++ ){
        scanf("%d", &tab4[i]);
    };
    for(i = 0;i < nombre;i++ ){
    	if(tab4[i] % 2 == 0){
        	printf("%d,",tab4[i]);
    	}
    };
    */
    
    
    
    
    //Afficher les Éléments Paire
    /*
    int i=0;
    int nombre;
    printf("Saisie le nombre delement de tablaeu :");
    scanf("%d", &nombre);
    int tab4[nombre];
    printf("\n Saisie les elements de tablaeu\n ");
    for(i = 0;i < nombre;i++ ){
        scanf("%d", &tab4[i]);
    };
    for(i = 0;i < nombre;i++ ){
    	if(tab4[i] % 2 != 0){
        	printf("%d,",tab4[i]);
    	}
    };
    */
    
    
    
    
    
    
    //Challenge 14 : Calculer la Moyenne
    /*
    int i=0;
    int nombre;
    int somme=0;
    printf("Saisie le nombre delement de tablaeu :");
    scanf("%d", &nombre);
    int tab4[nombre];
    printf("\n Saisie les elements de tablaeu\n ");
    for(i = 0;i < nombre;i++ ){
        scanf("%d", &tab4[i]);
    };
    for(i = 0;i < nombre;i++ ){
    	somme += tab4[i] ;
    };
    printf("la moyenne c'est %d",somme / nombre );
    */
    
    
    
    
    
    
    
    return 0;
}
