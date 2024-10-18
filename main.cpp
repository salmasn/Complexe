#include <iostream>
#include "Complexe.h"

using namespace std;

int main() {

    Complexe C1(3, 4);  // z1 = 3 + 4i
    Complexe C2(1, 2);  // z2 = 1 + 2i

    // Affichage des nombres complexes
    C1.affichage();
    cout << endl;
    C2.affichage();
    cout << endl;

    // Test de l'opérateur +
    Complexe addition = C1 + C2;
    cout << "Addition de C1 et C2 : ";
    addition.affichage();
    cout << endl;

    // Test de l'opérateur -
    Complexe soustraction = C1 - C2;
    cout << "Soustraction de C1 et C2  : " << endl;
    soustraction.affichage();
    cout << endl;

    // Test de l'opérateur *
    Complexe multiplication = C1 * C2;
    cout << "Multiplication de C1 et C2  : " << endl;
    multiplication.affichage();
    cout << endl;

    // Test de l'opérateur /
    Complexe division = C1 / C2;
    cout << "Division de C1 sur C2  : " << endl;
    division.affichage();
    cout << endl;

    // Test de l'opérateur ==
    bool egalite = (C1 == C2);
    cout << "Le resultat de l'egalite  : " << (egalite ? "Vrai" : "Faux") << endl;
    cout << endl;


    // Test du module de z1
    double moduleC1 = C1.module();
    cout << "Module de C1 : " << moduleC1 << endl;
    cout << endl;

    // Test du conjugué de z1
    Complexe conjugueC1 = C1.conjugue();
    cout << "Conjugue de C1 : " << endl;
    conjugueC1.affichage();
    cout << endl;

    // Test de l'ajout d'un nombre réel à z1
    Complexe additionReelle = C1 + 5.0;
    cout << "Addition d'un complexe C1 avec un reel (C1 + 5.0) : " << endl;
    additionReelle.affichage();
    cout << endl;

    // Test de la soustraction d'un nombre réel de z1
    Complexe soustractionReelle = C1 - 2.0;
    cout << "Soustraction d'un complexe C1 avec un reel (C1 - 2.0) : " << endl;
    soustractionReelle.affichage();
    cout << endl;

    // Test de la multiplication par un nombre réel
    Complexe multiplicationReelle = C1 * 3.0;
    cout << "Multiplication d'un complexe C1 avec un reel (C1 * 3.0) : " << endl;
    multiplicationReelle.affichage();
    cout << endl;

    // Test de l'ajout d'un complexe à un double
    Complexe additionComplexe = 4.0 + C1;  // Test de double + Complexe
    cout << "Addition d'un complexe a un reel (4.0 + C1) : " << endl;
    additionComplexe.affichage();
    cout << endl;

    // Test de la soustraction d'un complexe d'un double
    Complexe soustractionComplexe = 5.0 - C2;  // Test de double - Complexe
    cout << "Soustraction d'un complexe a un reel (5.0 - C2) : " << endl;
    soustractionComplexe.affichage();
    cout << endl;

    // Test de la multiplication d'un complexe par un double
    Complexe multiplicationComplexe = 2.0 * C1;  // Test de double * Complexe
    cout << "Multiplication d'un reel par un complexe (2.0 * C1) : " << endl;
    multiplicationComplexe.affichage();
    cout << endl;

    return 0;
}
