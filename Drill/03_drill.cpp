// 03_drill.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <iostream>
#include <string>

int main()
{
	std::string letter = "";
	std::string first_name = "???";
	std::string friend_name = "???";
	char friend_sex = 0;
	std::string word = "???";
	int age = -1;
	std::string additional_msg = "";

	std::cout << "Enter the name of the person you want to write to\n";
	std::cin >> first_name;
	letter = "Dear " + first_name + ",\n";
	letter += "How are you? I am fine. I miss you.\n";
	letter += "I am hungry.\n";
	std::cout << "Enter the name of another friend\n";
	std::cin >> friend_name;
	letter += "Have you seen " + friend_name + " lately?\n";
	std::cout << "Enter m if the friend is male and f if the friend is female\n";
	std::cin >> friend_sex;
	if (friend_sex == 'm') word = "him";
	else if (friend_sex == 'f') word = "her";
	letter += "If you see " + friend_name + " please ask " + word + " to call me.";
	std::cout << "Enter the age of the recipient\n";
	std::cin >> age;
	if (age <= 0 || age >= 110) std::cout << "you're kidding!\n";
	else letter += " I hear you just had a birthday and you are " + std::to_string(age) + " years old.\n";
	if (age < 12)
		additional_msg = "Next year you will be " + std::to_string(age+1) + ".\n";
	else if (age == 17)
		additional_msg = "Next year you will be able to vote.\n";
	else if (age > 70)
		additional_msg = "I hope you are enjoying retirement.\n";

	letter += additional_msg + "Yours sincerely,\n\nMichael\n";
	std::cout << "\n\n" << letter;

	return 0;
}