#include <stdio.h>
#include <string.h>

struct Contact{
	char Nom[100];
	char NumTelephone[100];
	char Email[100];
};

int main(){
	//declaration des variables et les tableaux
		struct Contact contact;
		struct Contact Contacts[100];
		struct Contact ContactSupprimer[100];
		int i,j,k,nombreOperation,cmp=0,cmpHistorique=0,somme=0,repeter,quitter = 1,contactTrouver = 0 ;
		char titreRechercher[100], nouvelleNumTelephone[100],nouvelleEmail[100];
		
		//utiliser do while pour repeter le menu pour chaque operation 
	    do{
	    	// Menu
		    printf("Menu : \n");
		    printf(" 1-Pour ajouter un contact \n");
		    printf(" 2-Pour modifier un contact \n");
		    printf(" 3-Pour supprimer un contact \n");
		    printf(" 4-Pour afficher tous les contacts \n");
		    printf(" 5-Pour rechercher a un contact\n");
		    printf(" 6-Pour afficher tous les contacts supprimer \n");
		    printf(" 7-Pour quitter le programme\n");
		    printf(" Entrez votre numero pour votre operation : ");
		    scanf("%d",&nombreOperation);
		    //switch pour les operation qui a choisi par l utilisateur 
		    switch(nombreOperation){
		    	// case 1 pour ajouter un  contact
		    	case 1:
		    		
		    		printf("Donner le nom de contact :");
		    		getchar();
		    		scanf("%[^\n]", &contact.Nom);
		    		
		    		printf("\n Donner le numero de telephone : ");
		    		getchar();
			        scanf("%[^\n]", &contact.NumTelephone);
			        
			        printf("\n Donner le email de contact :");
			        getchar();
			        scanf("%[^\n]", &contact.Email);
			        Contacts[cmp] = contact;
			
			        cmp += 1;
			        printf("Le contact est Bien Ajouter ");
			        
			        break;
			    // case 3 pour modifier le numero de telephone et le email a partir le nom 
			    case 2:
					printf("Donner le nom de contact:");
					getchar();
					scanf("%[^\n]",&titreRechercher);
					
					for(i = 0;i < cmp;i++ ){ 
						if (strcmp(Contacts[i].Nom,titreRechercher)==0){
							printf("Donner nouvelle numero de telephone  :");
							getchar();
							scanf("%[^\n]",&nouvelleNumTelephone);
							
							printf("Donner nouvelle email :");
							getchar();
							scanf("%[^\n]",&nouvelleEmail);
							
							strcpy(Contacts[i].NumTelephone,nouvelleNumTelephone);
							strcpy(Contacts[i].Email,nouvelleEmail);
							
							printf("les numero de telephone et email est bien modifier ");
							contactTrouver = 1;
						}
					}
					if(contactTrouver == 0){
						printf("le contact ne pas exist");
						contactTrouver = 0;
					}
					break;
				// case 3 pour supprimer un contact a partir son nom 
			    case 3:
					printf("Donner le nom de contact que tu dois supprimer:");
					getchar();
					scanf("%[^\n]",&titreRechercher);
					
					
					for(i = 0;i < cmp;i++ ){ 
						if (strcmp(Contacts[i].Nom,titreRechercher)==0){
							ContactSupprimer[cmpHistorique] = Contacts[i];
							cmpHistorique +=1;
							for (j = i ; j < cmp;j++){
								Contacts[i] = Contacts[i+1];
							}
							cmp-=1;
							contactTrouver = 1;
							printf("le contact et bien supprimer ");
						}
					}
					
					if(contactTrouver == 0){
						printf("le contact ne pas exist");
						contactTrouver = 0;
					}
					break;
					
				//case 2 pour afficher tous les info pour chaque contact   
			    case 4:
			    	if(cmp ==0){
			    		printf("Aucun contact trouver  ");
					}else{
						for(i = 0;i < cmp;i++ ){ 
							printf("          Le contact %d Nom :%s , Num de telephone :%s , Email :%s \n",i+1,Contacts[i].Nom,Contacts[i].NumTelephone,Contacts[i].Email);
						}
					}
			    	
					break;
				// case 5 pour rechercher a un contact par son nom
				case 5:
					printf("Donner le nom de contact que tu dois rechercher:");
					getchar();
					scanf("%[^\n]",&titreRechercher);
					
					
					for(i = 0;i < cmp;i++ ){ 
						if (strcmp(Contacts[i].Nom,titreRechercher)==0){
							printf("          Le contact %d Nom :%s , Num de telephone :%s , Email :%s \n",i+1,Contacts[i].Nom,Contacts[i].NumTelephone,Contacts[i].Email);
							contactTrouver = 1;
						}
					}
					
					if(contactTrouver == 0){
						printf("le contact ne pas exist");
						contactTrouver = 0;
					}
					break;
					//case 6 pour afficher tous les info pour chaque contact supprimer
				case 6:
			    	if(cmpHistorique ==0){
			    		printf("Aucun contact supprimer trouver  ");
					}else{
						for(i = 0;i < cmpHistorique;i++ ){ 
							printf("          Le contact %d Nom :%s , Num de telephone :%s , Email :%s \n",i+1,ContactSupprimer[i].Nom,ContactSupprimer[i].NumTelephone,ContactSupprimer[i].Email);
						}
					}
			    	
					break;
				// case 7 pour quitter le programme
				case 7:
					quitter = 0;
					break;
					
			    default :
			    	printf("please entrer un nombre exist dans menu ");
			    	break;
			    	
			}
			
			if(quitter == 1){
				printf("\n  tu veux continuer(1 ou 0) : ");
				scanf("%d",&repeter);
			
			}
			
		}while(repeter == 1 && quitter == 1);
	    
	return 0;
}
