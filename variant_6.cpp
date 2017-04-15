#include <iostream>
#include <conio.h>
#include <string>
#include "Tree.h"


using namespace std;
using program::Tree;

	
int main()
{
	setlocale(LC_ALL, "Rus");
	int k,height;

		Tree <string> tree;
		cout << "¬ведите высоту дерева: ";
		cin >> k;
		height = pow(2,k) - 1;
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
	