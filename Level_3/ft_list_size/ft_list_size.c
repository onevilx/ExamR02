#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	if (begin_list == 0)
		return (0);
	else
		return (1 + ft_list_size(begin_list->next));
}
int main() {
    t_list *list = NULL;

    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    node1->data = "First";
    node1->next = node2;

    node2->data = "Second";
    node2->next = node3;

    node3->data = "Third";
    node3->next = NULL;

    list = node1;

    printf("List size: %d\n", ft_list_size(list));

    free(node1);
    free(node2);
    free(node3);

    return 0;
}
