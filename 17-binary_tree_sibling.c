#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds if a node is sibling
 * @bt_node: node to check
 * Return: The sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *bt_node)
{
	if (bt_node == NULL || bt_node->parent == NULL)
	{
		return (NULL);
	}
	if (bt_node->parent->left == bt_node)
		return (bt_node->parent->right);
	return (bt_node->parent->left);
}
