#include "binary_trees.h"
/**
 * binary_tree_delete - free an entire tree recursively
 * @tree: tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/*If tree is null return*/
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}

}
