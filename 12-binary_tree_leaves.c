#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves
 * @tree: the root
 * Return: how many leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		return (2);
	}
	else
	{
		return (1);
	}
}
