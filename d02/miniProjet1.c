#include <stdio.h>
#include <string.h>

int main(){
	//declaration des variables et les tableaux
		int i,j,k,nombreOperation,cmp=0,cmpHistorique=0,somme=0 ;
	    int prix,quantite,nombreLivres,nouvelleQuantite;
		char titreRechercher[100];
		char auteur[100],TableTitre[100][20],TableAuteur[100][20],titre[100];
		char TableTitreHistorique[100][20],TableAuteurHistorique[100][20];
	    int TablePrix[100],TableQuantite[100];
	    int TablePrixHistorique[100],TableQuantiteHistorique[100];
		int repeter ;
		
		//utiliser do while pour repeter le menu pour chaque operation 
	    do{
	    	// Menu
		    printf("Menu : \n");
		    printf(" 1-Pour ajouter un Livre \n");
		    printf(" 2-Pour afficher tous les Livres \n");
		    printf(" 3-Pour mise a jour la quantite d`un livre \n");
		    printf(" 4-Pour supprimer un livre \n");
		    printf(" 5-Pour afficher le total de tous les livres\n");
		    printf(" 6-Pour afficher tous les livres supprimer\n");
		    printf(" Entrez votre numero pour votre operation : ");
		    scanf("%d",&nombreOperation);
		    //switch pour les operation qui a choisi par l utilisateur 
		    switch(nombreOperation){
		    	// case 1 pour ajouter les livres
		    	case 1:
		    		
		    		printf("Donner le titre de Livre :");
		    		getchar();
		    		scanf("%[^\n]", &TableTitre[cmp]);
		    		
		    		printf("\n Donner le auteur de Livre : ");
		    		getchar();
			        scanf("%[^\n]", &TableAuteur[cmp]);
			        printf("\n Donner le prix de Livre :");
			        scanf("%d", &TablePrix[cmp]);
			
			        printf("\n Donner la quantite  de Livre :");
			        scanf("%d", &TableQuantite[cmp]);
			
			        cmp += 1;
			        printf("Le Livre est Bien Ajouter ");
			        
			        break;
			        
			    //case 2 pour afficher tous les info pour chaque livre   
			    case 2:
			    	if(cmp ==0){
			    		printf("Aucun livre trouver  ");
					}else{
						for(i = 0;i < cmp;i++ ){ 
							printf("Le Livre %d Titre :%s , Auteur :%s , Prix :%d , Qunatite :%d \n",i+1,TableTitre[i],TableAuteur[i],TablePrix[i],TableQuantite[i]);
						}
					}
			    	
					break;
					
				// case 3 pour modifier la quantite dun livre par sons titre 
				case 3:
					printf("Donner le titre de Livre :");
					getchar();
					scanf("%[^\n]",&titreRechercher);
					
					printf("Donner la nouvelle quantite de Livre :");
					scanf("%d",&nouvelleQuantite);
					
					for(i = 0;i < cmp;i++ ){ 
						if (strcmp(TableTitre[i],titreRechercher)==0){
							TableQuantite[i] = nouvelleQuantite;
							printf("mise quantite de %s avec success :",titreRechercher);
							break;
						}
					}
					
					printf("le livre ne pas exist");
					break;
				// case 3 pour supprimer un livre par sons titre 
				case 4:
					
					printf("Donner le titre de Livre que tu veux supprimer :");
					getchar();
					scanf("%[^\n]",&titreRechercher);
					
					for(i = 0;i < cmp;i++ ){ 
						if (strcmp(titreRechercher,TableTitre[i])==0){
							// ajouter dans historique tables
							strcpy(TableTitreHistorique[cmpHistorique],TableTitre[i]); 
							strcpy(TableAuteurHistorique[cmpHistorique],TableTitre[i]); 
							TablePrixHistorique[cmpHistorique ]= TablePrix[i];
							TableQuantite[cmpHistorique] = TableQuantite[i];
							cmpHistorique += 1;
							
							//	 pour Supprimer le element de tableau						
							for(j =  i;j < cmp;j++ ){ 
								strcpy(TableTitre[j],TableTitre[j+1]);
								strcpy(TableAuteur[j] ,TableAuteur[j+1]);
								TablePrix[j] = TablePrix[j+1];
								TableQuantite[j] = TableQuantite[j+1];
								
								printf("le livre  %s est supprimer avec success :",titreRechercher);
							}
							// decrasser le tableaux 
							cmp--;
						}
					}
					break;
				// case 5 pour calcul le total de bibliotheque 
				case 5:
					
					for (i = 0 ;i < cmp; i++ ){
						somme += TableQuantite[i];
					}
					printf("le nombre total de stock c est %d",somme);
					break;
				
				//case 6 pour afficher tous les histoque  pour des  livre  livre supprimer  
			    case 6:
			    	somme = 0;
			    	for(i = 0;i < cmpHistorique;i++ ){ 
						printf("Le Livre %d Titre :%s , Auteur :%s , Prix :%d , Qunatite :%d \n",i+1,TableTitreHistorique[i],TableAuteurHistorique[i],TablePrixHistorique[i],TableQuantiteHistorique[i]);
					}
					break;
					
			    default :
			    	printf("please entrer un nombre exist dans menu ");
			    	break;
			    	
			}
			
			printf("\n tu peux continuer(1 ou  0) : ");
			scanf("%d",&repeter);
			
		}while(repeter == 1);
	    
	return 0;
}
