#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: a pointer to the root node of the tree to count the number of leaves.
 *
 * Return: 0 - if tree is NULL.
 *	   Otherwise, the number of leaves in the binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	leaves += (!tree->left && !tree->right) ? 1 : 0;
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
