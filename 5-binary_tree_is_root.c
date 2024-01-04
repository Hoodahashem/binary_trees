#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if root
 * @node: the node to check
 * Return: 1 if tree 0 otherwise
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent != NULL)
	{
		return (0);
	}
	return (1);
}
