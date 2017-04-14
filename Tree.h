#pragma once

#include <iostream>

namespace program
{
	template <class T>
	class Tree
	{
		struct Node
		{
			T val;
			Node *left;
			Node *right;
			Node() : left(0), right(0){};
		};
		Node *root;

	public:
		Tree()
		{
			root = NULL;
		};

		~Tree()
		{
			
		}

		void add_node()
		{
			T x;
			cout << "Введите элемент дерева: ";
			cin >> x; 
			add_node(root, x);
		}

		void show()
		{
			if (root == 0)
			{
				cout << "Дерево не содержит элементов\n";
			}
			else
			{
				cout << "Элементы дерева: ";
				show(root);
				cout << endl;
			}
		}

		void del()
		{
			del(root);
			cout << "Дерево удалено\n";
			root = NULL;
			
		}

	private:
		void add_node(Node *&node, const T &x)
		{
			if (node == NULL)
			{
				node = new Node;
				node->val = x;
			}
			else
			{
				if (x < node->val)
				{
					add_node(node->left, x);
				}
				else
				{
					add_node(node->right, x);
				}
			}
		}

		void del(Node *node)
		{
			if (node)
			{
				del(node->left);
				del(node->right);
				delete node;
			}
		}

		void show(Node *&node)
		{
			if (node != NULL)
			{
				cout << node->val << " ";
				show(node->right);
				show(node->left);
			}
		}
	};
}