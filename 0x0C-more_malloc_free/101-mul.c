#include <stdio.h>
#include <stdlib.h>

int _isdigit(int c)
{
    return c >= '0' && c <= '9';
}

int _strlen(char *s)
{
    int length = 0;
    while (s[length] != '\0')
    {
        length++;
    }
    return length;
}

void _multiply(char *num1, char *num2)
{
    int len1 = _strlen(num1);
    int len2 = _strlen(num2);
    int *result = malloc(sizeof(int) * (len1 + len2));
    if (result == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    int i, j, carry, digit1, digit2, product;
    for (i = 0; i < len1 + len2; i++)
    {
        result[i] = 0;
    }

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        digit1 = num1[i] - '0';

        for (j = len2 - 1; j >= 0; j--)
        {
            digit2 = num2[j] - '0';
            product = digit1 * digit2 + result[i + j + 1] + carry;
            result[i + j + 1] = product % 10;
            carry = product / 10;
        }
        result[i] += carry;
    }

    int start = 0;
    while (start < len1 + len2 && result[start] == 0)
    {
        start++;
    }
    if (start == len1 + len2)
    {
        printf("0\n");
    }
    else
    {
        for (i = start; i < len1 + len2; i++)
        {
            printf("%d", result[i]);
        }
        printf("\n");
    }

    free(result);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    int i;
    for (i = 0; num1[i] != '\0'; i++)
    {
        if (!_isdigit(num1[i]))
        {
            printf("Error\n");
            return 98;
        }
    }

    for (i = 0; num2[i] != '\0'; i++)
    {
        if (!_isdigit(num2[i]))
        {
            printf("Error\n");
            return 98;
        }
    }

    _multiply(num1, num2);

    return 0;
}

