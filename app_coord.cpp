#include "UI.h"
#include "contr_admin.h"

using namespace std;

int main()
{
	contr_admin contr;
	Filme f1 = Filme("Joker", "drama", 2019, 9000, "https://www.youtube.com/watch?v=-_DJEzZk2pc");
	Filme f2 = Filme("Parasite", "thriller", 2019, 7000, "https://www.youtube.com/watch?v=5xH0HfJHsaY");
	Filme f3 = Filme("Interstellar", "drama", 2014, 8000, "https://www.youtube.com/watch?v=zSWdZVtXT7E");
	Filme f4 = Filme("A star is born", "drama", 2018, 7500, "https://www.youtube.com/watch?v=nSbzyEJ8X9E");
	Filme f5 = Filme("Frozen", "animation", 2013, 6500, "https://www.youtube.com/watch?v=TbQm5doF_Uc");
	Filme f6 = Filme("The notebook", "romance", 2004, 8000, "https://www.youtube.com/watch?v=FC6biTjEyZw");
	Filme f7 = Filme("Set it up", "comedy", 2018, 5500, "https://www.youtube.com/watch?v=X-eRc9PF3TU");
	Filme f8 = Filme("High school musical", "family", 2006, 7500, "https://www.youtube.com/watch?v=zL4ZEWYsmuw");
	Filme f9 = Filme("Camp rock", "music", 2008, 6500, "https://www.youtube.com/watch?v=chqevL3FSz8");
	Filme f10 = Filme("The Kissing Booth", "comedy", 2018, 7000, "https://www.youtube.com/watch?v=7bfS6seiLhk");
	contr.add(f1);
	contr.add(f2);
	contr.add(f3);
	contr.add(f4);
	contr.add(f5);
	contr.add(f6);
	contr.add(f7);
	contr.add(f8);
	contr.add(f9);
	contr.add(f10);
	ui userinterface(contr);
	userinterface.run();

	return 0;
}