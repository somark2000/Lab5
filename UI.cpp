#include "UI.h"
#include "contr_admin.h"
#include <iostream>
#include <string>

using namespace std;

ui::ui(contr_admin c)
{
	this->contr = c;
}

ui::ui()
{

}

ui::~ui()
{

}

void ui::Menu()
{
	cout << "Choose: " << endl;
	cout << "\t 1 - User Mode" << endl;
	cout << "\t 2 - Admin Mode" << endl;
	cout << "\t 3 - Exit" << endl;
}

void ui::amenu()
{
	cout << "Choose: " << endl;
	cout << "\t 1 - Add film" << endl;
	cout << "\t 2 - Remove film" << endl;
	cout << "\t 3 - Update film" << endl;
	cout << "\t 4 - Show database\n";
	cout << "\t 5 - Return to main menu" << endl;
}

void ui::umenu()
{
	cout << "Choose: " << endl;
	cout << "\t 1 - Search for something new" << endl;
	cout << "\t 2 - Remove viewed film" << endl;
	cout << "\t 3 - Display watch list" << endl;
	cout << "\t 4 - Return to main menu" << endl;
}

void ui::run()
{
	while (true)
	{
		ui::Menu();

		int com;
		cout << "Input the command: ";
		cin >> com;
		if (com >= 0)
		{
			//cin.ignore();
			switch (com)
			{
			case 1:
			{
				contr_user cont = contr_user();
				bool f = true;
				while (f)
				{
					ui::umenu();
					int c;
					cout << "Input the command: ";
					cin >> c;
					switch (c)
					{
					case 1:
					{
						cont.view();
						break;
					}
					case 2:
					{
						cout << "Film to be removed\n";
						string title, genre, link = "s";
						int like = 0, year;
						cout << "Title: ";
						cin >> title;
						cout << "Genre: ";
						cin >> genre;
						cout << "Year: ";
						cin >> year;
						if (year < 0 || 1000 > year || year > 2020)
						{
							cout << "please enter a valid year!" << endl;
						}
						else {
							Filme fi = Filme(title, genre, year, like, link);
							cont.remove(fi);
							break;
						}
						break;
					}
					case 3:
					{
						cont.show_all();
						break;
					}
					default:
						f = false;
					}
				}
				break;
			}
			case 2:
			{
				contr_admin cont = this->contr;
				bool fe = true;
				while (fe)
				{
					ui::amenu();
					int c;
					cout << "Input the command: ";
					cin >> c;
					switch (c)
					{
					case 1:
					{
						cout << "New film to be added\n";
						string title, genre, link;
						int like, year;
						cout << "Title: ";
						cin >> title;
						cout << "Genre: ";
						cin >> genre;
						cout << "Year: ";
						cin >> year;
						cout << "Likes: ";
						cin >> like;
						cout << "Source: ";
						cin >> link;
						if (year < 0 || 1000 > year || year > 2020)
						{
							cout << "please enter a valid year!" << endl;
						}
						else {
							Filme f = Filme(title, genre, year, like, link);
							cont.add(f);
							break;
						}
						break;
					}
					case 2:
					{
						cout << "Film to be removed\n";
						string title, genre, link = "s";
						int like = 0, year;
						cout << "Title: ";
						cin >> title;
						cout << "Genre: ";
						cin >> genre;
						cout << "Year: ";
						cin >> year;
						if (year < 0 || 1000 > year || year > 2020)
						{
							cout << "please enter a valid year!" << endl;
						}
						else {
							Filme f = Filme(title, genre, year, like, link);
							cont.remove(f);
							break;
						}
						break;
					}
					case 3:
					{
						cout << "Film to be updated\n";
						string title, genre, link = "s";
						int like = 0, year;
						cout << "Title: ";
						cin >> title;
						cout << "Genre: ";
						cin >> genre;
						cout << "Year: ";
						cin >> year;
						if (year < 0 || 1000 > year || year > 2020)
						{
							cout << "please enter a valid year!" << endl;
						}
						else {
							Filme f = Filme(title, genre, year, like, link);
							cont.update(f);
							break;
						}
						break;
					}
					case 4:
					{
						cont.show_all();
						cout << '\n';
						break;
					}
					default:
						fe = false;
					}
				}
				break;
			}
			default:
				return;
			}
		}
		else
		{
			cout << "Please enter a valid command!" << endl;
		}
	}
}