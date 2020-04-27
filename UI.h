#pragma once
#include "contr_admin.h"
#include "contr_user.h"

class ui
{private:
	contr_admin contr;
public:
	//displays the main menu
	void Menu();

	//low-cost-edition-fake main
	void run();

	//displays the user menu
	void umenu();

	//displays the admin menu
	void amenu();

	//controller constructor
	ui(contr_admin);

	//constructor
	ui();

	//destructor
	~ui();
};
