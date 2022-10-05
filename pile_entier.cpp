#include <iostream>
#include "classpile.h"

pile_entier::pile_entier() {
	taille = n;
	tabElement = new int[taille];
	sommet = 0;
}

pile_entier::~pile_entier() {
	delete pile;
}

pile_entier::empile() {
	tabElement = new int[taille];
	for (int i = 0, i < taille, i++)
		tabElement[++taille] = p;
}

pile_entier::depile() {
	if (taille > 0) {
		return pile[--taille];
	}

}

pile_entier::pleine() {
	if (pile = 1) {
		pile = [hauteur];
		hauteur++
	}
}

pile_entier::vide() {
	if (taille == 0) {
		return true;
	}
	else {
		return false;
	}
}
