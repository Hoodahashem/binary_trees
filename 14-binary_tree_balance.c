#include "binary_trees.h"

/**
 * heightagain - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t heightagain(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + heightagain(tree->left) : 1;
			r = tree->right ? 1 + heightagain(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)heightagain(tree->left));
		right = ((int)heightagain(tree->right));
		total = left - right;
	}
	return (total);
}
