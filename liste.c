

#include "liste.h"
#include <stdlib.h>

void afficher(liste *l) {
	do {
		printf("%d\n", l->valeur);
	} while (l->suivant != NULL);
}

liste* ajoute_fin(liste *l, int entier) {

	// on crée un nouveau maillon
	liste* new = malloc(sizeof(liste));
	new->suivant = NULL;
	new->valeur = entier;

	// on parcourt la liste jusqu'à la fin
	liste* courant = l;
	while (courant->suivant != NULL) {
		courant = courant->suivant;
	}
	
	// on ajoute le nouveau maillon à la fin
	courant->suivant = new;

	return l;
}

liste* ajoute_debut(liste *l, int entier) {

	// on crée un nouveau maillon
	liste* new = malloc(sizeof(liste));
	new->valeur = entier;

	// on le place au début et on fait le chaînage
	new->suivant = l;
	return new;
}

liste* ajoute_position(liste *l, int entier, unsigned int position) {

	liste* courant = l;

	// on parcourt la liste, jusqu'à l'endroit voulu, tout en 
	//  faisant attention à la fin de la liste
	int i = 0;
	while (i < position && courant->suivant != NULL) {
		courant = courant->suivant
		i++;
	}

	if (i < position) {
		// on est arrivé à la fin de la liste avant la position voulue
		printf("MOTHERFUCKER you tried to put it at the %d position but this fucking list only has %d elements. But even so, i have put it at the end of the list. But please be careful the next time.\n", );
	}

	// on crée le nouveau maillon
	liste* new = malloc(sizeof(liste));
	new->valeur = entier;

	// on fait le chaînage avec le précédent et le suivant
	liste* suivant = courant->suivant;
	courant->suivant = new;
	new->suivant = suivant;

	return l;
}

liste* remplir(liste *l, int tab[], unsigned int nb) {

	// on va à la fin de la liste
	liste* courant = l;
	while (courant->suivant != NULL) {
		courant = courant->suivant;
	}

	int i = 0;
	// pour chaque élément du tableau
	while (i < nb) {

		// on crée un nouveau maillon
		liste* new = malloc(sizeof(liste));
		new->valeur = tab[i];
		new->suivant = NULL;

		courant->suivant = new;

		courant = new;
		i++;
	}

	return l;
}