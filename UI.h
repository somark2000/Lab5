#pragma once
#include "contr_admin.h"
#include "contr_user.h"

class ui
{
public:
	//displays the main menu
	void Menu();

	//low-cost-edition-fake main
	void run();

	//displays the user menu
	void umenu();

	//displays the admin menu
	void amenu();

	//constructor
	ui();
	
	//destructor
	~ui();
};

