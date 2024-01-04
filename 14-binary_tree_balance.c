#include "binary_trees.h"
/**
 * binary_tree_balance - culculate the BF
 * @tree: the root
 * Return: the result
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t right = binary_tree_height(tree->right);
		size_t left = binary_tree_height(tree->left);

		return ((int)(left - right));
	}
}
