#include "menus.h"

menus::menus()
{
	menu page(0);
	menu_list.push_back(page);
	page_num = 1;
}

void menus::add_page()
{
	menu page((page_num)*15);
	menu_list.push_back(page);
	page_num++;
}

void menus::add_game(string name, p game_sub)
{
	list<menu>::iterator last_it=menu_list.end();
	last_it--;
	list<menu>::iterator new_it;
	if (!(last_it->add_game(name, game_sub)))
	{
		add_page();
		new_it = menu_list.end();
		new_it--;
		last_it=new_it;
		last_it--;
		new_it->add_game(name, game_sub);
		new_it->set_lastmenu(*last_it);
		last_it->set_nextmenu(*new_it);
	}
}
void menus::print_menu()
{
	list<menu>::iterator it = menu_list.begin();
	it->choose_game();
}
