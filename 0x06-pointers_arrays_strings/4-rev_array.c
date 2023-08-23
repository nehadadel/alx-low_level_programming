/**
 * reverse_array - prints reverse array.
 *
 * @a: array to be compared.
 * @n: size of array.
 *
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
int index, temp;

if (n % 2 == 0)
{
for (index = 0; index < n / 2; index++)
{
temp = *(a + index);
*(a + index) = *(a + (n - 1 - index));
*(a + (n - 1 - index)) = temp;
}
}
else
{
for (index = 0; index < (n - 1) / 2; index++)
{
temp = *(a + index);
*(a + index) = *(a + (n - 1 - index));
*(a + (n - 1 - index)) = temp;
}
}
}
