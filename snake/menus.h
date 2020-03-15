#pragma once
#include "menu.h"
class menus
{
private:	
	void add_page();
	list<menu> menu_list;
	int page_num;
public:
	menus();
	void add_game(string name,p game_sub);
	void print_menu();
};

