//
// Created by Jean Loup on 18/10/2022.
//

#ifndef S7_CPP_TP1_TABLEAU_H
#define S7_CPP_TP1_TABLEAU_H

#include "Entree.h"

class Tableau {
    int tailleTotaleTableau;
    int nbElem;
    Entree *val; //pointe vers une entree de type Entree du tableau
    friend class Agenda;

public:
    void display();

    void ajouter(string nom, string num);

    void supprimer(string nom, string numero);

    void supprimer(string nom);

    int getTailleTotaleTableau() const;

    int getNbElem() const;

    Tableau(int tailleTotaleTableau);

    Tableau(const Tableau &copie);

    Tableau();

    ~Tableau();


};


#endif //S7_CPP_TP1_TABLEAU_H
