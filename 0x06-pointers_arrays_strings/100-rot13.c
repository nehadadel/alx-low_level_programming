/**
 * rot13 - change letters to ROT13.
 * @s: analized string.
 *
 * Return: String with all letters in ROT13 base.
 */
char *rot13(char *s)
{
int index_s, index_l;
char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char r_letters[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (index_s = 0; *(s + index_s) != '\0'; index_s++)
{
for (index_l = 0; index_l < 56; index_l++)
{
if (*(s + index_s) == letters[index_l])
{
*(s + index_s) = r_letters[index_l];
break;
}
}
}
return (s);
}
