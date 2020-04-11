#pragma once
#include "Repository.h"
#include "Filme.h"
class contr_user
{ 
	friend class ui;
public:
	//construcor
	contr_user();

	//destructor
	~contr_user();

	//view
	void view();

	//add to watch list
	void add(Filme f);

	//remove from watch list
	void remove(Filme f);

	//view the watchlist
	void show_all();

	//search
	bool search(Filme f);

private:
	Repository rep;
};

