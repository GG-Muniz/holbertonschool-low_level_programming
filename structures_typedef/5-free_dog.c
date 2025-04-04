#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to dog to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* Free the copied strings */
	free(d->name);
	free(d->owner);

	/* Free the dog structure itself */
	free(d);
}
