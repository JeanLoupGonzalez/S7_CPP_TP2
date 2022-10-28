//
// Created by Jean Loup on 18/10/2022.
//

#ifndef S7_CPP_TP1_TABLEAU_H
#define S7_CPP_TP1_TABLEAU_H

#include "Entree.h"

class Tableau {
    friend class Agenda;

    int tailleTotaleTableau;
    int nbElem;
    Entree *val;

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

    friend ostream &operator<<(ostream &out, Tableau &tab);

    Tableau& operator=(const Tableau &copie);

    bool chercheNom(string nom);

};


#endif //S7_CPP_TP1_TABLEAU_H
