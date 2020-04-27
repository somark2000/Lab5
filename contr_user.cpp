#include "contr_user.h"
#include <iostream>

using namespace std;

contr_user::contr_user()
{
	rep = Repository();
}


contr_user::~contr_user()
{
	rep.movies.clear();
	rep.watch_list.clear();
}

void contr_user::add(Filme f)
{
	if (not search(f))
	{
		rep.watch_list.push_back(f);
	}
	else
	{
		cout << "Film already in watch list\n";
	}
}

void contr_user::remove(Filme f)
{
	if (search(f))
	{
		for (int i = 0; i < rep.watch_list.size(); ++i)
		{
			if ((rep.watch_list.at(i).getTitle() == f.getTitle()) and (rep.watch_list.at(i).getGenre() == f.getGenre()) and (rep.watch_list.at(i).getYear() == f.getYear()))
			{
				rep.watch_list.erase(rep.watch_list.begin() + i);
				cout << "Do you want to rate it? (y/n)";
				string s;
				cin >> s;
				if (s == "y")
				{
					for (int j = 0; j < rep.movies.size();++j)
					{
						if ((rep.movies.at(j).getTitle() == f.getTitle()) and (rep.movies.at(j).getGenre() == f.getGenre()) and (rep.movies.at(j).getYear() == f.getYear()))
						{
							rep.movies.at(j).setLikes();
						}
					}
				}
				return;
			}
		}
	}
	else
	{
		cout << "Film is not in watch list!\n";
	}
}

void contr_user::show_all()
{
	for (auto i = rep.watch_list.begin(); i != rep.watch_list.end(); ++i)
	{
		i->show();
	}
}

void contr_user::view()
{
	string s;
	cout << "Please enter a genre you are searching for: ";
	getline(cin, s);
	getline(cin, s);
	vector<Filme> v;
	if (s == "")
	{
		cout << "The string is empty!" << endl;
		v = rep.movies;
	}
	else
	{
		for (int i = 0; i < rep.movies.size(); i++)
		{
			if (rep.movies[i].getGenre() == s)
			{
				v.push_back(rep.movies[i]);
			}
		}
	}
	int i =0;
	bool f = true;
	while (i != v.size() and f)
	{
		v[i].show();
		cout << "Do you want to play it? (y/n) ";
		cin >> s;
		if (s == "y") {
			v[i].play();
		}
		cout << "Do you want to add this film to your watchlist?(y/n) ";
		cin >> s;
		if (s == "y")
		{
			add(v[i]);
			cout << "Film added succesfully\n";
		}
		cout << "Do you want to continue?(y/n) ";
		cin >> s;
		if (s == "y")
		{
			i++;
		}
		else
		{
			f = false;
		}
	}
	if (f) cout << "You watched all our films\n";
}

bool contr_user::search(Filme f)
{
	for (int i = 0; i < rep.watch_list.size(); ++i)
	{
		if ((rep.watch_list.at(i).getTitle() == f.getTitle()) and (rep.watch_list.at(i).getGenre() == f.getGenre()) and (rep.watch_list.at(i).getYear() == f.getYear()))
		{
			return true;
		}
	}
	return false;
}