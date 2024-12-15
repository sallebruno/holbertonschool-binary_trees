#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
        int n;
        struct binary_tree_s *parent;
        struct binary_tree_s *left;
        struct binary_tree_s *right;
} binary_tree_t;

/**
 * binary_tree_height - Measures the height
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree, if tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t left_height, right_height;

        if (!tree || (!tree->left && !tree->right))
                return 0;

        left_height = binary_tree_height(tree->left);
        right_height = binary_tree_height(tree->right);

        return (left_height > right_height ? left_height : right_height) + 1;
}
