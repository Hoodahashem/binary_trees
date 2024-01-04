#include "binary_trees.h"
/**
 * heightagain - function that calc the height
 * @tree:the root
 * Return: an int
*/
int heightagain(const binary_tree_t *tree)
{
	int left, right;

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
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		int right = heightagain(tree->right);
		int left = heightagain(tree->left);

		return (left - right);
	}
}
