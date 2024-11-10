#include "libft.h"
#include <stdio.h>
#include <string.h>

void	del(void *s)
{
	free(s);
}

void	f(void *s)
{
	while (*((char *)s))
	{
		*((char *)s) += 1;
		s++;
	}
}

void	*f2(void *s)
{
	void	*tmp;

	tmp = strdup(s);
	return (memset(tmp, 'c', strlen(tmp)));
}

int	main(void)
{
	t_list *node = ft_lstnew(ft_strdup("I was the head"));
	if (!node)
	{
		puts("new failed");
		return (0);
	}

	ft_lstadd_front(&node, ft_lstnew(ft_strdup("now I am!")));
	if (strcmp(node->content, "now I am!") || strcmp(node->next->content,
			"I was the head"))
	{
		printf("add front failed %s || %s", node->content, node->next->content);
		return (0);
	}

	int size = ft_lstsize(node);
	if (size != 2)
	{
		puts("size failed");
		return (0);
	}

	t_list *last = ft_lstlast(node);
	if (strcmp(last->content, "I was the head"))
	{
		puts("last failed");
		return (0);
	}

	ft_lstadd_back(&node, ft_lstnew(ft_strdup("I always been the last")));
	t_list *test_last = ft_lstlast(node);
	if (strcmp(test_last->content, "I always been the last"))
	{
		puts("add back failed");
		return (0);
	}

	char *str = "now I am!";
	ft_lstiter(node, f);
	if (!strcmp(str, node->content))
	{
		puts("iter failed");
		return (0);
	}

	t_list *next = node->next;
	ft_lstdelone(node, del);
	node = next;

	if (!node || !node->content)
	{
		puts("empty list");
		return (0);
	}

	// t_list *new = ft_lstmap(node, f2, del);
	// if (new == node || !strcmp(new->content, node->content)) {
	//     puts("map failed");
	//     return (0);
	// }


	// node = next;
	// next = node->next;
	// if (next) {
	//     puts("clear failed");
	//     return (0);
	// }
}