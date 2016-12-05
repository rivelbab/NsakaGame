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
#ifndef TRAITEMENT_H
#define TRAITEMENT_H

#include "interaction.h"

//nombre d'essais pour le jeu de nombre

//controle du nombre saisie
int controleSaisi(int & nbr,int const min,int const max);

//compare le nombre a devine au nombre devibe
void comparaison(int &nbr1,int const nbr2,int const min,int const  max);

//compare le mot a devine au mot devine
void comparaison(int n,string mot1, string const mot2);

//cas du jeu de nombres avec ordinateur
void ordiGame1();

//cas du jeu de nombres avec un(e) ami(e)
void friendGame1();

//melanger les lettres du mot choisit
string melanger(string mot);

//cas du jeu de mot avec l'ordinateur: surcharge
void ordiGame2();//n=nbr d'essai

//cas du jeu de mot avec un(e) ami(e):surcharge
void friendGame2();//n=nbr d'essais

#endif //TRAITEMENT_H


//**********************************the end***********************
