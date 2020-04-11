#include "contr_admin.h"
#include <iostream>

using namespace std;

contr_admin::contr_admin()
{
	rep = Repository();
}


contr_admin::~contr_admin()
{
	rep.movies.clear();
	rep.watch_list.clear();
}

void contr_admin::add(Filme f)
{
	if (not search(f))
	{
		rep.movies.push_back(f);
	}
	else
	{
		cout << "Film already exists!\n";
	}
}

void contr_admin::remove(Filme f)
{
	if (search(f))
	{
		for (int i = 0; i < rep.movies.size(); ++i)
		{
			if ((rep.movies.at(i).getTitle() == f.getTitle()) and (rep.movies.at(i).getGenre() == f.getGenre()) and (rep.movies.at(i).getYear() == f.getYear()))
			{
				rep.movies.erase(rep.movies.begin() + i);
				return;
			}
		}
	}
	else
	{
		cout << "Film does not exist!\n";
	}
}

bool contr_admin::search(Filme f)
{
	for (int i = 0; i < rep.movies.size(); ++i)
	{
		if ((rep.movies.at(i).getTitle() == f.getTitle()) and (rep.movies.at(i).getGenre() == f.getGenre()) and (rep.movies.at(i).getYear() == f.getYear()))
		{
			return true;
		}
	}
	return false;
}

void contr_admin::update(Filme f)
{
	if (search(f))
	{
		for (int i = 0; i < rep.movies.size(); ++i)
		{
			if ((rep.movies.at(i).getTitle() == f.getTitle()) and (rep.movies.at(i).getGenre() == f.getGenre()) and (rep.movies.at(i).getYear() == f.getYear()))
			{
				change(rep.movies.at(i));
				return;
			}
		}
	}
	else
	{
		cout << "Film does not exist!\n";
	}
}

void contr_admin::show_all()
{
	for (auto i = rep.movies.begin(); i != rep.movies.end(); ++i)
	{
		i->show();
	}
}

void contr_admin::change(Filme& f)
{
	std::string s;
	cout << "Current title is: " << f.getTitle() << " do you want to change it? (y/n) \n";
	cin >> s;
	if (s == "y")
	{
		std::string title;
		cout << "The new title is: ";
		cin >> title;
		f.setTitle(title);
	}
	cout << "Current genre is: " << f.getGenre() << " do you want to change it? (y/n) \n";
	cin >> s;
	if (s == "y")
	{
		std::string genre;
		cout << "The new genre is: ";
		cin >> genre;
		f.setGenre(genre);
	}
	cout << "Current title is: " << f.getTitle() << " do you want to change it? (y/n) \n";
	cin >> s;
	if (s == "y")
	{
		int year;
		cout << "The new year is: ";
		cin >> year;
		f.setYear(year);
	}
}