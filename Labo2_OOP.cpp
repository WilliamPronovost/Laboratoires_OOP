#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void Q1()
{
    char word[100];
    printf("Veuillez entrer votre mot\n");
    scanf_s("%s", word, (unsigned)_countof(word));
    for (char& c : word) { // itere a travers chaque lettre de word
        if (c != NULL) {  // si word n'existe pas il affiche les caracteres qui viennent apres ceux qui sont lus
            printf("%c", (char)(c + 1));
        }
    }

}
void Q2() {
    char word[100];
    printf("Veuillez entrer votre mot\n");
    fgets(word, (unsigned)_countof(word), stdin);
    int isFirstLetter = 1;
    int isSpace = 0;
    for (char& c : word) { //  itere a travers chaque lettre de word
        if (c != NULL) { // si le mot existe
            if (isFirstLetter == 1) { // si on atteint la premiere lettre de word

                if (c > 96 && c < 123) // si le caractere est en minuscule
                {
                    printf("%c", (char)(c - 32)); //
                    isFirstLetter = 0; // l'algorithme passe aux autres lettres de la chaine
                    isSpace = 0; // il n'y a pas d'espace
                    continue; 
                }
            }
            if (c == 32 && isSpace == 0) { // si word rencontre un espace
                isSpace = 1; // il detecte l'espace
                isFirstLetter = 1; // la lettre qui vient apres l'espace redevient en majuscule 
            }

            // si le mot rencontre un espace mais que premier caractere de word est deja en majuscule, les autres lettres redeviennent en minuscule jusqu'a la detection d'un autre espace

            else if (c == 32 && isFirstLetter == 1) { 
                isFirstLetter = 0;
            }

            if (c > 0) {
                printf("%c", c);
            }
        }
    }
}
void Q3() {
    char word[100];
    char longestWord[100]; //mot le plus long
    char currentWord[100]; //mot actuel
    int longestLength = 0; //longueur du mot le plus long
    int currentLength = 0; //longueur du mot actuel
    printf("Veuillez entrer vos mots\n");
    fgets(word, (unsigned)_countof(word), stdin);
    for (char& c : word) { // itere a travers chaque lettre de word
        if (c == NULL || c == 32) { //si on rencontre un espace, le mot est fini
            if (currentLength > longestLength) { // si le mot le actuel est plus long que le mot le plus long
                strncpy_s(longestWord, currentWord, currentLength); //longestWord prend la valeur de currentWord
                longestLength = currentLength;
            }
            //reset currentWord et currentLength a zero et on passe a la prochaine lettre
            currentLength = 0;
            currentWord[0] = '\0';
            continue;
        }
        if (c <= 0) { // s'assurer que le caractere est valide
            continue;
        }
        //on ajoute c dans currentWord et on incremente currentLength de un
        currentWord[currentLength] = c;
        currentLength++;
    }
    if (currentLength > longestLength) { //lorsque que le mot actuel est plus grand que le mot le plus long
        strncpy_s(longestWord, currentWord, currentLength); //longestWord prend la valeur de currentWord
    }
    printf("%s", longestWord);
}


void Q4() {
    char word[100];
    printf("Veuillez entrer votre mot\n");
    fgets(word, (unsigned)_countof(word), stdin);
    int len = strlen(word) - 1; //longueur du mot
    for (int i = 0; i < len / 2; i++) { //itere jusqu'a la moitie du mot
        if (word[i] != word[(len - 1) - i]) { // si les lettres opposer se correspondent pas (premiere et derniere, deuxieme et avant derniere, etc.)
            printf("%s", word);
            printf("%s", "n'est pas un palindrome");
            return; // sortir de la fonction
        }
    }
    //si le code se rend ici, le mot est un palindrome
    printf("%s", word);
    printf("%s", "est un palindrome");
}
void Q5() {
    char word[100];
    char digits[100]; // les nombres dans l'operation
    int digitsLen = 0; // la valeur des nombres
    int sum = 0; // la somme des nombres
    printf("Veuillez entrer votre phrase\n");
    fgets(word, (unsigned)_countof(word), stdin);
    for (char& c : word) { //  itere a travers chaque lettre de word
        if (c == NULL || c <= -1) { // si le mot n'existe pas et qu'il est inferieur ou egal a -1
            continue; // ignorer le mot
        }
        if (isdigit(c)) { // si le mot est un nombre
            digits[digitsLen] = c; // on ajoute c dans digits
            digits[digitsLen + 1] = '\0'; // le nombre n'existe pas s'il depasse les limites de sa valeur 
            digitsLen++; // la valeur du nombre incremente de un
        }
        else {
            if (digitsLen > 0) { // si la valeur du nombre est superieure a 0 
                sum += atoi(digits); // les nombres de la phrase sont converties en int
                digits[0] = '\0';
                digitsLen = 0;
            }
        }
    }
    printf("%s", "la somme des nombres est: ");
    printf("%d", sum);
}
int main() {

    // decommenter pour le fonctionnent de chaque algorithme
    
    //Q1();
    Q2();
    //Q3();
    //Q4();
    //Q5();
}
