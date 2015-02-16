/*
 * Zebre.h
 *
 *  Created on: 27 janv. 2015
 *      Author: Amin
 */

#ifndef SRC_ZEBRE_H_
#define SRC_ZEBRE_H_

#include <iostream>
#include "../Animal.h"

class Zebre : public Animal{
public:
	Zebre(Joueur *joueur,Map map):Animal("Zebre",joueur,map,6){}
	~Zebre(){}

	void check(Case position);
};

#endif /* SRC_ZEBRE_H_ */
