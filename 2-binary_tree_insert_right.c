#include "binary_trees.h"
/**
 * binary_tree_insert_right - add a node in the right of the parent
 * @parent: parent of  node
 * @value: value of the node
 * Return: new node or null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	/*don't work with a null parent*/
	if (parent == NULL)
	{
		return (NULL);
	}

	/*initialise node*/
	node = binary_tree_node(parent, value);
	/*Check if new node is*/
	if (node == NULL)
	{
		return (NULL);
	}
	/*if parent already has a right child*/
	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);
}

