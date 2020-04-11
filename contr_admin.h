#pragma once
#include "Repository.h"

class contr_admin
{
	friend class ui;
public:
	//constructor
	contr_admin();

	//destructor
	~contr_admin();

	//add
	void add(Filme f);

	//remove
	void remove(Filme f);

	//update
	void update(Filme f);

	//search
	bool search(Filme f);

	//does the actual change
	void change(Filme &f);

	//view database
	void show_all();

private:
	Repository rep;
};

