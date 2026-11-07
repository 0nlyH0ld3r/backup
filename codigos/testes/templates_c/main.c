#include <stdio.h>
#include <stdlib.h>


#define CREATE_LINKED_LIST(tipo) 										\
struct node_ ## tipo {													\
	tipo key;															\
	struct node_ ## tipo *next;											\
};																		\
																		\
struct linked_ ## tipo {												\
	struct node_ ## tipo *head;											\
	size_t size;														\
};																		\
																		\
																		\
tipo get(struct linked_ ## tipo list, size_t index)						\
{																		\
	struct node_ ## tipo *node = list.head;								\
	while (index > 0) {													\
		if (node->next == NULL) {										\
			perror("Index out of linked list bounds inside of get()");	\
			exit(1);													\
		}																\
																		\
		node = node->next;												\
		--index;														\
	}																	\
	return node->key;													\
}

CREATE_LINKED_LIST(int);
