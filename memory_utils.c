#include "shell.h"

/**
 * bfree - Frees a pointer and sets its address to NULL.
 * @ptr: Address of the pointer to be freed.
 * Return: 1 if freed successfully, otherwise 0.
 */

int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
