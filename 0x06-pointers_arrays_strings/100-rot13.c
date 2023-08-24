/**
 * rot13 - change letters to ROT13.
 * @s: analized string.
 *
 * Return: String with all letters in ROT13 base.
 */
char *rot13(char *s)
{
int index_s, index_l;
char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char r_letters[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (index_s = 0; *(s + index_s) != '\0'; index_s++)
{
for (index_l = 0; index_l < 28; index_l++)
{
if (*(s + index_s) == letter[index_l])
{
*(s + index_s) = r_letters[index_l];
}
}
}
return (s);
}
