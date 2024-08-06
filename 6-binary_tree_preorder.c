#include "binary_trees.h"

/**
* binary_tree_preorder - Analyses the binary tree using pre-order.
* @tree: A pointer for the root node to use pre-order.
* @func: A pointer to call for all nodes.
*/

int binary_tree_is_root(const binary_tree_t *node);
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}