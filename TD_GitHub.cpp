//Fonctions réalisées par l'étudiant 1 :

#include <stdio.h>
#include <TD_GitHub.h>

int estMajeur(int age) {
    if (age >= 18 || age < 0) {
        return 1;
    } else {
        return 0;
    }
}

int exposant(int nombre, int exposant) {
    int resultat = 1;
    for (int i = 0; i < exposant; i++) {
        resultat *= nombre;
    }
    return resultat;
}

float TVA(float prix) {
    if (prix >= 1000) {
        return prix * 1.196;  // TVA à 19.6%
    } else {
        return prix * 1.055;  // TVA à 5.5%
    }
}

int plusGrand(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    // Test des fonctions
    printf("Est majeur : %d\n", estMajeur(20));  // Doit afficher 1 (vrai)
    printf("Exposant : %d\n", exposant(2, 3));   // Doit afficher 8
    printf("TVA : %.2f\n", TVA(1500));           // Doit afficher 1782.00
    printf("Plus grand : %d\n", plusGrand(5, 10, 3));  // Doit afficher 10

    return 0;
}




//Fonctions réalisées par l'étudiant 2 :


// Fonction estPair
int estPair(int nombre) {
    if (nombre % 2 == 0 || nombre % 7 == 0) {
        return 1; // Vrai
    } else {
        return 0; // Faux
    }
}

// Fonction sommeNombre
int sommeNombre(int nombre) {
    int somme = 0;
    for (int i = nombre; i > 0; i--) {
        somme += i;
    }
    return somme;
}

// Fonction salaireNet
float salaireNet(float salaireBrut) {
    float chargeSalariale = salaireBrut * 0.23;
    float salaireNet = salaireBrut - chargeSalariale;
    float prime = salaireNet * 0.12;
    return salaireNet + prime;
}

// Fonction plusPetit
int plusPetit(int a, int b, int c) {
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    return min;
}

//Fonctions réalisées par l'étudiant 3 :
