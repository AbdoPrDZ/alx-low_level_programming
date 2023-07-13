#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: the pointer.
 * @old_size: the old size.
 * @new_size: the new size.
 * Return: reallocated pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, csize;

	void *nptr;

	char *cptr, *cnptr;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	if (ptr != NULL)
	{
		cptr = (char *)ptr;
		cnptr = (char *)nptr;

		if (old_size < new_size)
			csize = old_size;
		else
			csize = new_size;

		for (i = 0; i < csize; i++)
			cnptr[i] = cptr[i];

		free(ptr);
	}

	return (nptr);
}
