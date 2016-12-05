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
#include "interaction.h"

using namespace std;

void delay(int sec)
{
    long pause(0);
    clock_t now,then;

    pause=sec*(CLOCKS_PER_SEC/100);
    now=then=clock();
    while((now-then)<pause)
    {
        now=clock();
    }
}

//*******************************************************

void transition()
{
    clrscr();
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    couleur("5");couleur("37");
    cout<<"\t\t\tTAPEZ LA TOUCHE < ENTER > POUR CONTINUER"<<endl;
    couleur("0");couleur("0");
    cin.get();cin.get();
}

//*******************************************************

void presentation()
{
    clrscr();
    cout<<endl<<endl<<endl;
    couleur("32");
    cout<<"\t\t\tWELCOME TO NSAK@ GAME V1.0"<<endl<<endl;
    delay(200);
    cout<<"\t\tCOPYRIGHT © VDsoft ENTREPRISE"<<endl<<endl;
    delay(200);
    cout<<"\t\tby rivelnet BP:2263 Libreville GABON"<<endl<<endl;
    delay(200);
    cout<<"\t\trivelnet@yahoo.fr/(+241)04104877/02222937"<<endl<<endl<<endl;
    delay(200);couleur("39");
    cout<<"\t\tPRESENTATION DU JEU TERMINER";
    delay(250);
    couleur("0");couleur("0");
    transition();
}

//********************************************************

void principe(int x)
{
    clrscr();
    if(x==1) //jouer avec l'ordinateur
    {
        cout<<endl<<endl<<endl;
        couleur("38");
        cout<<"\t\tVOUS VOULEZ JOUER AVEC L'ORDINATEUR"<<endl<<endl;
        delay(200);
        cout<<"\tEN EFFET,CE DERNIER CHOISIRA AU HASARD UN ENTIER POSITIF"<<endl<<endl;
        delay(200);
        cout<<"\tDANS UNE INTERVALLE LIMITEE SUIVANT LE NIVEAU DU JEU ET"<<endl<<endl;
        delay(200);
        cout<<"\tVOUS DEMANDERA DE LE DEVINER.VOUS AVEZ 5 ESSAIS POUR DEVINER"<<endl<<endl;
        delay(200);
        cout<<"\tET A CHAQUE ESSAI,IL VOUS DIRA SI LE NOMBRE DEVINE EST SOIT"<<endl<<endl;
        delay(200);
        cout<<"\tTROP PETIT,SOIT TROP GRAND PAR RAPPORT AU NOMBRE A DEVINER"<<endl<<endl;
        delay(200);couleur("34");
        cout<<"\n\t\tBONNE CHANCE !!";
        delay(250);
        couleur("0");couleur("0");
    }
    else if(x==2) //jouer avec un(e) ami(e)
    {
        cout<<endl<<endl<<endl;
        couleur("38");
        cout<<"\t\tVOUS VOULEZ JOUER AVEC VOTRE AMI(E)"<<endl<<endl;
        delay(200);
        cout<<"\tEN EFFET,CE DERNIER CHOISIRA AU HASARD UN ENTIER POSITIF"<<endl<<endl;
        delay(200);
        cout<<"\tDANS UNE INTERVALLE LIMITEE SUIVANT LE NIVEAU DU JEU ET"<<endl<<endl;
        delay(200);
        cout<<"\tVOUS DEMANDERA DE LE DEVINER.VOUS AVEZ 5 ESSAIS POUR DEVINER"<<endl<<endl;
        delay(200);
        cout<<"\tET A CHAQUE ESSAI,L'ORDINATEUR VOUS DIRA SI LE NOMBRE DEVINE EST"<<endl<<endl;
        delay(200);
        cout<<"\tSOIT TROP PETIT,SOIT TROP GRAND PAR RAPPORT AU NOMBRE A DEVINER"<<endl<<endl;
        delay(200);couleur("34");
        cout<<"\n\t\tBONNE CHANCE !!";
        delay(205);
        couleur("0");couleur("0");
    }

}

//*************************************************************************

