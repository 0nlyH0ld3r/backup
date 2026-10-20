#include <sys/types.h>

#define MAKE_INSERTION_SORT(tipo) 			\
int insertion_sort_##tipo((tipo) *arr, size_t n) 	\
{ 							\
	for (size_t i = 1; i < n; ++i) { 		\
		(tipo) tmp = arr[i]; 			\
		size_t j = i; 				\
		while (tmp < arr[j-1] && j > 0) { 	\
			arr[j] = arr[j-1]; 		\
			--j; 				\
		} 					\
		arr[j] = tmp; 				\
	} 						\
	return 0; 					\
}
