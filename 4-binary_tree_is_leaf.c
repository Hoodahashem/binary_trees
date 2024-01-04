#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if leaf
 * @node: the node to check
 * Return: 1 if leaf 0 otherwise
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left != NULL || node->right != NULL)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
