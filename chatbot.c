//
// Created by CHARLES on 21/11/2024.

#include <stdio.h>
#include "chatbot.h"

// Fonction principale menu
int main() {
    int choix; // Variable choix de l'utilisateur

    // menu principal
    printf("MENU PRINCIPAL \n");
    printf("Choisissez un theme par mis ceux ci dessous (ecrire le chiffre):\n");
    printf("1. Chatbot IA Générative\n");
    printf("2. Chatbot Jeux Vidéo\n");
    printf("3. Chatbot Green IT\n");
    printf("4. Quitter\n");

    // Lit le choix de l'utilisateur
    printf("Votre choix : ");
    if (scanf("%d", &choix) != 1) { // Vérifier si est invalide
        printf("invalide.\n");
        return 1; // erreur
    }

    // Gérer le choix de l'utilisateur avec des if/else (j'ai pas reussi a utiliser le switch)
    if (choix == 1) {
        chatbotIA();
    } else if (choix == 2) {
        chatbotJeuxVideos();
    } else if (choix == 3) {
        chatbotGreenIT();
    } else if (choix == 4) {
        printf("Merci d'avoir utilise le programme. a bientot !\n");
    } else {
        printf("Choix invalide.\n");
        return 1; // Fin du programme cas d'erreur
    }

    return 0; // fin réussie du programme
}
