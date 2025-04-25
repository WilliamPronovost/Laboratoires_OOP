
#include <iostream>

//Creer votre class Engin ici et appeler une fonction start que vous définisser à la classe dans la fonction raylib_start plus bas.
void Q1() {
	int chiffre1, chiffre2, chiffre3, chiffre4;
	float resultatVirgule;
	printf("Veuillez choisir vos chiffres\n");
	scanf_s("%d", &chiffre1);
	scanf_s("%d", &chiffre2);
	scanf_s("%d", &chiffre3);
	scanf_s("%d", &chiffre4);
	int resultatEntier = chiffre1 + chiffre2 + chiffre3 + chiffre4;
	printf("\nAddition:");
	printf("%d", resultatEntier);
	resultatVirgule = (chiffre1 + chiffre2 + chiffre3 + chiffre4) / 4.0f;
	printf("\nMoyenne:");
	printf("%f", resultatVirgule);

	resultatEntier = chiffre1 * chiffre2 * chiffre3 * chiffre4;
	printf("\nProduit:");
	printf("%d", resultatEntier);
	printf("\nMax:");
	if ((chiffre1 > chiffre2) && (chiffre1 > chiffre3) && (chiffre1 > chiffre4)) {
		printf("%d", chiffre1);
	}
	if ((chiffre2 > chiffre1) && (chiffre2 > chiffre3) && (chiffre2 > chiffre4)) {
		printf("%d", chiffre2);
	}
	if ((chiffre3 > chiffre1 && chiffre3 > chiffre2 && chiffre3 > chiffre4)) {
		printf("%d", chiffre3);
	}
	if ((chiffre4 > chiffre1) && (chiffre4 > chiffre2) && (chiffre4 > chiffre3)) {
		printf("%d", chiffre4);
	}
	printf("\nMin:");
	if ((chiffre1 < chiffre2) && (chiffre1 < chiffre3) && (chiffre1 < chiffre4)) {
		printf("%d", chiffre1);
	}
	if ((chiffre2 < chiffre1) && (chiffre2 < chiffre3) && (chiffre2 < chiffre4)) {
		printf("%d", chiffre2);
	}
	if ((chiffre3 < chiffre1) && (chiffre3 < chiffre2) && (chiffre3 < chiffre4)) {
		printf("%d", chiffre3);
	}
	if ((chiffre4 < chiffre1) && (chiffre4 < chiffre2) && (chiffre4 < chiffre3)) {
		printf("%d", chiffre4);
	}
}
void Q2() {
	int rayon;
	float circonference, aire;
	printf("Veuillez entrer votre rayon\n");
	scanf_s("%d", &rayon);
	circonference = 2 * 3.1416f * rayon;
	printf("\nCirconference:");
	printf("%f", circonference);
	aire = 3.1416f * (rayon * rayon);
	printf("\nAire:");
	printf("%f", aire);
}
void Q3(const char* nom) {
	printf("\nBonjour ");
	printf(nom);

}
void Q4() {
	int n1, n2;
	printf("Veuillez choisir votre chiffre\n");
	scanf_s("%d", &n1);
	n2 = n1;
	int count = 0;
	while (n1 > 0) {
		if ((n1 & 1) == 1) {
			count++;
		}
		n1 = n1 >> 1;
	}
	printf("\nIl y a ");
	printf("%d", count);
	printf(" '1' dans le nombre ");
	printf("%d", n2);
}
void Q5()
{
	int n1, n2;
	n2 = 0;
	printf("Veuillez choisir votre chiffre\n");
	scanf_s("%d", &n1);
	int i = 0;
	while (n1 > 0) {
		if ((n1 & 1) == 0) {
			n2 += 1 << i;
		}
		n1 = n1 >> 1;
		i++;
	}
	printf("%d", n2);
	// 32 1 1 0 0 0 1 
	// 14 0 0 1 1 1 0
}
void Q6()
{
	int exposant, temp;

	printf("Veuillez entrer votre puissance de deux:\n");
	scanf_s("%d", &exposant);
	temp = exposant;
	while (exposant > 1) {
		if ((exposant & 1) == 1) {
			printf("%d ", temp);
			printf("n'est pas une puissance de deux. Entrez un autre nombre");
			return;
		}
		exposant = exposant >> 1;
	}
	printf("%d ", temp);
	printf("est une puissance de deux");
}
void Q7()
{

	for (int i = 0; i < 3; i++) {
		int space = i * 2;
		printf("     *\n");
		printf("  *");
	}
}
void Q8()
{
	for (int i = 0; i < 8; i++) {
		if (i < 3) {
			for (int j = 0; j < 2 - i; j++) {
				printf(" ");
			}
			for (int j = 0; j < i * 2 + 1; j++) {
				printf("*");
			}
			printf("\n");
		}
		else {
			printf("  *\n");
		}
	}


}
void Q9()
{
	int number, somme = 0;
	printf("Veuillez choisir votre chiffre\n");
	scanf_s("%d", &number);
	while (number > 10) {
		somme += number % 10;
		number = number / 10;

	}
	somme += number;
	printf("la somme des chiffres composant le nombre est de: ");
	printf("%d", somme);
}
void Q10()
{

}
int main() {

	// decommenter pour le fonctionnement de chaque algorithme
	// 
	//Q1();
	//Q2();
	//Q3("Joe");
	//Q4();
    //Q5();
    //Q6();
    //Q7();
	//Q8();
    //Q9();
	//Q10();
}




