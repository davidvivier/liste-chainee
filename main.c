/************************************************************************/
/*** VIVIER David													    */
/*** VARAGNAT Kévin													    */
/*** 14/02/2017											                */
/*** Implémentation d'une liste dans une liste chaînée					*/
/*** Exécuter ./main pour utiliser le programme 					    */
/*** Exécuter "make clean" pour nettoyer							    */
/************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "liste.h"


int main(void)
{

    liste *maListe = nouvelleListe(5);
    //int valeur = 5;

    afficher(maListe);

    maListe = ajoute_fin(maListe, 6);

    afficher(maListe);

    maListe = ajoute_debut(maListe, 4);

    afficher(maListe);

    int tab[] = {7, 8, 10, 11};

    maListe = remplir(maListe, tab, 4);

    afficher(maListe);

    maListe = ajoute_position(maListe, 9, 6);

    afficher(maListe);
	
	maListe = ajoute_position(maListe, 2, 1);

	afficher(maListe);

	maListe = ajoute_position(maListe, 3, 2);

	afficher(maListe);


	// on insère un doublon
	maListe = ajoute_position(maListe, 4, 6);	
	afficher(maListe);
	int pos = rechercher(maListe, 4);
	printf("Le premier 4 se trouve à la position %d\n", pos);

	// on supprime le premier 4
	maListe = supprimer(maListe, 4);

	afficher(maListe);

	vider(maListe);

    return  0;
}