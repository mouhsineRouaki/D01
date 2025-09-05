#include <stdio.h>
#include <math.h>

int main(){
	//Challenge 1 : Affichage Informations
	/*
	
		char nom[50], prenom[50], sexe[10], email[50];
	    int age;
	
	    printf("votre nom : ");
	    scanf("%s", nom);
	
	    printf("votre prenom : ");
	    scanf("%s", prenom);
	
	    printf(" votre age : ");
	    scanf("%d", &age);
	
	    printf(" votre sexe : ");
	    scanf("%s", sexe);
	
	    printf(" votre email : ");
	    scanf("%s", email);
	    printf("Nom      : %s\n", nom);
	    printf("Prenom   : %s\n", prenom);
	    printf("Age      : %d\n", age);
	    printf("Sexe     : %s\n", sexe);
	    printf("Email    : %s\n", email);
	*/
	
	
	
	
	//Challenge 2 : Conversion de la température
	/*
		float c, k;
	    printf("la temperature en Celsius : ");
	    scanf("%f", &c);
	
	    k = c + 273.15;
	
	    printf("Temperature en Kelvin : %.2f\n", K);
	*/
	
	
	
	
	
	//Challenge 3 : Conversion de la distance
	/*
		float km, yards ;
	    printf("la distance en km : ");
	    scanf("%f", &km);
	
	    yards = km + 1093.61;
	
	    printf("distance en yards : %f \n", yards);
	*/
	
	
	
	//Challenge 4 : Conversion de la vitesse
	/*
		float mParS, kmParH ;
	    printf("la vitesse en km/h : ");
	    scanf("%f", &kmParH);
	
	    mParS = kmParH * 0.27778;
	
	    printf("vitesse en m/s : %f \n", mParS);
	*/
	
	
	
	
	//Challenge 5 : Affichage Température
	/*
		int celsius;
	    printf(" temperature en Celsius : ");
	    scanf("%d", &celsius);
	
	    if(celsius < 0){
	    	printf(" temperature solide");
		}elseif(celsius >=0  && celsius < 100){
	    	printf(" temperature solide");
		}else{
	    	printf(" temperature solide");
		};
	*/
	
	
	
	
	
	//Challenge 6 : Calcul et affichage des résultats
	/*
		float a, b ;
	    printf("premiere nombre  : ");
	    scanf("%f", &a);
	    
	    printf("deuxieme nombre  : ");
	    scanf("%f", &b);
	
	    printf("somme  : %f \n", a+b);
	    printf("devision  : %f \n", a/b);
	    printf("multiplication  : %f \n", a*b);
	    printf("soustraction  : %f \n", a-b);
	*/
	
	
	
	
	
	
	//Challenge 7 : Moyenne pondérée de trois nombres
	/*
		float n1, n2, n3, moyenne;
	    printf("Entrez trois nombres : ");
	    scanf("%f %f %f", &n1, &n2, &n3);
	
	    moyenne = (n1 * 2 + n2 * 3 + n3 * 5) / 10;
	
	    printf("Moyenne ponderee = %f\n", moyenne);
	*/
	
	
	
	
	//Challenge 8 : Calcul de la moyenne géométrique
	/*
		float n1, n2, n3, moyenneGeometrique;
	    printf("Entrez trois nombres : ");
	    scanf("%f %f %f", &n1, &n2, &n3);
	
	    moyenneGeometrique = (n1 * n2 * n3 )^(1/3);
	
	    printf("Moyenne ponderee = %f\n", moyenneGeometrique);
	*/
	
	//Challenge 9 : Calcul de la distance entre deux points dans un espace 3D
	/*
		float x1, y1, z1, distance;
		float x2, y2, z2;
	    printf("Entrez les cordonner de premier points : ");
	    scanf("%f %f %f", &x1, &y1, &z1);
	    printf("Entrez les cordonner de deuxieme points : ");
	    scanf("%f %f %f", &x2, &y2, &z2);
	
	    distance = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2)+pow(z2 - z1,2));
	
	    printf("la distance  = %f\n", distance);
	*/
	
	
	//Challenge 9 : Calcul de la distance entre deux points dans un espace 3D
	/*
		float r,volume;
		float p = 3.14;
	    printf("Entrez le rayon de sphere : ");
	    scanf("%f",&r);
	
	    volume = 4/3 * p * pow(r,3);
	
	    printf("le volume de sphere  = %f\n", volume);
	*/
	
	
	//Challenge 11 : Surface d'un rectangle
	/*
		float largeur,longueur,surface;
	    printf("Entrez le largeur ");
	    scanf("%f",&largeur);
	    printf("Entrez le longueur: ");
	    scanf("%f",&longueur);
	
	    surface = largeur * longueur;
	
	    printf("le volume de sphere  = %f\n", surface);
	*/
	
	//Challenge 12 : Nombre entier à quatre chiffres en ordre inverse
	/*
		int nombre = 1234,nbInvers, dernierNombre;
		dernierNombre = nombre % 10 ;
	    nbInvers = nbInvers * 10 + dernierNombre;
	    nombre /= 10;
	    dernierNombre = nombre % 10 ;
	    nbInvers = nbInvers * 10 + dernierNombre;
	    nombre /= 10;
	    dernierNombre = nombre % 10 ;
	    nbInvers = nbInvers * 10 + dernierNombre;
	    nombre /= 10;
	    dernierNombre = nombre % 10 ;
	    nbInvers = nbInvers * 10 + dernierNombre;
		
	
	    printf("le nombre invers  = %d\n", nbInvers);
	*/
	
	//Challenge 13 : Affichage des valeurs et hexadécimale équivalentes
	/*
		int nombre;
	    printf("Entrez le nombre ");
	    scanf("%d",&nombre);
	    printf("le nombre en hexadecimal en miniscule  %x\n", nombre);
	    printf("le nombre en hexadecimal en majiscule %X\n", nombre);
	*/
	
	return 0;
}
