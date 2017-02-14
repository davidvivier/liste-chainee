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

    ajoute_fin(maListe, 6);

    afficher(maListe);

    ajoute_debut(maListe, 4);

    return  0;
}