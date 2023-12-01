#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node to the left of parent
 * if left node exists make it left child of new nodeone
 * @parent: parent of new node
 * @value: value of node
 * Return: new node or null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	/*Do not use parent if its null*/
	if (parent == NULL)
	{
		return (NULL);
	}

	node = binary_tree_node(parent, value);
	/*Check if new node is not null*/
	if (node == NULL)
	{
		return (NULL);
	}
	/*Check if parent already has a left child*/
	if (parent->left != NULL)
	{
		/*Set new node as left*/
		node->left = parent->left;
		/*Set old left as left child of new node*/
		parent->left->parent = node;
	}
	/*Set new node as left child of pare*/
	parent->left = node;
	return (node);
}

