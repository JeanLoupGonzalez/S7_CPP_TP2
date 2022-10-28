//
// Created by jl on 26/10/22.
//

#include "Agenda.h"
#include <iostream>

using namespace std;

//constrcuteurs
Agenda::Agenda() {
    this->tab = Tableau();
}

Agenda::Agenda(int tailleMax) {
    this->tab = Tableau(tailleMax);
}

Agenda::Agenda(const Agenda &copie) {
    this->tab = copie.tab;
}

//methodes


Agenda Agenda::concat(Agenda &a2) {// on fusionne 2 agenda
    //cree un nouvel agenda
    Agenda agendaConcat(this->tab.tailleTotaleTableau + a2.tab.getTailleTotaleTableau());

    for (int i = 0; i < this->tab.getNbElem(); i++) {
        agendaConcat.tab.val[i] = this->tab.val[i];
        agendaConcat.tab.nbElem++;
    }
    for (int j = this->tab.nbElem; j < a2.tab.nbElem + this->tab.nbElem; j++) {
        agendaConcat.tab.val[j] = a2.tab.val[j - this->tab.nbElem];
        agendaConcat.tab.nbElem++;
    }
    return agendaConcat;
}

void Agenda::ajouter(string nom, string num) {
    this->tab.ajouter(nom, num);
}

void Agenda::supprimer(string nom, string num) {
    this->tab.supprimer(nom, num);
}

void Agenda::supprimer(string nom) {
    this->tab.supprimer(nom);
}

void Agenda::display() {
    this->tab.display();
}

Agenda::~Agenda() {
    //pas de new, donc pas de destructeur à implémenter
}

ostream &operator<<(ostream &out, Agenda &agenda) {
    out << agenda.tab;
    return out;
}

void Agenda::operator+=(const string &nomEtNum) {
    //nom et le num doivent etre séparés par un espace

    //on va du premier char à l'espace et on récupère le string correspondant au nom
    string nom = nomEtNum.substr(0, nomEtNum.find(" "));
    //on va de l'espace exclu à la fin de la string pour prélever le string du numéro
    string numero = nomEtNum.substr(nomEtNum.find(" ") + 1, nomEtNum.length());
    this->ajouter(nom, numero);
}

void Agenda::operator+=(Agenda &a2) {
    this->concat(a2);//no functionna
}

Agenda &Agenda::operator=(const Agenda &copie) {
    this->tab.nbElem = copie.tab.nbElem;
    this->tab.tailleTotaleTableau = copie.tab.tailleTotaleTableau;
    for (int i = 0; i < copie.tab.getNbElem(); i++) {
        this->tab.val[i] = copie.tab.val[i];
    }
    return *this;//retourne l'objet courant modifié
}

Agenda operator+(Agenda &a1, Agenda &a2) {
    //cree un nouvel agenda, on concatene a1 et a2 dedans puis on le retourne
    Agenda res(a1.tab.getTailleTotaleTableau() + a2.tab.getTailleTotaleTableau());
    res = a1.concat(a2);
    return res;
}

string Agenda::operator[](string mot) const {
    //parcours les noms ds me tableau
    bool trouve=false;
    string occurence="Le nom n a pas ete trouve";
    for (int i = 0; i < this->tab.getNbElem(); i++) {
        if(mot==this->tab.val[i].getNom() && trouve==false){
            trouve=true;
            occurence="le mot a ete trouve en "+to_string(i+1)+"e position de l'agenda";
        }
    }
    return occurence;
}

void Agenda::operator-=(const string nom) {
    bool trouve = false;
    for (int i = 0; i < this->tab.getNbElem(); i++) {
        if(nom==this->tab.val[i].getNom() ){
            this->tab.supprimer(nom);
            trouve=true;
        }
    }
    if(trouve) cout<<"nom "+nom+" trouve et efface"<<endl;
    else cout<<"nom "+nom+" pas trouve"<<endl;
}





