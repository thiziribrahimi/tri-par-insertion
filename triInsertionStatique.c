#include <iostream>

using namespace std;

void triInsertion(int nombre_elements, int ensemble_elements[]);
void saisie(int nombre_elements, int ensemble_elements[]);
void affichage(int nombre_elements, int ensemble_elements[]);

int main() {
	cout << "-------Tri par insertion-----------\n\n";
	
	// 1.Récupération du nombre d'éléments à trier
	int nombre_elements = 0;
	cout << "Saisissez le nombre d'entiers à trier : ";
	cin >> nombre_elements;
	cout << "\n"; 
	if(nombre_elements == 0){
		printf("ERREUR : ensemble vide\n");
		return 0;
	}
	//-------------------------------------------
	
	// 2.Création de l'ensemble d'entiers à trier
	int ensemble_elements[50];
	//-------------------------------------------
	
	// 3.Récupérations des valeurs de l'ensemble avec l'ordre souhaité par l'utilisateur 
	saisie(nombre_elements, ensemble_elements);
	//-------------------------------------------
	
	// 4.Affichage de l'ensemble
	cout << "\n___Affichage de l'ensemble avant le tri : ___\n\n";
	affichage(nombre_elements, ensemble_elements);
	//-------------------------------------------
	
	// 5.Tri par insertion
	triInsertion(nombre_elements, ensemble_elements);
	//-------------------------------------------
	
	// 6.Affichage de l'ensemble
	cout << "\n___Affichage de l'ensemble après le tri : ___\n\n";
	affichage(nombre_elements, ensemble_elements);
	//-------------------------------------------
	return 0;
}

void triInsertion(int nombre_elements, int ensemble_elements[]){
	int intermediaire;
	int j;
	for( int i=1; i< nombre_elements; i++){
		intermediaire = ensemble_elements[i];
		j = i - 1;
		while(j>=0 && ensemble_elements[j]> intermediaire){
			ensemble_elements[j+1] = ensemble_elements[j];
			j--;
		}
		ensemble_elements[j+1] = intermediaire;
	}
}

void saisie(int nombre_elements, int ensemble_elements[]){
	for (int i=0; i< nombre_elements; i++){
		cout <<" entier numéro " << i+1 << " :  ";
		cin >> ensemble_elements[i];
	}
}

void affichage(int nombre_elements, int ensemble_elements[]){
	for (int i=0; i< nombre_elements; i++){
		cout << "|" <<ensemble_elements[i]<< "|" <<"  ";
	}
	cout <<"\n";
}
