#include "binary_trees.h"

/**
* binary_tree_preorder - Analyses the binary tree using pre-order.
* @tree: A pointer for the root node to use pre-order.
* @func: A pointer to call for all nodes.
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
