#pragma once
#include "Filme.h"
#include <vector>
class Repository
{
private:
	std::vector<Filme*> movies;
public:
	Repository(); //constructor
	void addMovie(Filme* f);
	~Repository(); //destructor
};

