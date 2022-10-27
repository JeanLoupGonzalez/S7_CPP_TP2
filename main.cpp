//
// Created by Jean Loup on 18/10/2022.
//
#include <iostream>

using namespace std;

#include "Entree.h"
#include "Tableau.h"
#include "Agenda.h"
//ok


int main() {
    Entree entree1("Jacob", "06666666");
    Entree entree2("viktor", "35");
    Entree entree3("Raoul", "6665988952");
    Entree entree4("hulk", "89989");
/*
    //TEST TABLEAU
    //creation tableau de taille 3
    Tableau tab(3);
    //on ajoute 4 entrees pour tester la proctection
    tab.ajouter("Jacob","2");
    tab.ajouter("Robert","15");
    tab.ajouter("Arielle","4855");
    //affichage des elements du tableau
    tab.display();
    cout<<"\n"<<endl;
    //depasse la taille limite
    tab.ajouter("IGOR","35");
    //demande de suppression a 1 param erroné
    tab.supprimer("arnaud");
    tab.display();
    cout<<"\n"<<endl;
    //demande de suppression a 2 params dont 1 seul erroné
    tab.supprimer("arnaud","35");
    tab.display();
    cout<<"\n"<<endl;

    //suppression d'elements du tableau avec 2 params
    tab.supprimer("Raoul","6665988952");
    tab.display();
    cout<<"\n"<<endl;
    //suppression d'elements du tableau avec 1 param
    tab.supprimer("Jacob");
    tab.display();
    cout<<"\n"<<endl;
    //suppression du dernier element
    tab.supprimer("viktor");
    tab.display();
    cout<<"\n"<<endl;
    //suppression sur un tableau vide
    tab.supprimer("viktor");
    cout<<"\n"<<endl;
    //rajoute des entrees
    tab.ajouter("Luc","18");
    tab.ajouter("Michel","0658956");
    tab.ajouter("Gunter","01");
    tab.display();
    cout<<"\n"<<endl;

    //test constructeur copie
    cout<<"test constructeur copie"<<endl;
    Tableau copieTab(tab);
    copieTab.display();

    Tableau tab1(10);
    Tableau tab2(10);
    tab1.ajouter("zorro","54654");
    tab1.ajouter("lea","89");
    tab2.ajouter("babar","21");
    tab2.ajouter("Nieztzsche","999");*/

    Agenda agenda1(5);
    Agenda agenda2(8);
    agenda1.ajouter("arno", "33");
    agenda1.ajouter("luc", "974");
    agenda2.ajouter("Lharhissssa", "99999999");
    agenda2.ajouter("robert", "2");
    cout << "\n" << endl;
    cout << "agenda1 :" << endl;
    agenda1.display();
    cout << "\n" << endl;
    cout << "agenda2 :" << endl;
    agenda2.display();
    cout << "\n" << endl;
    agenda1.concat(agenda2);
    cout << "agenda1 concaténé:" << endl;
    agenda1.display();

    cout << "\nsupprime 1 entree d angenda 1 par nom inexsitant:" << endl;
    agenda1.supprimer("jack");

    agenda1.display();
    cout << "\nsupprime 1 entree d angenda 1 par nom valide: (luc)" << endl;
    agenda1.supprimer("luc");
    agenda1.display();

    cout << "\nsupprime 1 entree d angenda par nom + numero valides : (arno 33)" << endl;
    agenda1.supprimer("arno", "33");
    agenda1.display();

    cout << "\nsupprime 1 entree d angenda par nom + numero inexistants :" << endl;
    agenda1.supprimer("watakushi", "33");
    agenda1.display();

    cout << "\ncopie + affichage de agenda 1 dans nouvel agenda 3" << endl;
    Agenda agenda3(agenda1);
    agenda3.display();

    return 0;
}

