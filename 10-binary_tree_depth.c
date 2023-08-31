#include "binary_trees.h"
/**
 * binary_tree_depth - depth of specified node from root
 * @root: node to check the depth
 * Return: 0 is it is the root or number of depth
 */
size_t binary_tree_depth(const binary_tree_t *root)
{
	return ((root && root->parent) ? 1 + binary_tree_depth(root->parent) : 0);
}
