#include <iostream>
#include <conio.h>
#include <string>
#include "Tree.h"


using namespace std;
using program::Tree;

int main()
{
	setlocale(LC_ALL, "Rus");

	Tree <string> tree;
	cout << "Добавьте элемент в дерево\n";
	tree.add_node();
	tree.Show();

	system("pause");
	return 0;
}
	