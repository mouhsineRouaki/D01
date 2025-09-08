#include <stdio.h>
#include <math.h>
#include <string.h>
//Challenge 1 : Définition et Utilisation de Structure
	struct Personne {
		char nom[100];
		char prenom[100];
		int age; 
	};
//Challenge 2 : Structure avec Tableau
	struct Etudiant {
		char nom[100];
		char prenom[100];
		int Notes[3];
	};
//Challenge 3 : Passage de Structure en Argument
	struct Rectangle  {
		int longueur;
		int largeur;
	};
	int aire(struct Rectangle s){
		int aire;
		aire = s.largeur * s.longueur;
		return aire;
	}
//Challenge 4 : Structure avec Pointeurs
	struct Point{
		int x;
		int y;
	};
//Challenge 5 : Structure et Fonction de Retour
	struct Livre{
		char titre[100];
		char auteur[100];
		int annee; 
	};
	struct Livre structure(){
		struct Livre l = {"mohsin","rouaki",2023};
		return l;
	}
int main(){
	//Challenge 1 : Définition et Utilisation de Structure
	/*
		struct Personne p = {"rouaki","mohsin",21};
		printf("nom = %s,prenom = %s, age = %d",p.nom,p.prenom,p.age);
	*/
	//Challenge 2 : Structure avec Tableau
	/*
		struct Etudiant e = {"rouaki","mohsin",{20,18,19};
		int i,length = sizeof(e.Notes)/sizeof(e.Notes[0]);
		printf("nom = %s,prenom = %s,notes = \n",e.nom,e.prenom);
		for (i = 0 ; i <length;i++ ){
			printf("%d,",e.Notes[i]);
		}
	*/
	//Challenge 3 : Passage de Structure en Argument
	/*
		struct Rectangle r = {13,14};
		printf("%d",aire(r));
	*/
	//Challenge 4 : Structure avec Pointeurs
	/*
		struct Point p1 = {13,14};
		struct Point *p ;
		p = &p1;
		p->x = 20;
		p->y = 18;
		printf("%d,",p1.x);
		printf("%d",p1.y);
	*/
	//Challenge 5 : Structure et Fonction de Retour
	/*
		struct Livre l = structure();
		printf("titre = %s,auteur = %s, annee = %d",l.titre,l.auteur,l.annee);
	*/
		
	return 0;
}
