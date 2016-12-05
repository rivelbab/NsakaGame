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
#include "traitement.h"

using namespace std;

int controleSaisi(int & nbr,int const min,int const max)
{
    while(nbr < min || nbr >= max)
    {
        cout<<"\n\n\tUN NOMBRE ENTRE [ "<<min<<" ; "<<max<<" [ SVP : ";
        cin>>nbr;
    }
    return nbr;
}


//********************************************************************

void comparaison(int &nbr1,int const nbr2,int const min,int const max)
{
    int essais(1);
    while(essais <= 5) // tant qu'on a pas encore jouer nos 5 essais
    {
        if(nbr1 == nbr2) //nbr saisi egal a nbr choisi
        {
            delay(50);
            cout<<"\n\n\tVOUS AVEZ REUSSI !! < "<<nbr2<<" > EST BIEN LE NOMBRE EXACT";
            cout<<endl<<endl;
            essais = 6;//provoque la sortie prematuree du boucle
        }
        else if(nbr1 < nbr2)
        {
            delay(25);
            cout<<"\n\n\tDESOLE !! C'EST TROP PETIT. ESSAIS "<<essais<<" : ";
            cin>>nbr1;
            nbr1 = controleSaisi(nbr1,min,max);
        }
        else if(nbr1 > nbr2)
        {
            delay(25);
            cout<<"\n\n\tDESOLE !! C'EST TROP GRAND. ESSAIS "<<essais<<" : ";
            cin>>nbr1;
            nbr1 = controleSaisi(nbr1,min,max);
        }
        essais ++ ; //passage a l'essai suivant

    }
    delay(50);
    cout<<"\n\n\tEN EFFET, ";couleur("33");
    cout<<nbr2;couleur("0");
    cout<<" ETAIT BIEN LE NOMBRE EXACT. AU REVOIR!!"<<endl;
    delay(250);
}

//****************************************************************************

void ordiGame1()
{
    //initialisation du nombre aleatoire
    srand(time(NULL));
    int nbrOrdi(0),nbrSaisi(0);int x(1);


    //principe du jeu
    principe(x);
    transition();

    int niveau(1), min(1), max(50);
    bool ok(false);

    do
    {
        newLevel(niveau,min,max);
        transition();
        //generation du nombre aleatoire
        nbrOrdi =(rand() % (max - min +1) + min); //nbrOrdi appartient a I=[min;max[

        //demande de saisie du nombre devine
        clrscr();
        cout<<"\n\n\n\n\tBONJOUR! L'ORDINATEUR A DEJA FAIT SON CHOIX, ALORS A VOUS DE LE DEVINER";
        delay(50);
        cout<<"\n\n\tVEILLEZ SAISIR ICI : ";
        cin>>nbrSaisi;
        nbrSaisi = controleSaisi(nbrSaisi,min,max);

        comparaison(nbrSaisi,nbrOrdi,min,max);

        char choix =menuNiveau();
        if(choix == '1')
        {
            niveau=1;min=1;max=50;ok=false;
        }
        else if(choix == '2')
        {
            niveau = 2;min=1;max=100;ok=false;
        }
        else if(choix == '3')
        {
           niveau = 3;min=1;max=150;ok=false;
        }
        else if(choix == '4')
        {
            ok=true;

        }

    }
    while( ok == false );

}

//**************************************************************************

