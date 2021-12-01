#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo = NULL;

	if (parent == NULL)
		return (NULL);

	nodo = binary_tree_node(parent, value);
	if (nodo == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = nodo;
	}
	else
	{
		nodo->right = parent->right;
		parent->right = nodo;
		nodo->right->parent = nodo;
	}

	return (nodo);
}
