#include <iostream>
#include "contr_admin.h"
#include "contr_user.h"
#include "Filme.h"
#include "Repository.h"
#include <assert.h>

void teste()
{
	contr_admin contr;
	contr_admin cont;
	Filme f1 = Filme("a", "a", 2010, 30, "youtube");
	Filme f2 = Filme("b", "b", 2020, 40, "youtube");
	Filme f3 = Filme("c", "c", 2011, 22, "google");
	contr.add(f1);
	contr.add(f2);
	contr.add(f3);
	cont.add(f1);
	cont.add(f2);
	cont.add(f3);
	contr.remove(f1);
	contr.remove(f2);
	contr.remove(f3);
	cont.remove(f1);
	cont.remove(f2);
	cont.remove(f3);
	assert(contr.search(f1) == false);
	assert(contr.search(f2) == false);
	assert(contr.search(f3) == false);
	assert(cont.search(f1) == false);
	assert(cont.search(f2) == false);
	assert(cont.search(f3) == false);
}