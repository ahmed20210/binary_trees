#include "binary_trees.h"
/**
 * binary_tree_nodes - function that returns # of nodes in a tree with children
 * @root: tree to check
 * Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *root)
{

	size_t  node = 0;

	if (root == NULL)
	{
		return (0);
	}
	else
	{
		node += ((root->left || root->right) ? 1 : 0);
		node += binary_tree_nodes(root->left);
		node += binary_tree_nodes(root->right);
		return (node);
	}
}
