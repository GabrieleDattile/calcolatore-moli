#include <stdio.h>

int main() {
    // Definizione di costanti
    const double numeroAvogadro = 6.022e23;

    // Dichiarazione di variabili
    double massaMolecolare;
    double massa;
    double moles;

    // Input della massa molecolare da parte dell'utente
    printf("Inserisci la massa molecolare (in g/mol): ");
    scanf("%lf", &massaMolecolare);

    // Input della massa da parte dell'utente
    printf("Inserisci la massa della sostanza (in g): ");
    scanf("%lf", &massa);

    // Calcolo delle moli utilizzando la formula delle mole: moli = massa / massa molecolare
    moles = massa / massaMolecolare;

    // Calcolo del numero di entità elementari utilizzando la costante di Avogadro: entità = moli * numeroAvogadro
    double entita = moles * numeroAvogadro;

    // Output dei risultati
    printf("Moli: %.4lf\n", moles);
    printf("Numero di entità elementari: %.4lf\n", entita);

    return 0;
}
