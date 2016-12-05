/***************************************************/
/*                                                 */
/*        Nsak@ game V1.0                          */
/*        copyright © rivelnet                     */
/*        by rivelnet / rivelbab@gmail.com         */
/*        BP:2263 Libreville Gabon                 */
/*        Tel: (+241)04104877/02222937             */
/*        Update made by myself on 5 dec 2016      */
/*        at pierrefitte sur seine/France          */
/*                                                 */
/***************************************************/


#include <iostream>
#include "interaction.h"
#include "traitement.h"

using namespace std;

int main()
{
    char choixMenu(0);//choix des optins du menu principal

    choixMenu = menuPrincipal();

    do
    {
        if(choixMenu == '1') //presentation du jeu
        {
            presentation();
            choixMenu = menuPrincipal();
        }
        else if(choixMenu == '2') //jeu de nombre
        {
            transition();
            char choixNombre(0);//choix des options du menu nombre

            choixNombre = menuNombre();

            do
            {
                if(choixNombre == '1') //jouer avec l'ordinateur
                {
                    ordiGame1();
                    choixNombre = menuNombre();
                }
                else if(choixNombre == '2') //jouer avec un ami
                {
                    friendGame1();
                    choixNombre = menuNombre();
                }
                else if(choixNombre == '3') //retour au menu principal
                {
                    choixNombre = '4';
                }
                else if(choixNombre == '4') //quitter le jeu
                {
                    exit(0);
                }

            }
            while (choixNombre != '4');

            choixMenu = menuPrincipal();
        }
        else if(choixMenu == '3') //jeu de mot
        {
            char choixMot(0);//choix des options du menu Mot
            transition();
            choixMot = menuMots();

            do
            {
                if(choixMot == '1') //jouer avec l'ordinateur
                {
                    ordiGame2();
                    choixMot = menuMots();
                }
                else if(choixMot == '2') //jouer avec un ami
                {
                    friendGame2();
                    choixMot = menuMots();
                }
                else if(choixMot == '3') //retour au menu principal
                {
                    choixMot = '4';
                }
                else if(choixMot == '4') //quitter le jeu
                {
                    exit(0);
                }

            }
            while (choixMot != '4');

            choixMenu = menuPrincipal();
        }
        else if(choixMenu == '4') //quitter le jeu
        {
            exit(0);
        }

    }
    while (choixMenu != '4');

    cin.get();
    return 0;
}