void friendGame1()
{

    int nbrPlayer1(0),nbrPlayer2(0),x(2);
    string nomPlayer1(" "),nomPlayer2(" ");

    //principe du jeu
    principe(x);
    transition();

    int niveau(1), min(1), max(50);
    bool ok(false);


    //enregistrement des joueurs
    clrscr();
    cout<<"\n\n\n\tBONJOUR! VEILLEZ VOUS IDENTIFIER SVP";
    delay(25);
    cout<<"\n\n\n\tJOUEUR 1 ,VOTRE NOM : ";
    getline(cin,nomPlayer1);
    delay(25);
    cout<<"\n\n\tJOUEUR 2 ,VOTRE NOM : ";
    getline(cin,nomPlayer2);
    delay(50);
    cout<<"\n\n\n\tIDENTIFICATION TERMINER! MERCI"<<endl;
    delay(250);
    clrscr();

    do
    {
        newLevel(niveau,min,max);
        transition();
        //demande du nombre a deviner au joueur 1
        cout<<"\n\n\n\tBONJOUR  ";
        couleur("36");
        cout<<nomPlayer1;
        couleur("0");
        cout<<"\n\n\n\tVEILLEZ CHOISIR VOTRE NOMBRE : ";
        cin>>nbrPlayer1;
        nbrPlayer1 = controleSaisi(nbrPlayer1,min,max);
        delay(50);
        cout<<"\n\n\tNOMBRE ENREGISTRER !!";
        delay(250);
        clrscr();

        //demande de saisi du nombre devine au joueur 2
        cout<<"\n\n\n\tBONJOUR  ";
        couleur("32");
        cout<<nomPlayer2;
        couleur("0");couleur("33");
        cout<<"\n\n\t"<<nomPlayer1;
        couleur("0");
        cout<<"  A DEJA CHOISI SON NOMBRE,ALORS A VOUS DE LE DEVINER.";
        delay(50);
        cout<<"\n\n\tTAPEZ VOTRE NOMBRE ICI : ";
        cin>>nbrPlayer2;
        nbrPlayer2 = controleSaisi(nbrPlayer2,min,max);

        comparaison(nbrPlayer2,nbrPlayer1,min,max);


        char choix =menuNiveau();
        if(choix == '1')
        {
            niveau=1;min=1;max=50;ok=false;
        }
        else if(choix == '2')
        {
            niveau = 2;min=1;max=100;ok=false;
        }
        else if(choix == '3')
        {
           niveau = 3;min=1;max=150;ok=false;
        }
        else if(choix == '4')
        {
            ok=true;

        }
    }
    while( ok == false);

}

//**********************************************************************

string melanger(string mot) //extrait m@teo21
{
    string melange;
    int pos(0);

    //tant qu'on a pas extrait toutes les lettres du mot
    while(mot.size() != 0)
    {
        //on choisit une lettre au hasard
        pos = rand() % mot.size();
        //on ajoute la lette dans melange
        melange += mot[pos];
        //on retir cette lettre du mot pour ne pas la prendre de nouveau
        mot.erase(pos,1);
    }
    //on renvoie le mot melanger
    return melange;
}

//*********************************************************************

void comparaison(int n, string mot1,string const mot2)
{
    int essais(1);

    while(essais <= n)
    {
        if(mot1 == mot2)
        {
            delay(50);
            cout<<"\n\n\tVOUS AVEZ REUSSI! ";
            couleur("34");
            cout<<mot2;
            couleur("0");
            cout<<" EST LE MOT EXACT! BRAVO !!"<<endl;
            essais=5;
        }
        else if(mot1 != mot2)
        {
            delay(25);
            cout<<"\n\n\tDESOLE! CE N'EST PAS LE MOT EXACT. ESSAIS "<<essais<<" : ";
            cin>>mot1;
        }
        essais++ ; //passage a l'essai suivant
    }

    delay(100);
    cout<<"\n\n\tEN EFFET, ";couleur("33");
    cout<<mot2;couleur("0");
    cout<<" ETAIT BIEN LE MOT EXACT. AU REVOIR!!"<<endl;
    delay(250);

}

//*********************************************************************

