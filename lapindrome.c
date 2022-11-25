#include <stdio.h>

#define BOOL unsigned char
#define TRUE 1
#define FALSE 0

unsigned string_length(char *string)
{
    unsigned counter = 0;

    while (string[counter++] != '\0') { }

    return counter - 1;
}

BOOL are_equal(unsigned *a, unsigned *b, int size)
{
    int i;
    for (i = 0; i < size; ++i)
    {
        if (a[i] != b[i])
        {
            return FALSE;
        }
    }

    return TRUE;
}

BOOL is_lapindrome(char *string)
{
    unsigned left[26] = { 0 }, right[26] = { 0 },
             str_len = string_length(string);

    if (str_len < 2)
    {
        return FALSE;
    }

    int i;
    for (i = 0; i <= str_len / 2 - 1; ++i)
    {
        left[string[i] - 'a']++;
    }

    for (i = (str_len + 1) / 2; i < str_len; ++i)
    {
        right[string[i] - 'a']++;
    }

    return are_equal(left, right, 26);
}
int main()
{
    char *list[6] =
    {
        "gaga",
        "abcde",
        "rotor",
        "xyzxy",
        "abbaab",
        "ababc"
    };

    int i;
    for (i = 0; i < 6; ++i)
    {
        printf("%s\n", is_lapindrome(list[i]) == TRUE ? "YES" : "NO");
    }

    return 0;
}