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

		~Tree(){}

		void add_node()
		{
			T x;
			cout << " Введите строку: ";
			if (!(cin >> x))
			{
				throw string(" Данные введены неверно, повторите\n");
			}
			else add_node(root, x);
		}

		void Show()
		{
			if (root == 0)
			{
				cout << " Дерево не содержит элементов";
			}
			else
			{
				cout << " Элементы дерева: ";
				Show(root);
			}
		}

		void Delete()
		{
			Delete(root);
			cout << " Дерево удалено\n";
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

		void Delete(Node *node)
		{
			if (node)
			{
				Delete(node->left);
				Delete(node->right);
				delete node;
			}
		}

		void Show(Node *&node)
		{
			if (node != NULL)
			{
				cout << node->val << " ";
				Show(node->right);
				Show(node->left);
			}
		}
	};
}