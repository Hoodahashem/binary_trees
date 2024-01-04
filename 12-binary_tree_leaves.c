#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves
 * @tree: the root
 * Return: how many leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		return (1);
	}
	else
	{
		right = binary_tree_leaves(tree->right);
		left = binary_tree_leaves(tree->left);
		return (right + left);
	}
}