void principe(char x)
{
    clrscr();
    if(x=='a') //jouer avec l'ordinateur
    {
        cout<<endl<<endl<<endl;
        couleur("38");
        cout<<"\t\tVOUS VOULEZ JOUER AVEC L'ORDINATEUR"<<endl<<endl;
        delay(200);
        cout<<"\tEN EFFET,CE DERNIER CHOISIRA AU HASARD UN MOT FRANCAIS"<<endl<<endl;
        delay(200);
        cout<<"\tDANS LE DICTIONNAIRE PUIS BOULVERSERA LES LETTRES DE CE MOT"<<endl<<endl;
        delay(200);
        cout<<"\tET VOUS DEMANDERA DE LE DEVINER A PARTIR DES LETTRES BOULVERSEES."<<endl<<endl;
        delay(200);
        cout<<"\tVOUS AVEZ 5 ESSAIS POUR LE RETROUVER."<<endl<<endl;
        delay(200);couleur("34");
        cout<<"\n\t\tBONNE CHANCE !!";
        delay(250);
        couleur("0");couleur("0");
    }
    else if(x=='b') //jouer avec un(e) ami(e)
    {
        cout<<endl<<endl<<endl;
        couleur("38");
        cout<<"\t\tVOUS VOULEZ JOUER AVEC VOTRE AMI(E)"<<endl<<endl;
        delay(200);
        cout<<"\tEN EFFET,CE DERNIER CHOISIRA AU HASARD UN MOT FRANCAIS"<<endl<<endl;
        delay(200);
        cout<<"\tDANS LE DICTIONNAIRE.L'ORDINATEUR BOULVERSERA LES LETTRES DE CE MOT"<<endl<<endl;
        delay(200);
        cout<<"\tET VOUS DEMANDERA DE LE DEVINER A PARTIR DES LETTRES BOULVERSEES."<<endl<<endl;
        delay(200);
        cout<<"\tVOUS AVEZ 5 ESSAIS POUR LE RETROUVER."<<endl<<endl;
        delay(100);couleur("34");
        cout<<"\n\t\tBONNE CHANCE !!";
        delay(250);
        couleur("0");couleur("0");
    }
}
//**********************************************************************

void newLevel(int n,int min,int max) //cas du jeu de nombres I=[min;max[
{
    clrscr();
    cout<<endl<<endl<<endl;
    couleur("5");couleur("35");
    cout<<"\t\t\tWELCOME TO LEVEL "<<n<<endl<<endl;
    couleur("0");couleur("0");
    delay(100);
    cout<<"\t\tICI,LE NOMBRE EST COMPRI ENTRE "<<min<<" et "<<max<<" :I=["<<min<<" ; "<<max<<"[";
    cout<<endl<<endl;
    delay(100);couleur("5");couleur("35");
    cout<<"\t\tBONNE CHANCE !!!"<<endl;
    couleur("0");couleur("0");
    delay(250);
}
//**************************************************************************
void newLevel(int n,int x) //cas du jeu de mot
{
    clrscr();
    cout<<endl<<endl<<endl;
    couleur("5");couleur("35");
    cout<<"\t\t\tWELCOME TO LEVEL "<<n<<endl<<endl;
    delay(100);
    couleur("0");couleur("0");
    cout<<"\t\tICI,LE NOMBRE D'ESSAIS EST: "<<x<<" DONC VOUS AVEZ JUSTE "<<x<<" CHANCES";
    cout<<endl<<endl;
    delay(100);
    cout<<"\t\tBONNE CHANCE !!!"<<endl;
    delay(250);
}
//**************************************************************************

void cadrer(string &op1,string &op2,string &op3,string &op4,string op5)
{
    cout<<endl<<endl<<endl<<endl<<"\t\t\t\t";
    for(int i(0);i<33;i++)
    {
        couleur("44");
        cout<<"-";
        couleur("0");
    }
    cout<<"\n\t\t\t\t"; couleur("44");cout<<"|"; couleur("0");
    cout<<"\t\t\t\t";   couleur("44");cout<<"|"; couleur("0");
    cout<<"\n\t\t\t\t"; couleur("44");cout<<"|"; couleur("0");
    cout<<"\t";

    for(unsigned int i(0);i<op1.size();i++)
    {
        couleur("32");
        cout<<op1[i];
        couleur("0");
    }

    cout<<"\t\t";  couleur("44");cout<<"|"; couleur("0");
    cout<<"\n\t\t\t\t"; couleur("44");cout<<"|"; couleur("0");
    cout<<"\t\t\t\t";   couleur("44");cout<<"|"; couleur("0");
    cout<<"\n\t\t";
    for(int i(0);i<65;i++)
    {
        couleur("44");
        cout<<"-";
        couleur("0");
    }
    cout<<"\n\t\t"; couleur("44");cout<<"|"; couleur("0");
    cout<<"\t\t\t\t\t\t\t\t";   couleur("44");cout<<"|"; couleur("0");
    cout<<"\n\t\t"; couleur("44");cout<<"|"; couleur("0");
    cout<<"\t\t1 => ";

    for(unsigned int i(0);i<op2.size();i++)
    {
        couleur("32");
        cout<<op2[i];
        couleur("0");
    }

    cout<<"\t\t\t";  couleur("44");cout<<"|"; couleur("0");
    cout<<"\n\t\t"; couleur("44");cout<<"|"; couleur("0");
    cout<<"\t\t\t\t\t\t\t\t";   couleur("44");cout<<"|"; couleur("0");
    cout<<"\n\t\t"; couleur("44");cout<<"|"; couleur("0");
    cout<<"\t\t2 => ";

    for(unsigned int i(0);i<op3.size();i++)
    {
        couleur("32");
        cout<<op3[i];
        couleur("0");
    }

    cout<<"\t\t\t";  couleur("44");cout<<"|"; couleur("0");
    cout<<"\n\t\t"; couleur("44");cout<<"|"; couleur("0");
    cout<<"\t\t\t\t\t\t\t\t";   couleur("44");cout<<"|"; couleur("0");
    cout<<"\n\t\t"; couleur("44");cout<<"|"; couleur("0");
    cout<<"\t\t3 => ";

    for(unsigned int i(0);i<op4.size();i++)
    {
        couleur("32");
        cout<<op4[i];
        couleur("0");
    }

    cout<<"\t\t\t";  couleur("44");cout<<"|"; couleur("0");
    cout<<"\n\t\t"; couleur("44");cout<<"|"; couleur("0");
    cout<<"\t\t\t\t\t\t\t\t";   couleur("44");cout<<"|"; couleur("0");
    cout<<"\n\t\t"; couleur("44");cout<<"|"; couleur("0");
    cout<<"\t\t4 => ";

    for(unsigned int i(0);i<op5.size();i++)
    {
        couleur("32");
        cout<<op5[i];
        couleur("0");
    }

    cout<<"\t\t\t\t";  couleur("44");cout<<"|"; couleur("0");
    cout<<"\n\t\t"; couleur("44");cout<<"|"; couleur("0");
    cout<<"\t\t\t\t\t\t\t\t";   couleur("44");cout<<"|"; couleur("0");
    cout<<"\n\t\t";
    for(int i(0);i<65;i++)
    {
        couleur("44");
        cout<<"-";
        couleur("0");
    }
    cout<<endl;

}
//***********************************************************

