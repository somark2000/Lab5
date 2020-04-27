#include "UI.h"
#include "contr_admin.h"

using namespace std;

int main()
{
	contr_admin contr;
	Filme f1 = Filme("Joker", "drama", 2019, 9000, "youtube");
	Filme f2 = Filme("Parasite", "thriller", 2019, 7000, "youtube");
	Filme f3 = Filme("Interstellar", "drama", 2014, 8000, "youtube");
	contr.add(f1);
	contr.add(f2);
	contr.add(f3);
	ui userinterface(contr);
	userinterface.run();

	return 0;
}