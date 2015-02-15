#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>

#include "../Jeu/Map/Map.h"
#include "../Joueur/Joueur.h"
#include "Pion.h"

using namespace std;
class Animal: public Pion {
private:
	static int idGen;
protected:
	int id;
	Joueur *joueur;
	bool estCache;
	int valeur;
public:

	Animal(string name, Joueur *joueur, Map map, int val) :
			Pion(name, -1, -1, map), id(idGen++), joueur(joueur), estCache(
					false), valeur(val) {
	}

	virtual ~Animal() {
	}

	void setEstCache(bool etatAnimal) {
		estCache = etatAnimal;
	}

	bool isEstCache() const {
		return estCache;
	}

	int getId() const {
		return id;
	}

	Joueur* getJoueur() const {
		return joueur;
	}

	void setJoueur(Joueur *joueur) {
		this->joueur = joueur;
		cout << "Mon joueur est " << this->joueur->getName() << endl;
	}

	Animal& operator =(const Animal& other) // copy assignment
			{
		return *this;
	}
};

#endif /* ANIMAL_H_ */
