#include <iostream>
#include "menus.h"//��Ϸ�˵��ӿ�,֧�ֶ�ҳ
#include "snake.h"
menus menu1;
void lsd() { std::cout << "��Ϸδ���!!"; system("pause"); }
void menu_init()
{
	menu1.add_game("̰����",welcome);
	menu1.add_game("����˹����", lsd);
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