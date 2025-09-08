#include <stdio.h>
#include <string.h>

#define RED   "\x1b[31m" 
#define RESET   "\x1b[0m"
#define GREEN   "\x1b[32m"

struct Contact{
	char Nom[100];
	char NumTelephone[100];
	char Email[100];
};
void Afficher(int i,struct Contact Contacts[100]){
	printf(RED"   Le contact %d Nom :%s , Num de telephone :%s , Email :%s \n",i+1,Contacts[i].Nom,Contacts[i].NumTelephone,Contacts[i].Email);
}
void UserInputChar(char Text[],char *var){
	printf(Text);
	getchar();
	scanf("%[^\n]", var);
}

void Menu(int *operation){
	printf("             Menu : \n");
	printf(" 1-Pour ajouter un contact \n");
	printf(" 2-Pour modifier un contact \n");
	printf(" 3-Pour supprimer un contact \n");
	printf(" 4-Pour afficher tous les contacts \n");
	printf(" 5-Pour rechercher a un contact\n");
	printf(" 6-Pour afficher tous les contacts supprimer \n");
	printf(RED" 7-Pour quitter le programme\n"RESET);
	printf("   Entrez votre numero pour votre operation : ");
	scanf("%d",operation);
}
void AffichageTrierCroissant(int triPar,int length,struct Contact Contacts[]){
	int i,j;
	for(i = 0 ; i < length-1;i++){
		for (j = i+1;j < length ; j++){
			if(triPar == 1){
				if(strcmp(Contacts[i].Nom, Contacts[j].Nom) > 0){
					struct Contact temp = Contacts[i];
					Contacts[i] = Contacts[j];
					Contacts[j] = temp;
				}
			}else if(triPar == 2){
				if(strcmp(Contacts[i].NumTelephone, Contacts[j].NumTelephone) > 0){
					struct Contact temp = Contacts[i];
					Contacts[i] = Contacts[j];
					Contacts[j] = temp;
				}
			}else{
				if(strcmp(Contacts[i].Email, Contacts[j].Email) > 0){
					struct Contact temp = Contacts[i];
					Contacts[i] = Contacts[j];
					Contacts[j] = temp;
				}
			}
		}
	}
	for(i = 0 ; i < length;i++){
		Afficher(i,Contacts);
	}
	
}

int main(){
	//declaration des variables et les tableaux
		struct Contact contact;
		struct Contact Contacts[100];//tablau
		struct Contact ContactSupprimer[100];
		int i,j,k,nombreOperation,cmp=0,cmpHistorique=0,somme=0,repeter,quitter = 1,contactTrouver = 0 ,operationModification,operationTrier;
		char titreRechercher[100], nouvelleNumTelephone[100],nouvelleEmail[100],nouvelleNom[100];
		
		//utiliser do while pour repeter le menu pour chaque operation 
	    do{
	    	// Menu
		    Menu(&nombreOperation);
		    //switch pour les operation qui a choisi par l utilisateur 
		    switch(nombreOperation){
		    	// case 1 pour ajouter un  contact
		    	case 1:
		    		UserInputChar("\tDonner le nom de contact :",contact.Nom);
			        UserInputChar("\tDonner le numero de telephone : ",&contact.NumTelephone);
			        UserInputChar("\tDonner le email de contact :",&contact.Email);
			        Contacts[cmp] = contact;
			        //compteur pour incrementer le nouveau ajoute
			        cmp += 1;
			        printf("Le contact est Bien Ajouter ");
			        break;
			    // case 2 pour modifier le numero de telephone et le email a partir le nom 
			    case 2:;
					UserInputChar("Donner le nom de contact:",&titreRechercher);
					for(i = 0;i < cmp;i++ ){ 
						//comparer le nom entrer avec les nom de chaque nom de structure dans le tableaux
						if (strcmp(Contacts[i].Nom,titreRechercher)==0){
							//creer un autre menu 
							printf(" \t1-vous vouler modifier le nom :\n");
							printf(" \t2-vous vouler modifier le numero de telephone  :\n");
							printf(" \t3-vous vouler modifier le email :\n");
							printf(" \t4-vetour a menu principal :");
							scanf("%d",&operationModification);
							switch(operationModification){
								case 1:
									UserInputChar("Donner nouvelle nom  :\n",&nouvelleNom);
									strcpy(Contacts[i].Nom,nouvelleNom);
									printf("le nom est bien modifier ");
									break;
								case 2:
									UserInputChar("Donner nouvelle numero  :",&nouvelleNumTelephone);
									strcpy(Contacts[i].NumTelephone,nouvelleNumTelephone);
									printf("le numero de telephone est bien modifier ");
									break;
								case 3:
									UserInputChar("Donner nouvelle email  :",&nouvelleEmail);
									strcpy(Contacts[i].Email,nouvelleEmail);
									printf(" email est bien modifier ");
									break;
								case 4:
									break;
								default :
							    	printf("please entrer un nombre exist dans menu de modification ");
							    	break;
							}
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
					UserInputChar("Donner le nom de contact que tu dois supprimer:",&titreRechercher);
					for(i = 0;i < cmp;i++ ){ 
						if (strcmp(Contacts[i].Nom,titreRechercher)==0){
							char accepteSupprimer[1];
							UserInputChar("vous voulez supprimer ce contact (y/n) : ",&accepteSupprimer);
							if(strcmp(accepteSupprimer,"y")==0){
								ContactSupprimer[cmpHistorique] = Contacts[i];
								cmpHistorique +=1;
								for (j = i ; j < cmp;j++){
									Contacts[j] = Contacts[j+1];
								}
								cmp-=1;
								contactTrouver = 1;
								printf("le contact et bien supprimer ");
							}
						}
					}
					
					if(contactTrouver == 0){
						printf("le contact ne pas exist");
						contactTrouver = 0;
					}
					break;
					
				//case 4 pour afficher tous les info pour chaque contact   
			    case 4:
			    	if(cmp ==0){
			    		printf("Aucun contact trouver  ");
					}else{
						printf(" \t1-vous vouler trier a partir les nom :\n");
						printf(" \t2-vous vouler trier a partir numero de telephone  :\n");
						printf(" \t3-vous vouler trier a partir email :\n");
						printf(" \t4-vetour a menu principal :\n");
						scanf("%d",&operationTrier);
						switch(operationTrier){
								case 1:
									AffichageTrierCroissant(1,cmp,Contacts);
									break;
								case 2:
									AffichageTrierCroissant(2,cmp,Contacts);
									break;
								case 3:
									AffichageTrierCroissant(3,cmp,Contacts);
									break;
								case 4:
									break;
								default :
							    	printf("please entrer un nombre exist dans menu de tri ");
							    	break;
							}
					}
			    	
					break;
				// case 5 pour rechercher a un contact par son nom
				case 5:
					UserInputChar("Donner le nom de contact que tu dois rechercher:",&titreRechercher);
					for(i = 0;i < cmp;i++ ){ 
						if (strcmp(Contacts[i].Nom,titreRechercher)==0){
							Afficher(i,Contacts);
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
							Afficher(i,ContactSupprimer);
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
			}//fin switch
			
			if(quitter == 1){
				printf("\n  tu veux continuer(1 ou 0) : ");
				scanf("%d",&repeter);
			}
			
		}while(repeter == 1 && quitter == 1);
	    
	return 0;
}
