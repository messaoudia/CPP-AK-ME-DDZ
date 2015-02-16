/*
 * Map.cpp
 *
 *  Created on: 26 janv. 2015
 *      Author: firminrabefiringa
 */

#include "Map.h"


Map Map::m_instance=Map();

Map& Map::Instance()
{
	return m_instance;
}

void Map::init()
{
	int i = 0;
	int j = 0;
	for(i = 0; i<LIGNE;i++)
	{
		for(j = 0; j<COLONNE; j++)
		{
			tab[i][j] = Case();
		}
	}
}

void Map::affiche()
{
	int i = 0;
	int j = 0;
	cout<<"Grille de jeu : "<<endl;
	for(i = 0; i<LIGNE;i++)
	{
		for(j = 0; j<COLONNE; j++)
		{
			cout<<"[";
			tab[i][j].affiche();
			cout<<"]";
		}
		cout<<endl;
	}
}