void ordiGame2()
{
    //initialisation des nombres aleatoires
    srand(time(NULL));

    string motOrdi,motSaisi,motMelanger;
    char p('a');

    //principe du jeu
    principe(p);
    transition();

    int n(5),x(5),k(1);
    bool ok(false);

    //choix du mot dans le fichier mot.txt
    ifstream monFichier("/home/rivelnet/projets/Nsaka_game/mot.txt");

    do
    {
        newLevel(k,x);
        transition();
        if(monFichier) //si la lecture reussie
        {
            //lecture du mot dans le fichier
            monFichier>>motOrdi;
        }
        else
        {
            cout<<"\n\n\n\tDESOLE!! IL Y A UNE ERREUR D'OUERTURE DE DICOCTIONNAIRE\n";
            delay(200);
        }

        //melange du mot lu dans le fichier mot.txt
        motMelanger = melanger(motOrdi);

        //presentation des lettres melangees et demande du mot exact
        clrscr();
        cout<<"\n\n\n\tBONJOUR! L'ORDINATEUR A DEJA CHOISI UN MOT DANS LE DICTIONNAIRE.";
        delay(50);
        cout<<"\n\n\tVOICI LES LETTRES DE CE MOT EN DESORDRE : ";
        couleur("36");
        for(unsigned int i(0);i< motMelanger.size();i++)
        {
            cout<<motMelanger[i]<<" ";
            delay(25);
        }
        couleur("0");
        delay(50);
        cout<<"\n\n\n\tDE QUEL MOT S'AGIT T-IL? : ";
        cin>>motSaisi;

        //comparaison des mots
        comparaison(n,motSaisi,motOrdi);

        char choix =menuNiveau();
        if(choix == '1')
        {
            n=5;k=1;x=5;ok=false;
        }
        else if(choix == '2')
        {
            n = 3;k=2; x=3; ok=false;
        }
        else if(choix == '3')
        {
           n = 2;k=3;x=2;ok=false;
        }
        else if(choix == '4')
        {
            ok=true;

        }

    }
    while(ok==false);
}

//********************************************************************

void friendGame2()
{
    //initialisation des nombres aleatoires
    srand(time(NULL));

    string nomPlayer1,nomPlayer2;
    string motPlayer1,motPlayer2,motMelanger;

    char p('b');

    //principe du jeu
    principe(p);
    transition();

    int n(5),x(5),k(1);
    bool ok(false);


    //enregistrement des joueurs
    clrscr();
    cout<<"\n\n\n\tBONJOUR! VEILLEZ VOUS IDENTIFIER SVP";
    delay(100);
    cout<<"\n\n\tJOUEUR 1 ,VOTRE NOM : ";
    getline(cin,nomPlayer1);
    delay(50);
    cout<<"\n\n\tJOUEUR 2 ,VOTRE NOM : ";
    getline(cin,nomPlayer2);
    delay(50);
    cout<<"\n\n\n\tIDENTIFICATION TERMINER !! MERCI.";
    delay(250);
    clrscr();

    do
    {
        newLevel(k,x);
        transition();

        //demande du mot a deviner au joueur 1
        delay(50);
        cout<<"\n\n\tBONJOUR  ";
        couleur("36");
        cout<<nomPlayer1;
        couleur("0");
        delay(50);
        cout<<"\n\n\n\tVEILLEZ CHOISIR VOTRE MOT : ";
        cin>>motPlayer1;
        delay(100);
        cout<<"\n\n\tMOT ENREGISTRER !! MERCI.";
        delay(250);
        clrscr();

        //melanger les lettres du motPlayer1
        motMelanger = melanger(motPlayer1);

        //demande de saisi du mot devine au joueur 2
        delay(50);
        cout<<"\n\n\n\tBONJOUR  ";
        couleur("32");
        cout<<nomPlayer2;
        couleur("0");couleur("33");
        cout<<"\n\n\t"<<nomPlayer1;
        couleur("0");
        cout<<"  A DEJA CHOISI SON MOT,ALORS A VOUS DE LE DEVINER.";
        delay(50);
        cout<<"\n\n\tVOICI LES LETTRES DE CE MOT EN DESORDRE : ";
        couleur("36");
        for(unsigned int i(0);i< motMelanger.size();i++)
        {
            cout<<motMelanger[i]<<" ";
            delay(25);
        }
        couleur("0");
        delay(50);
        cout<<"\n\n\n\tDE QUEL MOT S'AGIT T-IL? : ";
        cin>>motPlayer2;

        //comparaison des mots
        comparaison(n,motPlayer2,motPlayer1);

        char choix =menuNiveau();
        if(choix == '1')
        {
            n=5;k=1;x=5;ok=false;
        }
        else if(choix == '2')
        {
            n = 3;k=2; x=3; ok=false;
        }
        else if(choix == '3')
        {
           n = 2;k=3;x=2;ok=false;
        }
        else if(choix == '4')
        {
            ok=true;

        }

    }
    while (ok == false);


}

//*****************************************the end **********************

















