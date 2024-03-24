//Fonctions réalisées par l'étudiant 1 :










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
