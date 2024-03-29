#include "binary_trees.h"

/**
 * binary_tree_size - measures the size
 * @tree: the tree
 * Return: the size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeR, sizeL;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		sizeL = binary_tree_size(tree->left);
		sizeR = binary_tree_size(tree->right);
		return (sizeR + sizeL + 1);
	}
}
