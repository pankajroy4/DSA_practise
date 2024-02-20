#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
// {
//     char web[10] = "Geeky";
//     char site[10] = "Shows";
//     strncpy(web, site, 2);
//     printf("%s", web);
//     printf("\n%s\n", site);
// }

// if we want to assign a string inside any string_variable
// {
//     char web[20];
//     strcpy(web, "Geekyshows");
//     printf("%s", web);
// }

// strcpy - replace string to one character
// {
//     char str[10] = "Geeky";
//     strset(str, 'c');
//     printf("%s", str);
// }

// strnset
// {
//     char str[10] = "Geeky";
//     strnset(str, 'c', 2);
//     printf("%s", str);
// }

// strcmp - string compare
// if same = 0
// if greater = 1
// if smaller = -1
// {
//     int n;
//     char str[10] = "G";
//     char str1[10] = "Geek";
//     n = strcmp(str, str1);
//     printf("%d", n);
// }

// stricmp - its case insensitive
// {
//     int n;
//     char str[10] = "GEEK";
//     char str1[10] = "Geek";
//     n = stricmp(str, str1);
//     printf("%d", n);
// }

// strncmp - we can give length to compare upto
// {
//     int n;
//     char str[10] = "Geekyshows";
//     char str1[10] = "Geek";
//     n = strncmp(str, str1, 4);
//     printf("%d", n);
// }

// strcmpi - it compares and its case insensitive
// {
//     int n;
//     char str[10] = "GEeK";
//     char str1[10] = "Geek";
//     n = strcmpi(str, str1);
//     printf("%d", n);
// }

// strcat - to join two strings
// {
// int n;
// char str[10] = "Geeky";
// char str1[10] = " shows";
// strcat(str, str1);
// printf("%s", str);
// printf("%s", str1);
// char web[20] = "Geeky";
// strcat(web, " Shows");
// printf("%s", web);
// }

// strncat - we can give size too
// {
//     char str[10] = "Geeky";
//     char str1[10] = " shows";
//     strncat(str, str1, 4);
//     printf("%s", str);

// strlwr - upper-lower
// strupr - lower-upper
// {
//     char web[20] = "GeekyshowS";
//     strlwr(web);
//     printf("%s", web);
// }

// strrev - reverse string
// {
//     char web[20] = "GeekyshowS";
//     strrev(web);
//     printf("%s", web);
// }

// strspn - it compares how many characters of a string matches with other
// {
//     int n;
//     char web[20] = "Geeky";
//     char site[20] = "GeekyShows";
//     n = strspn(web, site);
//     printf("%d", n);
// }

// strchr - it starts reading the string where it found the given character
// strrchr - it does the same job but from last
// {
//     char web[100] = "GeekyShows is a very slow channel";
//     char *p;
//     p = strchr(web, 'i');
//     printf("%s", p);
// }

// strstr - returns pointer to the first occurence of the string in a given string.
// strrstr - same but from last
// {
//     char web[100] = "GeekyShows is a very slow channel";
//     char *p;
//     p = strstr(web, "is");
//     printf("%s", p);
// }

// atoi - converts strings to integer
// {
//     char str[20] = "GeekyShows";
//     int n;
//     n = atoi(str);
//     printf("%d", n);
// }

// strdup - creates duplicate of existing string
// {
//     char p[20] = "GeekyShows";
//     char *p1;
//     p1 = strdup(p);
//     printf("%s", p1);
// }

// isalpha - checks weather is alphabet or not
// {
//     char ch;
//     printf("Enter any character: ");
//     scanf("%c", &ch);

//     if (isalpha(ch))
//     {
//         printf("\nValid Character\n");
//     }
//     else
//     {
//         printf("\nInvalid character\n");
//     }
// }

// isupper - checks weather character uppercased or not
// islower - same but lower
// {
//     char ch;
//     printf("Enter any character: ");
//     scanf("%c", &ch);

//     if (isupper(ch))
//     {
//         printf("\nYOU ENTERED UPPER CASE CHARACTER\n");
//     }
//     else
//     {
//         printf("\nInvalid character\n");
//     }
// }

// isalnum - accepts alphanumeric
// isdigit - accepts only nums
// isxdigit - accepts hexadecimals only
// is space - accepts one space
// ispunct - accepts only special characters
// {
//     char ch;
//     printf("Enter any character: ");
//     scanf("%c", &ch);

//     if (isspace(ch))
//     {
//         printf("\nYOU ENTERED valid Character\n");
//     }
//     else
//     {
//         printf("\nInvalid character\n");
//     }
// }

// tolower - converts character from upper to lower
// toupper - same but opp.
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    printf("\nOutput: %c\n", tolower(ch));
}