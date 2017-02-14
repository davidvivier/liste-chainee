/************************************************************************/
/*** VIVIER David													    */
/*** VARAGNAT Kévin													    */
/*** 13/02/2017											                */
/*** Programme qui représente le jeu de "La patate chaude"      	    */
/*** Exécuter ./liste pour utiliser le programme 					    */
/*** Exécuter "make clean" pour nettoyer							    */
/*** Le fichier perdants contient la liste des perdants en championnat	*/
/*** Le fichier tri.sh affiche la liste des perdants triée          	*/
/************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "liste.h"


int main(void)
{

    liste maListe ;
    int valeur = 5 ;

    initialiser(&maListe , valeur);

    return  0;
}