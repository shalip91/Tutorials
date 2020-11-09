#include <stdlib.h>
#include <stdio.h>
#include "string.h"


long int StrLen(char *str)
{
    long int len;
    for(len = 0; str[len]!='\0'; len++);
    return len;
}


int StrCmp(char *s1, char *s2)
{   
    int i;

    for (i = 0; s1[i] != '\0'; i++)
    {
        printf("here");
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    printf("here");
    if(s2[i] != '\0')
    {
        printf("if");
        return ('\0' - s2[i]);
    }
    
    return 0;
}


char *StrCpy(char *dest, char *src)
{
    int i;
    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    
    dest[i] = '\0';
    return dest;
}


char *StrNCpy(char *dest, const char *src, size_t n)
{
    size_t i;
    size_t len_src;
    for (len_src = 0; src[len_src] != '\0'; len_src++);

    for (i = 0; i < n; i++)
    {
        if (i > len_src)
            dest[i] = '\0';
        else
            dest[i] = src[i];
    }

    dest[i] = '\0';
    return dest;
}


char LowerCase(char c)
{
    if(c >= 'A' && c <='Z')
        return c -('A' - 'a');
    
    return c;
    
}

int StrCaseCmp(char *s1, char *s2)
{   
    int len1;

    for (len1 = 0; s1[len1] != '\0'; len1++)
        if (LowerCase(s1[len1]) != LowerCase(s2[len1]))
            return (LowerCase(s1[len1]) - LowerCase(s2[len1]));
    
    if(s2[len1] != '\0')
        return ('\0' - s2[len1]);
    
    return 0;
}


char *StrChr(char *str, int c)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            return (str + i);
    
    return NULL;
}


char *StrDup(char *string)
{   
    int i;
    int len = StrLen(string);
    char *dst = (char *)malloc(len * sizeof(char));

    for(i = 0; i < len; i++)
        dst[i] = string[i];
    
    return dst;
}


char *StrCat(char *dest, const char *src)
{   
    int i;
    int len_dest = StrLen(dest);
    
    for(i = 0; src[i] != '\0'; i++)
        dest[len_dest + i] = src[i];
    
    dest[len_dest + i] = '\0';

    return dest;
}


char *StrNCat(char *dest, const char *src, size_t n)
{   
    size_t i;
    size_t len_dest = StrLen(dest);
    
    for(i = 0; (i < n) && (src[i] != '\0'); i++)
        dest[len_dest + i] = src[i];
    
    dest[len_dest + i] = '\0';

    return dest;
}


char *StrStr(char *haystack, char *needle)
{   
    int i, j;

    for (i = 0; haystack[i] != '\0'; i++) 
        for (j = 0; needle[j] != '\0'; j++)
        {
            if (needle[j] != haystack[i+j])
                break;  
            if ((j+1) == StrLen(needle))
                return (haystack + i);
        }       
        
    return NULL;
}


size_t StrSpn(char *str1, char *str2)
{
    size_t i, j;

    for (i = 0; str1[i] != '\0'; i++)
    {
        for (j = 0; str2[i] != '\0'; j++)
        {
            if (str1[i] == str2[j])
                break;
            else if ((j + 1) == (size_t)StrLen(str2))
                return i ;
        }

        if ((i + 1) == (size_t)StrLen(str2))
            return i + 1;
        else if ((size_t)StrLen(str2) == 0)
            return i;
    }
    return i;
}


/*char *StrTok(char *str, char *delim)
{

}*/