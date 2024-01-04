#include "binary_trees.h"

/**
 * binary_tree_depth - the depth function
 * @tree: the node
 * Return: the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		right = binary_tree_depth(tree->right);
		left = binary_tree_depth(tree->left);
		return ((left >= right) ? left : right);
	}
}
