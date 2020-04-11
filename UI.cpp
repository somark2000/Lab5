#include "UI.h"
#include <iostream>
#include <string>

using namespace std;

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
}

void ui::amenu()
{
	cout << "Choose: " << endl;
	cout << "\t 1 - Add film" << endl;
	cout << "\t 2 - Remove film" << endl;
	cout << "\t 3 - Update film" << endl;
	cout << "\t 4- Show database\n";
}

void ui::umenu()
{
	cout << "Choose: " << endl;
	cout << "\t 1 - Search for something new" << endl;
	cout << "\t 2 - Remove viewed film" << endl;
	cout << "\t 3 - Display watch list" << endl;
}

void ui::run()
{
	while (true)
	{
		ui::Menu();

		int com;
		cout << "Input the command: ";
		cin >> com;
		//cin.ignore();
		switch (com)
		{
		case 1:
		{
			contr_user cont = contr_user();
			while (true)
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
					cin >> link;
					Filme f = Filme(title, genre, year, like, link);
					cont.remove(f);
					break;
				}
				case 3:
				{
					cont.show_all();
					break;
				}
				default:
					return;
				}
				break;
			}}
		case 2:
		{
			contr_admin cont = contr_admin();
			while (true)
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
					Filme f = Filme(title, genre, year, like, link);
					cont.add(f);
					break;
				}
				case 2:
				{
					cout << "Film to be removed\n";
					string title, genre, link="s";
					int like=0, year;
					cout << "Title: ";
					cin >> title;
					cout << "Genre: ";
					cin >> genre;
					cout << "Year: ";
					cin >> year;
					Filme f = Filme(title, genre, year, like, link);
					cont.remove(f);
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
					Filme f = Filme(title, genre, year, like, link);
					cont.update(f);
					break;
				}
				case 4:
				{
					cont.show_all();
					cout << '\n';
					break;
				}
				default:
					return;
				}
			}
			break;
		}
		default:
			return;
		}
	}
}
