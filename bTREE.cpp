#include "bTREE.h"


//look at descriptions in pMT.h for guidance on what you might need for these function to actually do
bTREE::bTREE()
{
	for (int i = 1; i <= numOfNodes; i++)
		bTREE::insert("null", 0);
}

bTREE::~bTREE()
{
}

int bTREE::dataInserted(treeNode* node)
{
	if (node == nullptr) return 0;
	else return 1 + dataInserted(node->left) + dataInserted(node->right);
}

int bTREE::numberOfNodes()
{
	return numOfNodes;
}

void bTREE::setNext()
{
	bool done = false;
	while (!done)
	{
		if (root->left == nullptr)
		{
			next = root->left;
			done = true;
			break;
		}
		else if ((root->left != nullptr) && (root->right == nullptr))
		{
			next = root->right;
			done = true;
			break;
		}


	}
}

int bTREE::insert(string data, int time)
{
	treeNode temp;
	temp.data = data;
	temp.time = time;
	temp.left, temp.right = nullptr;
	temp.isLeaf = 1;

	if (numberOfNodes() == 0)
	{
		next = temp.left;	//may cause errors
		root = &temp;
	}
	else  //this should add temp where next points and set next
	{
		treeNode *tmpptr = next;
		*tmpptr = temp;
		setNext();
	}
	numOfNodes++;
	return 1;
}

int bTREE::recFind(treeNode *node, string d)
{
	if (node->data == d) return 1;
	else return recFind(node->left, d) + recFind(node->right, d);
}

int bTREE::find(string str)
{
	return recFind(root, str);
}



int bTREE::locate(string s)
{
	
	return recLocate(root,s, 0);
}

int bTREE::recLocate(treeNode* node, string s, int count)
{
	if (s == node->data) return count ;
	else
	{
		count++;
		return recLocate(node->left, s, count) + recLocate(node->right, s, count);
	}
}

bool operator ==(const bTREE& lhs, const bTREE& rhs)
{
	if (lhs == rhs)
		return true;
	else
		return false;
}

bool operator !=(const bTREE& lhs, const bTREE& rhs)
{
	if (lhs != rhs)
		return true;
	else
		return false;
}

std::ostream& operator <<(std::ostream& out, const bTREE& p)
{
	return;
}
