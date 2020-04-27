#include "UI.h"
#include "contr_admin.h"

using namespace std;

int main()
{
	contr_admin contr;
	Filme f1 = Filme("Joker", "drama", 2019, 9000, "https://www.youtube.com/watch?v=-_DJEzZk2pc");
	Filme f2 = Filme("Parasite", "thriller", 2019, 7000, "https://www.youtube.com/watch?v=5xH0HfJHsaY");
	Filme f3 = Filme("Interstellar", "drama", 2014, 8000, "https://www.youtube.com/watch?v=zSWdZVtXT7E");
	contr.add(f1);
	contr.add(f2);
	contr.add(f3);
	ui userinterface(contr);
	userinterface.run();

	return 0;
}