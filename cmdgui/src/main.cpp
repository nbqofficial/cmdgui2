#include "../src/cmdgui/cmdgui.h"

int main()
{
	toggle t1("Aimbot", true);
	toggle t2("Legit", false);
	toggle t3("Shit", true);
	slider s1("FOV", 5.0, 1.0, 20.0, 1.0);
	slider s2("Speed", 1.0, 0.0, 10.0, 1.0);

	tab tab1("Aimbot");
	tab1.insert(&t1);
	tab1.insert(&t2);
	tab1.insert(&s1);
	tab1.insert(&t3);
	tab1.insert(&s2);

	toggle tt1("Visuals", true);
	toggle tt2("Bullshit", false);
	toggle tt3("Crap", true);
	slider ss1("Shit", 5.0, 1.0, 20.0, 1.0);
	slider ss2("Ex", 1.0, 0.0, 10.0, 1.0);

	tab tab2("Visuals");
	tab2.insert(&tt1);
	tab2.insert(&tt2);
	tab2.insert(&ss1);
	tab2.insert(&tt3);
	tab2.insert(&ss2);

	cmdgui gui;
	gui.insert(&tab1);
	gui.insert(&tab2);

	gui.display();
	while (1)
	{
		gui.navigate();
	}

	return getchar();
}


