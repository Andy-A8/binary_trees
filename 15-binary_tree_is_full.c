#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree if full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 - if tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);

		return (left && right);
	}

	return (0);
}
