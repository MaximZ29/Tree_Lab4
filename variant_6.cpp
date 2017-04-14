#include <iostream>
#include <conio.h>
#include <string>
#include "Tree.h"


using namespace std;
using program::Tree;

	
int main()
{
	setlocale(LC_ALL, "Rus");
	int k;

		Tree <string> tree;
		cout << "¬ведите размер дерева: ";
		cin >> k;
		while (k)
			{
				tree.add_node();
				k--;
			}
		cout << endl;
		
		tree.show();
		tree.search();
	
	system("pause");
	return 0;}
	