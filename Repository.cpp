#include "Repository.h"


Repository::Repository()
{
}

void Repository::addMovie(Filme* f)
{
	this->movies.push_back(f);
}

Repository::~Repository()
{
}
