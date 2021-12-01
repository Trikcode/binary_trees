#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, count;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left = aux_tree_height(tree->left);
	right = aux_tree_height(tree->right);

	count = left - right;
	return (count);
}

/**
 * aux_tree_height - height of binary tree
 * @tree: pointer to the root node of the tree
 * Return: height
 */

size_t aux_tree_height(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (tree == NULL)
		return (0);
	height_left = aux_tree_height(tree->left) + 1;
	height_right = aux_tree_height(tree->right) + 1;

	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}
