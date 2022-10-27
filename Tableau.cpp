//
// Created by Jean Loup on 18/10/2022.
//

#include "Tableau.h"

//constructeurs
Tableau::Tableau() {
    this->tailleTotaleTableau = 10;//taille arbitraire de 10
    this->nbElem = 0;
    this->val = new Entree[tailleTotaleTableau];
}

Tableau::Tableau(int tailleTotaleTableau) {
    this->tailleTotaleTableau = tailleTotaleTableau;
    this->nbElem = 0;//ini a 0 car au debut le tableau est vide
    this->val = new Entree[tailleTotaleTableau]; //on fait pointer le pointeur sur un tableau d'Entree
}

Tableau::Tableau(const Tableau &copie) {
    this->nbElem = copie.nbElem;
    this->tailleTotaleTableau = copie.tailleTotaleTableau;
    this->val = new Entree[copie.tailleTotaleTableau];
    for (int i = 0; i < this->nbElem; i++) {
        this->val[i] = copie.val[i];
    }
}

//methodes
int Tableau::getTailleTotaleTableau() const {
    return this->tailleTotaleTableau;
}

int Tableau::getNbElem() const {
    return this->nbElem;
}

void Tableau::display() {
    if (this->nbElem == 0) {
        cout << "tableau vide" << endl;
    } else {
        for (int i = 0; i < this->nbElem; i++) {
            this->val[i].display();
        }
    }

}

void Tableau::ajouter(string nom, string num) {
    if (this->nbElem < this->tailleTotaleTableau) {
        this->val[this->nbElem] = Entree(nom, num);
        this->nbElem++;
    } else {
        cout << "\nERREUR: tableau plein" << endl;
    }

}

void Tableau::supprimer(string nom, string numero) {
    bool trouve = false;
    if (this->nbElem > 0) {
        for (int i = 0; i < this->nbElem; i++) {
            if ((this->val[i].getNom() == nom) && (this->val[i].getNum() == numero) && trouve == false) {
                //on copie la derniere entree du tableau à la place de l'entree à supprimer
                this->val[i] = this->val[this->nbElem - 1];
                //on diminue d'un cran le remplissage du tableau pour sortir l'élément copié
                this->nbElem--;
                trouve = true;
            } else {
            }
        }
    } else {
        cout << "ERREUR: tableau vide, rien à effacer" << endl;
    }
    if (trouve == false) {
        cout << "ERREUR: aucune correspondance trouvee" << endl;
    }
}

void Tableau::supprimer(string nom) {
    bool trouve = false;
    if (this->nbElem > 0) {
        for (int i = 0; i < this->nbElem; i++) {
            if ((this->val[i].getNom() == nom) && trouve == false) {
                //on copie la derniere entree du tableau à la place de l'entree à supprimer
                this->val[i] = this->val[this->nbElem - 1];
                //on diminue d'un cran le remplissage du tableau pour sortir l'élément copié
                this->nbElem--;
                trouve = true;
            } else {
            }
        }
    } else {
        cout << "ERREUR: tableau vide, rien à effacer" << endl;
    }
    if (trouve == false) {
        cout << "ERREUR: aucune correspondance trouvee" << endl;
    }
}


Tableau::~Tableau() {
    //si je décommente la ligne en dessous, "exit code 139"
    //delete[] this->val; //supprime tout le tableau
}
