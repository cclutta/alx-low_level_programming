/**
 * *reverse_array -  that copies a string.
 * @a: param pointer to a char
 * @n: int
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}

}
