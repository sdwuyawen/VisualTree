#include <iostream>
#include <vector>
#include "bst.h"
#include "VisualTree.h"


int main(int argc, char*argv[])
{
	typedef int					ValueType;
	typedef TreeNode<ValueType> NodeType;

	std::queue<ValueType>			 values;
	BSTree<ValueType>				 tree;
	VisualTree<NodeType, ValueType>  vtree(&NodeType::parent, 
											&NodeType::left, 
											&NodeType::right,
											&NodeType::val);
 
	ValueType vec[21];

	int num = sizeof(vec)/sizeof(vec[0]);
	for (int i = 0; i < num; ++i) {
		vec[i] = i;
	}

	srand(time(NULL));
	int j = 0;
    for (int i = 0; i < num; ++i) {
		do {
			j = rand() % num;
		} while (vec[j] == -1);

		tree.insert(vec[j]);
        std::cout << "insert : " << vec[j] << std::endl;
		vtree.draw(tree.root());
		vec[j] = -1;
    }

    return 0;   
}
