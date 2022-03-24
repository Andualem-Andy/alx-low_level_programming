tenates src to end of dest
 * Return: pointer to dest
 **/

char *_strcat(char *dest, char *src)
{
        int i, j;

        i = 0;

        while (dest[i] != '\0')
                i++;

        for (j = 0; src[j] != '\0'; j++)
        {
                dest[i

