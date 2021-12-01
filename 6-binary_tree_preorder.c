#include "binary_trees.h"

/**
 * binary_tree_preorder - function that creates a binary tree node
 * @tree: pointer to the parent node of the node to create
 * @func: pointer of function
 * Return: pointer to the new node, or NULL on failure
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
