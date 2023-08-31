#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds if a node is sibling
 * @bt_node: node to check
 * Return: The uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *bt_node)
{
	if (bt_node == NULL || bt_node->parent == NULL || bt_node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (bt_node->parent->parent->left == bt_node->parent)
		return (bt_node->parent->parent->right);
	return (bt_node->parent->parent->left);
}
