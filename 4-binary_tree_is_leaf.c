#include "binary_trees.h"
/**
 * binary_tree_is_leaf - know if a node is a leaf, that means that the node
 * does not have any child neither left nor right
 * @bt_node: bt_node to study
 * Return: 1 if it is a leaf or 0 if it is not
 */
int binary_tree_is_leaf(const binary_tree_t *bt_node)
{
	if (bt_node == NULL)
		return (0);
	if (bt_node->left == NULL && bt_node->right == NULL)
		return (1);
	return (0);
}
