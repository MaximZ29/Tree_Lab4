#include <iostream>
#include <conio.h>
#include <string>
#include "Tree.h"


using namespace std;
using program::Tree;

	
int main()
{
	setlocale(LC_ALL, "Rus");
	int height;

		Tree <string> tree;
		cout << "¬ведите высоту дерева: ";
		cin >> height;
		while (height)
			{
				tree.add_node();
				height--;
			}
		cout << endl;
		
		tree.show();
		tree.search();
	
	system("pause");
	return 0;
}
	