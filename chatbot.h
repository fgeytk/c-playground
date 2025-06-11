//
// Created by CHARLES on 21/11/2024.
#include <stdio.h>

// Fonction pour comparer deux chaînes de caractères
int comparer_chaines(char *chaine1, char *chaine2) {
    int i = 0;
    while (chaine1[i] != '\0' && chaine2[i] != '\0') {
        if (chaine1[i] != chaine2[i]) {
            return 0; // Chaînes différentes
        }
        i++;
    }
    return chaine1[i] == '\0' && chaine2[i] == '\0'; // Identiques si même longueur
}

// chatbot IA Générative
void chatbotIA() {
    char question[256];
    printf("Bienvenue dans l'IA Générative !\n");
    printf("Pose-moi des questions sur l'intelligence artificielle.\n");
    while (1) {
        printf("Question ,'stop' pour quitter : ");
        scanf(" %[^\n]", question);
        if (comparer_chaines(question, "stop") == 1) {
            break;                              // Break pour sortir d'une fonction void
        } else {
            printf("Je ne sais pas\n");
        }
    }
}

//  chatbot Jeux Vidéo
void chatbotJeuxVideos() {
    char question[256];
    printf("Bienvenue dans le theme : Jeux Video !\n");
    printf("Posez-moi vos questions sur les jeux video.\n");
    while (1) {
        printf("Question, 'stop' pour quitter : ");
        scanf(" %[^\n]", question);
        if (comparer_chaines(question, "stop") == 1) {
            break;
        } else {
            printf("Revenez bientot \n");
        }
    }
}

// chatbot Green IT
void chatbotGreenIT() {
    char question[256];
    printf("Bienvenue dans le theme : Green IT !\n");
    printf("Posez-moi vos questions sur l'informatique durable.\n");
    while (1) {
        printf("Question, 'stop' pour quitter : ");
        scanf(" %[^\n]", question);
        if (comparer_chaines(question, "stop") == 1) {
            break;
        } else {
            printf("Je n'ai aucune reponse a donner !\n");
        }
    }
}
