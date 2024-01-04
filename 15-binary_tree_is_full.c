#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if full
 * @tree: the root
 * Return: 1 if full 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			right = binary_tree_is_full(tree->right);
			left = binary_tree_is_full(tree->left);
			if (right == 0 || left == 0)
			{
				return (0);
			}
			return (1);
		}
		if (!tree->left && !tree->right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
