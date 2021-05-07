#include <stdio.h>
#include <stdlib.h>

int     get_grade(char *str, int n)
{
    int i;
    int grade;

    grade = 0;
    i = 0;
    while (i <= (n - 1) / 2)
    {
        if (str[i] != str[n - 1 - i])
            grade++;
        i++;
    }
    return (grade);
} // grade score of the given string

int     main(void)
{
    int     t;
    int     n;
    int     k;
    int     grade;
    int     index;
    char    *s;

    index = 0;
    scanf("%d", &t);
    while (index < t)
    {
        scanf("%d %d", &n, &k);
        s = malloc(sizeof(char) * (n + 1));
        // used malloc + free (to save memory / reset useless memory every iterating time)
        scanf("%s", s);
        grade = get_grade(s, n);
        if (grade == k)
            printf("Case #%d: 0\n", index + 1);
        else
            printf("Case #%d: %d\n", index + 1, abs(grade - k));
        // if K is less or more than the grade result, the diff value will be the total count of change of each Alphabet
        // so i used abs() to get diff in positive int
        free(s);
        index++;
    }
    return (0);
}