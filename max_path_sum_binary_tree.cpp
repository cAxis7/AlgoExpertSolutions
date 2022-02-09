#include <vector>
#include <algorithm>
using namespace std;

class BinaryTree {
public:
  int value;
  BinaryTree *left;
  BinaryTree *right;

  BinaryTree(int value);
  void insert(vector<int> values, int i = 0);
};

int maxi;

int maxPathSum(BinaryTree *tree) {
  // Write your code here.
	int l = numeric_limits<int>::min();
	int r = numeric_limits<int>::min();
	int n = tree -> value;
	
	if(tree->left != nullptr){l = tree->value + maxPathSum(tree->left);}
	if(tree->right != nullptr){r = tree->value + maxPathSum(tree->right);}
	
	
	if(l != numeric_limits<int>::min()) n += l;
	if(r != numeric_limits<int>::min()) n += r;
	
	if(n > maxi) maxi = n;
	
	if(l != numeric_limits<int>::min()){
		if(r != numeric_limits<int>::min()){
			return (tree -> value) + max(l, r);
		}
	}
  return n;
}

int maxPathSum(BinaryTree tree) {
  // Write your code here.
	int n = tree.value;`
	maxi = numeric_limits<int>::min();
	
	if(tree.left != nullptr){
		n += maxPathSum(tree.left);
	}
	if(tree.right != nullptr){
		n += maxPathSum(tree.right);
	}
	
	if(n > maxi) maxi = n;
	
  return maxi;
}
