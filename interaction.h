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

#ifndef INTERACTION_H
#define INTERACTION_H

//inclusuin des bibliotheques standard
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>

using namespace std;

//changer la couleur de police et de fond,clignoter le text
#define couleur(cod)    printf("\033[%sm",cod)

//netoyer l'ecran de la console
#define  clrscr()      printf("\033[H\033[2J")

//faire une pause de n seconde
void  delay(int n);

//demande de taper la touche ENTER pour continuer
void transition();

//presenter le jeu en general
void presentation();

//expliquer le principe du jeu pour le jeu de nombres
void principe(int x);

//surchage de la procedure pour le jeu de mots
void principe( char x);

//presenter le niveau superieur:les changements pour le jeu de nombres
void newLevel(int n,int min,int max);

//surgarge pour le jeu de mots
void newLevel(int n,int x);

//encadrement des menu,prends les options du menu en parametres
void cadrer(string & op1,string & op2,string & op3,string & op4,string op5=" ");

//affiche le menu principal et renvoie le choix du user
char menuPrincipal();

//affiche le menu du jeu des nombres et renvoie le choix du user
char menuNombre();

//affiche le menu du jeu des mots et renvoie le choix du user
char menuMots();

//affiche le menu de changement de niveau et renvoie le choix du user
char menuNiveau();

//controler le choix du user
char controleChoix(char & choix);

#endif//INTERACTION_H

//**********************************the end***********************
