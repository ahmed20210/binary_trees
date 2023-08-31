#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of a binary tree for a bal tree
 * @root: tree to go through
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *root)
{
	size_t l = 0;
	size_t r = 0;

	if (root == NULL)
	{
		return (0);
	}
	else
	{
		if (root)
		{
			l = root->left ? 1 + binary_tree_height_b(root->left) : 1;
			r = root->right ? 1 + binary_tree_height_b(root->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @root: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *root)
{
	int right = 0, left = 0, total = 0;

	if (root)
	{
		left = ((int)binary_tree_height_b(root->left));
		right = ((int)binary_tree_height_b(root->right));
		total = left - right;
	}
	return (total);
}
