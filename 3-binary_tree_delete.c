#include "binary_trees.h"

/**
 * binary_tree_delete - delete a tree
 * @tree: pointer to tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree->right != NULL)
		free(tree->right);
	else if (tree->left != NULL)
		free(tree->left);
	else
		free(tree);
}
