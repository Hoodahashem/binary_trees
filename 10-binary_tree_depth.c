#include "binary_trees.h"

/**
 * binary_tree_depth - the depth function
 * @tree: the node
 * Return: the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dep;

	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->parent == NULL)
	{
		return (0);
	}
	else
	{
		dep = binary_tree_depth(tree->parent);
		return (dep + 1);
	}
}
