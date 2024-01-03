#include "binary_trees.h"
/**
 * binary_tree_node - function that create a node
 * @parent: the root
 * @value: the value that i'll put it into the new node
 * Return: returns the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *result = malloc(sizeof(binary_tree_t));

	if (!result)
	{
		return (NULL);
	}
	else
	{
		result->n = value;
		result->left = NULL;
		result->right = NULL;
		result->parent = parent;
	}
	return (result);
}
