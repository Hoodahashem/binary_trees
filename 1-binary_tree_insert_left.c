#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that creates a node and insert it
 * in the left sid e of the root
 * @parent: the root
 * @value: the value that i'll put it in the new node
 * Return: return a pointer to the created node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (!parent)
	{
		return (NULL);
	}
	binary_tree_t *new_left = malloc(sizeof(binary_tree_t));

	if (!new_left)
	{
		return (NULL);
	}
	if (!parent->left)
	{
		new_left = binary_tree_node(parent, value);
		parent->left = new_left;
	}
	else if (parent->left)
	{
		binary_tree_t *aux = parent->left;

		new_left = binary_tree_node(parent, value);
		parent->left = new_left;
		new_left->left = aux;
	}
	return (new_left);
}
