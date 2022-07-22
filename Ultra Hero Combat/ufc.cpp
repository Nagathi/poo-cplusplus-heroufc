#include <iostream>
#include <stdlib.h>
#include <locale.h>

#include "Lutador.h"

using namespace std;


int main(){
	
	setlocale(LC_ALL, "");
		
	Lutador *homelander = new Lutador("Homelander", "EUA", 25, 1.83f, 75.9f, 0, 15, 1);
	Lutador *black_noir = new Lutador("Black Noir", "Brasil", 25, 1.83f, 75.9f, 2, 7, 0);
	Lutador *bruto = new Lutador("Billy Bruto", "Inglaterra", 25, 1.83f, 75.9f, 5, 5, 1);
	
	homelander->apresentar();
	cout << endl;
	black_noir->apresentar();
	cout << endl;
	bruto->apresentar();

	return 0;
}
