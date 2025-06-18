#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encryptFile(const char *inputFile, const char *outputFile, const char *key) {
    FILE *fin = fopen(inputFile, "r+");   // Ouvrir le fichier d'entrée en mode lecture
    FILE *fout = fopen(outputFile, "r+"); // Ouvrir le fichier de sortie en mode écriture
    if (fin == NULL || fout == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(1);
    }

    size_t keyLength = strlen(key); // Taille de la clé
    char buffer[1024];              // Tampon pour lire chaque ligne

    // Lire chaque ligne du fichier
    while (fgets(buffer, sizeof(buffer), fin) != NULL) {
        size_t lineLength = strlen(buffer);

        // Crypter chaque caractère de la ligne
        for (size_t i = 0; i < lineLength; i++) {
            buffer[i] += key[i % keyLength];  // Ajouter chaque octet de la clé aux caractères de la ligne
        }

        fputs(buffer, fout); // ةcrire la ligne cryptée dans le fichier de sortie
    }

    fclose(fin);
    fclose(fout);
}

int main() {
    const char *inputFile = "file1.txt";  // Nom du fichier d'entrée
    const char *outputFile = "file2.txt";   // Nom du fichier de sortie crypté
    const char *key = "SECRET";                      // Clé secrète

    encryptFile(inputFile, outputFile, key);
    printf("Le fichier a ete crypte avec succès et enregistre dans %s\n", outputFile);

    return 0;
}