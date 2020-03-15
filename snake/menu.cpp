#include "menu.h"

menu::menu(std::string name,p subject,int grade)
{
	game_name.clear();
	game_subject.clear();
	game_name.push_back(name);
	game_subject.push_back(subject);
	this->grade = grade;
	game_num = 1;
}

menu::menu(int grade)
{
	this->grade = grade;
	game_num = 0;
	next_menu = NULL;
	last_menu = NULL;
}

int menu::add_game(string name, p subject)
{
	if (game_num < 15)
	{
		game_name.push_back(name);
		game_subject.push_back(subject);
		game_num++;
		return true;
	}
	return false;
}

void menu::choose_game()
{
	p name_sub[15];
	int i = grade;
	int k;
	int last_num=-1;
	int next_num=-1;
	list<string>::iterator it_name = game_name.begin();
	list<p>::iterator it_sub = game_subject.begin();
	system("cls");
	std::cout << "**************************��Ϸ�б�*************************" << std::endl;
	for (; it_name != game_name.end() && it_sub != game_subject.end();  it_name++, it_sub++)
	{
		name_sub[i - grade] = *it_sub;
		std::cout << i << "." << *it_name << std::endl;
		i++;
	}
	if (last_menu != NULL) {
		last_num = i;
		std::cout << last_num << "." << "��һҳ" << std::endl;
	}
	if (next_menu != NULL) {
		if (last_num != -1)next_num = last_num + 1;
		else next_num = i;
		std::cout << next_num << "." << "��һҳ" << std::endl;
	}
	std::cout << "��������Ϸѡ��:" << std::endl;
	http:	std::cin >> k;
	if (k ==  last_num&& last_menu != NULL)
		last_menu->choose_game();
	else if (k == next_num && next_menu != NULL)
		next_menu->choose_game();
	else if (k <= grade + game_num && k >= grade)
	{
			name_sub[k - grade]();
	}
	else 
	{
		std::cout << "ѡ�����,������ѡ��:" << std::endl;
		goto http;
	}
	this->choose_game();
}

void menu::set_lastmenu(menu &last_menu)
{
	this->last_menu = &last_menu;
}
void menu::set_nextmenu(menu& next_menu)
{
	this->next_menu = &next_menu;
}

