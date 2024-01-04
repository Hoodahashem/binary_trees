#include "binary_trees.h"
/**
 * heightagain - function that calc the height
 * @tree:the root
 * Return: an int
*/
size_t heightagain(const binary_tree_t *tree)
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
		left = heightagain(tree->left);
		right = heightagain(tree->right);
		return ((left >= right) ? left + 1 : right + 1);
	}
}
/**
 * binary_tree_balance - culculate the BF
 * @tree: the root
 * Return: the result
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, result = 0;

	if (tree)
	{
		right = heightagain((int)tree->right);
		left = heightagain((int)tree->left);
	}
	result = left - right;
	return (result);
}
