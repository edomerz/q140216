#include <stdio.h>
#include "q140216.h"
	
int main(int argc, char* argv[], char** envp)
{
	
	return(0);
}

TreeNode *LL2Tree(ListNode *list, size_t list_num)
{
	size_t i = list_num;
	if(!list)
	{
		return(NULL);
	}

	if(!list->next)
	{
		return(list);
	}

	if(list_num == 1)
	{
		return(root);
	}

	LL2Tree(root->next, list_num / 2);

}

/*TreeNode *TreeMiddle(TreeNode *root, size_t list_num)
{
	if(list_num == 1)
	{
		return(root);
	}
	TreeMiddle(root->next, list_num / 2);

	return(root);
}*/
