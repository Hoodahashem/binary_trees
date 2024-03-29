#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree
 * @tree: param
 * @func: function
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
		func(tree->n);
	}
}
