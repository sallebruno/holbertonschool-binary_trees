#include "binary_trees.h"

/**
* binary_tree_balance - It is a function that measures,
*	especifically the balance factor of a binary tree.
* @tree: It is pointer to the root node of the tree measure the balance factor.
* Return: If tree isn´t null, return the balance factor
*					Otherwise return 0.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}

/**
* binary_tree_height - It is a function that measures,
*		especifically the height of a binary tree.
* @tree: It is pointer to the root node of the tree measure the height.
* Return: If tree isn´t null return height,
*				Otherwise return 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree);
	{

	}
	return (0);
}
