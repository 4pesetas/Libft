#include <stdio.h>
#include <string.h>
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;

    // Compare characters within the limit 'n'
    while (i < n && s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);  // Return the difference immediately
        i++;
    }

    // If no difference is found, return 0 or compare '\0' characters if needed
    if (i < n)
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);
    
    return 0;  // If strings are equal up to 'n', return 0
}

int main()
{
    char s1[] = "abcd";
    char s2[] = "abaa";
    int result = ft_strncmp(s2, s1, 3);
    printf("%d\n", result);

    char c1[] = "abcd";
    char c2[] = "abaa";
    int result2 = strncmp(c2, c1, 4);
    printf("%d\n", result2);

    return 0;
}