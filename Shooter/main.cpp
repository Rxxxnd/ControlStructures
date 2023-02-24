#include <iostream>
#include <conio.h>

int main() {

	char key;
	char nickname[10];
	int frags = 0;
	int score = 0;
	int armor = 100;

	std::cout << "\t\t\tCounter-Strike 0.1.6a[early access]" << std::endl;
	std::cout << "\t\t\t============ Controls ============" << std::endl;
	std::cout << "\t\t\t  TAB ------------- Stats." << std::endl;
	std::cout << "\t\t\t  W,S,A,D --------- Move." << std::endl;
	std::cout << "\t\t\t  Shift + W,S,A,D - Sprint/trafe." << std::endl;
	std::cout << "\t\t\t  Spacebar -------- Jump." << std::endl;
	std::cout << "\t\t\t  Enter ----------- Fire." << std::endl;
	std::cout << "\t\t\t  1/2/3 ----------- Weapons." << std::endl;
	std::cout << "\t\t\t  R --------------- Reload." << std::endl;
	std::cout << "\t\t\t  X --------------- Command." << std::endl;
	std::cout << "\t\t\t  F --------------- Secret." << std::endl;
	std::cout << "\t\t\t  G --------------- Throw 'nade." << std::endl;
	std::cout << "\t\t\t  E --------------- Defusing." << std::endl;
	std::cout << "\t\t\t  ESC ------------- Exit." << std::endl;
	std::cout << "\t\t\t=================================" << std::endl;
	std::cout << "\t\t\t    Enter your nickname: " << std::endl; std::cin >> nickname;
	std::cout << "\t\t\t    CT Spawn: Okay, let's go!" << std::endl;
	do
	{
		key = _getch();
		if ((int)key == 119)
		{
			std::cout << "forward" << std::endl;
		}
		if ((int)key == 87)
		{
			std::cout << "sprint forward" << std::endl;
		}
		if ((int)key == 83)
		{
			std::cout << "dash backward" << std::endl;
		}
		if ((int)key == 115)
		{
			std::cout << "backward" << std::endl;
		}
		if ((int)key == 97)
		{
			std::cout << "left" << std::endl;
		}
		if ((int)key == 65)
		{
			std::cout << "strafe left" << std::endl;
		}
		if ((int)key == 100)
		{
			std::cout << "right" << std::endl;
		}
		if ((int)key == 68)
		{
			std::cout << "strafe right" << std::endl;
		}
		if ((int)key == 32)
		{
			std::cout << "jump" << std::endl;
		}
		if ((int)key == 101)
		{
			score++;
			score = score + 100;
			std::cout << "BOMB HAS BEEN DEFUSED!" << std::endl;
		}
		if ((int)key == 102)
		{
			std::cout << "Respect+" << std::endl;
			score++;
		}
		if ((int)key == 103)
		{
			frags++;
			std::cout << nickname << ": FIRE IN THE HOLE!!......(((BANG!!!!)))" << std::endl;
			armor--;
		}
		if ((int)key == 113)
		{
			std::cout << "switched to Glock" << std::endl;
		}
		if ((int)key == 81)
		{
			std::cout << "switched to M4A1" << std::endl;
		}
		if ((int)key == 114)
		{
			std::cout << "*CLICK-CLACK* Weapon reloaded!" << std::endl;
		}
		if ((int)key == 49)
		{
			std::cout << "Weapon: M4A1" << std::endl;
		}
		if ((int)key == 50)
		{
			std::cout << "Weapon: Glock" << std::endl;
		}
		if ((int)key == 51)
		{
			std::cout << "Weapon: Knife" << std::endl;
		}
		if ((int)key == 120)
		{
			std::cout << nickname << ": Go! Go! Go!\n BOT Kevin: Roger!\n  BOT Perry: Affirmative!\n   BOT Cecil: Roger that!" << std::endl;
		}
		if ((int)key == 13)
		{
			frags++;
			std::cout << "PEW!!!" << std::endl;
		}
		if ((int)key == 9)
		{
			std::cout << " Player: " << nickname << std::endl;
			std::cout << " ---------------------- " << std::endl;
			std::cout << "  100HP / " << armor << " Armor\n  Kills: " << frags << "\t\t  " << std::endl;
			std::cout << "  XP:" << score << "\t\t\t  " << std::endl;
			std::cout << " ---------------------- " << std::endl;
		}
	} while ((int)key != 27);
	std::cout << "\n\t\t\t  ==== Counter Terrorists WIN! ====" << std::endl;
}



