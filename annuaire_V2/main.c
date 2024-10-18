#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//decrire les fonctions avec leurs variables et leurs actions/fonctions

struct contact
{
    char nom[50];
    int numero[10] = {0} ^0[1-9]([-.]?[0-9]{2}){4}$;
};


void demande0()
    {
        int reponse0 =9
        printf("Que voulez vous faire?\n");
        printf("Entrez le numero correspondant\n");
        printf("\t1. Ajouter un contact\n");
        printf("\t2. Chercher un numero avec un nom\n");
        printf("\t3. Chercher un nom avec un numéro de telephone")
        printf("\t4. Supprimer un contact\n");
        printf("\t0. Sortir d'ici");
        scanf ("%d", &reponse0);

    }



void demandeAdd()
{
    if (reponse0 = 1)
        printf ("entrez le nom de votre contact");
        scanf("%[^\n]",toupper("%s".nom, i));
        printf ("entrez son numero de telephone, sans espaces");
        scanf ("%d".numero)
        int i =0 ;
        int find0 = *numero[i];
        for (i=0 ; find0 !=0 ; i++)
        {
            scanf("%d", numero[i]);
        }

       /* strcat ('nom', %d, i);inutile avec les tableaux de pointeurs
        strcat (nom, %d, i);*/
}


void damandeFnum()
{
    if reponse0=2
        char toFnum ;

        if toFnum = numero
    printf("voici le qui a le numéro %d : %s",);

}


void damandeFnom()
{
    if reponse0=3
        char toFnom ;

        if toFnom == nom
    printf("voici le numéro de %s : %d",toFnom);

}

void demandeDel()
{
    if reponse0=4
    char toDel;
  printf("qui voulez vous supprimer de vos contacts");
  scanf("%[^\n]", toDel);
  if toDel == nom


  numero =0
  nom=NULL
}


int Sortir ()
    {   else if (reponse0 =0)
            return 9 ;
    }
int main
{
    int i =1 ;
    struct contact i;
    static int toName [100] = {NULL};   //pointeures à 0 qui cherchent un nom
    static char nom[50];  // limité à 50

    printf("Bienvenue dans votre annuaire\nIl dispose de 100 emplacements\n\n");

    demande0;
    demandeAdd;
    demandeDel;
    demandeFnum;
    demandeFnom;
    Sortir;


    return 0;
}
