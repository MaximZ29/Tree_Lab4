#pragma once

#include <cstring>
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
		int n = 0;

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
			cout << "������� ������� ������: ";
			cin >> x; 
			add_node(root, x);
		}

		void show()
		{
			if (root == 0)
			{
				cout << "������ �� �������� ���������\n";
			}
			else
			{
				cout << "�������� ������: " << endl;
				show(root);
				cout << endl;
			}
		}

		void del()
		{
			del(root);
			cout << "������ �������\n";
			root = NULL;
		}

		void search()
		{
			T data;
			cout << "\n������� ������ ������: ";
			cin >> data;
			cout << endl;
			if (search(root, data) == 0) 
				cout << "����� ������ ��� \n" << endl;
			else
				cout << "������ ������� \n" << endl;
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
				if (x.size() < node->val.size())
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

		int search(Node *node, T data)
		{
			if (node->val == data) {
				n++;
			}
			else
			{
				if (node->right != NULL)
					search(node->right, data);
				
				if (node->left != NULL)
					search(node->left, data);
			}
			return n;
		}
	};
}