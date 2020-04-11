#pragma once
#include "Filme.h"
#include <vector>
class Repository
{
	friend class contr_user;
	friend class contr_admin;
private:
	std::vector<Filme> movies;
	std::vector<Filme> watch_list;
public:
	Repository(); //constructor
	~Repository(); //destructor
};

