#include "binary_trees.h"
/**
 * binary_tree_size - function that return the size of a tree
 * @root: tree to check
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *root)
{
	size_t size = 0, r = 0, l = 0;

	if (root == NULL)
	{
		return (0);
	}
	else
	{
		l = binary_tree_size(root->left);
		r = binary_tree_size(root->right);
		size = r + l + 1;
	}
	return (size);
}