char menuPrincipal()
{
    char choix(0);
    string op1("MENU PRINCIPAL");//14 caracteres
    string op2("A PROPOS DU JEU        ");//23 caracteres
    string op3("JEU DE NOMBRES         ");// -//-
    string op4("JEU DE MOTS             ");//24 caracteres
    string op5("QUITTER LE JEU");

    clrscr();
    cadrer(op1,op2,op3,op4,op5);
    cout<<endl<<endl;
    couleur("5");
    cout<<"\t\tVOTRE CHOIX : ";
    couleur("0");
    cin>>choix;
    choix=controleChoix(choix);
    return choix;
}

//***********************************************************************

char menuNombre()
{
    char choix(0);
    string op1(" MENU NOMBRES ");//14 caracteres
    string op2("JOUER AVEC L'ORDINATEUR");//23 caracteres
    string op3("JOUER AVEC UN(E) AMI(E)");// -//-
    string op4("RETOUR AU MENU PRINCIPAL");//24 caracteres
    string op5("QUITTER LE JEU");

    clrscr();
    cadrer(op1,op2,op3,op4,op5);
    cout<<endl<<endl;
    couleur("5");
    cout<<"\t\tVOTRE CHOIX : ";
    couleur("0");
    cin>>choix;
    choix=controleChoix(choix);
    return choix;
}

//**************************************************************************

char menuMots()
{
    char choix(0);
    string op1("   MENU MOTS  ");//14 caracteres
    string op2("JOUER AVEC L'ORDINATEUR");//23 caracteres
    string op3("JOUER AVEC UN(E) AMI(E)");// -//-
    string op4("RETOUR AU MENU PRINCIPAL");//24 caracteres
    string op5("QUITTER LE JEU");//14

    clrscr();
    cadrer(op1,op2,op3,op4,op5);
    cout<<endl<<endl;
    couleur("5");
    cout<<"\t\tVOTRE CHOIX : ";
    couleur("0");
    cin>>choix;
    choix=controleChoix(choix);
    return choix;
}

//****************************************************************************

char menuNiveau()
{
    char choix(0);
    string op1("  MENU NIVEAU ");//14 caracteres
    string op2("RESTER AU NIVEAU  1    ");//23 caracteres
    string op3("PASSER AU NIVEAU  2    ");// -//-
    string op4("PASSER AU NIVEAU  3     ");//24 caracteres
    string op5("    SORTIR    ");//14

    clrscr();
    cadrer(op1,op2,op3,op4,op5);
    cout<<endl<<endl;
    couleur("5");
    cout<<"\t\tVOTRE CHOIX : ";
    couleur("0");
    cin>>choix;
    choix=controleChoix(choix);
    return choix;
}

//*******************************************************************************

char controleChoix(char &choix)
{
    while(choix != '1' && choix != '2' && choix != '3' && choix != '4')
    {
        couleur("36");
        cout<<"\n\n\t\tDELOSE! TAPEZ <1> OU <2> OU <3> OU <4> : ";
        couleur("0");
        cin>>choix;
    }
    return choix;
}

//********************************* the end **********************************


