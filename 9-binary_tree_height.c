#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the tree
 * Return: the height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	else
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		return ((left >= right) ? left + 1 : right + 1);
	}
}
