#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree.
 * Return: Height of the tree, or 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: Pointer to the root node of the tree.
 * Return: Size of the tree, or 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
	return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}

/**
 * power - Calculates the power of a number.
 *
 * @base: Base number.
 * @exp: Exponent.
 * Return: Result of base raised to exp.
 */

int power(int base, int exp)
{
	int result = 1;

	while (exp > 0)
	{
		result *= base;
		exp--;
	}

	return (result);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, expected_size;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);

	size = binary_tree_size(tree);

	expected_size = power(2, height) - 1;

	return (size == expected_size);
}
