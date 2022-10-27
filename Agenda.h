//
// Created by jl on 26/10/22.
//

#ifndef S7_CPP_TP1_AGENDA_H
#define S7_CPP_TP1_AGENDA_H


#include "Tableau.h"

class Agenda {
    Tableau tab;
public:
    Agenda();

    Agenda(int tailleMax);

    Agenda(const Agenda &copie);

    ~Agenda();

    void concat(Agenda a2);

    void ajouter(string nom, string num);

    void supprimer(string nom, string num);

    void supprimer(string nom);

    void display();

    friend ostream& operator << (ostream& out, Agenda &agenda);

};


#endif //S7_CPP_TP1_AGENDA_H
