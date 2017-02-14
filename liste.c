

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
		courant = courant->suivant;
		i++;
	}

	if (i < position) {
		// on est arrivé à la fin de la liste avant la position voulue
		printf("MOTHERFUCKER you tried to put it at the %d position but this fucking list only has %d elements. But even so, i have put it at the end of the list. But please be careful the next time.\n" ,position );
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


int rechercher(liste* l , int entier) {
    int i = 0 ;
    liste* courant = l ;// pointeur pour parcourir la liste
    while (courant->valeur != entier && courant != NULL) // tant que la valeur n'as pas été trouvée et que la fin de liste n'est pas atteinte
    {
        i++ ; // on incrémente le rang
        courant = courant->suivant ; // on avance de 1 élément
    }

    if(courant == NULL) // si la valeur n'a pas été trouvée on renvoit -1
    {
        return -1 ;
    }
    return i  ;
}

void vider(liste* l){

    liste* tmpSuppr = l ;

    while(l!=NULL)
    {
        tmpSuppr = l ; //l'élément qui va être supprimé
        l = l->suivant ; //on avance le pointeur pour sortir le premier élément de la liste

        free(tmpSuppr); // on libère la mémoire de l'élément à supprimer
    }

}

void initialiser(liste* l , int entier){
    l->valeur = entier; //remplir le premier élément de la liste
    l->suivant = NULL ; // le premier élément à pour suivant NULL
}
