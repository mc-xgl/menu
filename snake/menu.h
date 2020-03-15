#pragma once
#include	<iostream>
#include <list>
#include <string>
using std::list;
using std::string;
typedef void (*p)();
class menu
{
private:	
	std::list<std::string> game_name;
	std::list<p> game_subject;
	int grade;
	int game_num;
	menu* next_menu;
	menu* last_menu;
public:
	menu(std::string name,p subject,int grade);
	menu(int grade);
	int add_game(string name, p subject);
	void choose_game();
	void set_lastmenu(menu &last_menu);
	void set_nextmenu(menu& next_menu);
};

