#pragma once
#include <string>
using namespace std;

class bTREE
{
    struct treeNode
	{
        string data;
        int time;
		    treeNode* left;
		    treeNode* right;
		    bool isLeaf;
  };

private:
		//some data structure to hold your treeNodes together ...
		//DATASTUCTURE treeNodes tree;
		//any helper private variables you need
	treeNode* next;
  treeNode* root;
  int numOfNodes=0;

public:
    bTREE();
    ~bTREE();

    int dataInserted(treeNode* node);   //returns the total number of data nodes on the tree
    int numberOfNodes();

    int insert(string, int);

    int find(string);
	int recFind(treeNode *node, string d);

    int locate(string);  //if exists: # of ops    else: 0
	int recLocate(treeNode*, string, int);

	void setNext();


    friend bool operator==(const bTREE& lhs, const bTREE& rhs);
    friend bool operator!=(const bTREE& lhs, const bTREE& rhs);

    friend std::ostream& operator<<(std::ostream& out, const bTREE& p);

};
