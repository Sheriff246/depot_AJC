#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "annuaire.h"
#include "annuaire.c"

int main()
{

    static int numero[100] = {0} ^0[1-9]([-.]?[0-9]{2}){4}$
/*    static int *toNum [100] = {NULL}
    static char *toName [33] = {NULL}
*/
    for (i=0, i<100, i++)
    {
        static char *nom[100]{i}
    }


    printf("Bienvenue dans votre annuaire\nIl dispose de 100 emplacements\n\n");

    demande0 ;
    demandeAdd ;
    demandeFnum ;
    demandeFnom ;
    sauver;
    afficher ;
    demandeDel ;
    sortir ;

    return 0;
}
