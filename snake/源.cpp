#include <iostream>
#include "menus.h"//游戏菜单接口,支持多页
#include "snake.h"
menus menu1;
void lsd() { std::cout << "游戏未完成!!"; system("pause"); }
void menu_init()
{
	menu1.add_game("贪吃蛇",welcome);
	menu1.add_game("俄罗斯方块", lsd);
}
void show_menu()
{
	menu1.print_menu();
}
void main()
{
	menu_init();
	show_menu();
}