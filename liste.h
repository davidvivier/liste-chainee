
#ifndef TP_LISTE1_LISTE_H
#define TP_LISTE1_LISTE_H

#include <stdio.h>
#include <stdlib.h>


typedef struct _liste liste;

struct _liste {
	int valeur;
	liste *suivant;
};

void afficher(liste *l);

liste* ajoute_fin(liste *l, int entier);

liste* ajoute_debut(liste *l, int entier);

liste* ajoute_position(liste *l, int entier, unsigned int position);

liste* remplir(liste *l, int tab[], unsigned int nb);

int rechercher(liste* l , int entier);

void vider(liste* l);

void initialiser(liste* l , int entier);


#endif //TP_LISTE1_LISTE_H
