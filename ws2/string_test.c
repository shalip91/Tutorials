#include <stdio.h> /*printf*/
#include "string.h"
#include <string.h>




int main ()
{
    /*strlen*/
    /*char sl1[] = "shali";
    char sl2[] = "fgh# $hsdh@ #*()";
    char sl3[] = "   ";
    char sl4[] = "";*/
    /*strcmp*/
    /*char s1[] = "";
    char s2[] = "shalipersy";*/
    /*char s3[] = "shtli";
    char s4[] = "shzli";
    char s5[] = "shtli";
    char s6[] = "shali";
    char s7[] = "shali";
    char s8[] = "shalipersy";*/
    /*strcpy*/
    /*char sc1[] = "shali";
    char sc2[10];
    char sc2my[10];
    char sc3[] = "shali persy in the house";
    char sc4[30];
    char sc4my[30];
    char sc5[] = "     ";
    char sc6[10];
    char sc6my[10];
    char sc7[] = " ";
    char sc8[10];
    char sc8my[10];*/
    /*StrNCpy*/
    /*char sNc1[] = "shali";
    char sNc2[9];
    char sNc2my[9];*/
    /*StrCaseCpy*/
    /*char scc1[] = "shBli";
    char scc2[] = "shblip";
    char scc3[] = "shBli";
    char scc4[] = "shblip";
    char scc5[] = "shBli";
    char scc6[] = "shblip";*/
    /*StrChr*/
    /*char str[] = "http://www.tutorialspoint.com";
    char ch = 'z';
    char *ret;*/
    /*StrDup*/
    /*char *str = "asdf sdf";
    char *result;*/
    /*StrDup*/
    /*char src[50], dest[50];*/
    /*StrNCat*/
    /*char src2[50], dest2[100], dest2lib[50];*/
    /*StrStr*/
    /*char haystack[20] = "TutorialsPoint";
    char needle[10] = "Point";
    char *ret;*/
    /*StrSpn*/
    size_t lenLib;
    size_t len;
    char str1[] = "bcda";
    char str2[] = "";
    /*StrTok*/
    /*char str[80] = "This is - www.tutorialspoint.com - website";
    const char s[2] = "-";
    char *token;*/


    /*StrTok*/
    /*token = strtok(str, s);
    while( token != NULL ) {
      printf( " %s\n", token );
    
      token = strtok(NULL, s);
   }*/

   
    /*StrSpn*/
    len = StrSpn(str1, str2);
    lenLib = strspn(str1, str2);
    printf("lenLib of initial segment matching %ld\n", lenLib);
    printf("len of initial segment matching %ld\n", len);


    /*StrStr*/
    /*ret = StrStr(haystack, needle);
    printf("The substring is: %s\n\n", ret);*/


    /*StrNCat*/
    /*strcpy(src2,  "   fgh g");
    strcpy(dest2, "  ");
    strcpy(dest2lib, "  ");
    strncat(dest2lib, src2, 15);
    StrNCat(dest2, src2, 15);
    printf("Final destination string : |%s|\n\n", dest2);
    printf("Final destination string : |%s|\n\n", dest2lib);*/


    /*StrCat*/
    /*strcpy(src, "This is source");
    strcpy(dest, " sdf ");
    StrCat(dest, src);
    printf("Final destination string : |%s|\n\n", dest);*/


    /*StrDup*/
    /*result = StrDup(str);
    printf("The string : %s\n\n", result);
    free(result);*/


    /*StrChr*/
    /*ret = StrChr(str, ch)
    printf("String after |%c| is - |%s|\n", ch, ret);*/


    /*StrCaseCmp*/
    /*printf("StrCaseCmp - shali VS shalipersy - myfuntion result: %d\n\n", StrCaseCmp(scc1, scc2));*/


    /*StrNCpy*/
   /* StrNCpy(sNc2, sNc1, 5); StrNCpy(sNc2my, sNc1, 5); 
    printf("shali with 5 - library result: %s\n", sNc2);
    printf("shali with 5 - my result: %s\n", sNc2my);
    StrNCpy(sNc2, sNc1, 8); StrNCpy(sNc2my, sNc1, 8); 
    printf("shali with 8 - library result: %s\n", sNc2);
    printf("shali with 8 - my result: %s\n", sNc2my);
    StrNCpy(sNc2, sNc1, 2); StrNCpy(sNc2my, sNc1, 2); 
    printf("shali with 2 - library result: %s\n", sNc2);
    printf("shali with 2 - my result: %s\n\n", sNc2my);*/


    /*strcpy*/
    /*strcpy(sc2, sc1); StrCpy(sc2my, sc1); 
    printf("shali - library result: %s\n", sc2);
    printf("shali - my result: %s\n", sc2my);
    strcpy(sc4, sc3); StrCpy(sc4my, sc3); 
    printf("shali persy in the house - library result: %s\n", sc4);
    printf("shali persy in the house - my result: %s\n", sc4my);
    strcpy(sc6, sc5); StrCpy(sc6my, sc5); 
    printf("shali - library result: %s\n", sc6);
    printf("shali persy in the house - my result: %s\n", sc6my);
    strcpy(sc8, sc7); StrCpy(sc8my, sc7); 
    printf("shali persy in the house - my result: %s\n", sc8my);
    printf("shali persy in the house - library result: %s\n\n", sc8);*/
    
                                            
    /*strlen*/
    /*printf("\"shali\" - myfuntion result: %ld\n", StrLen(sl1));
    printf("\"shali\" - library result: %ld\n", strlen(sl1));
    printf("\"fgh# $hsdh@ #*()\" - myfuntion result: %ld\n", StrLen(sl2));
    printf("\"fgh# $hsdh@ #*()\" - library result: %ld\n", strlen(sl2));
    printf("\"   \" VS - myfuntion result: %ld\n", StrLen(sl3));
    printf("\"   \" - library result: %ld\n", strlen(sl3));
    printf("\"\" - myfuntion result: %ld\n", StrLen(sl4));
    printf("\"\" - library result: %ld\n\n", strlen(sl4));*/

    /*strcmp*/
    /*printf("shali VS shalipersy - myfuntion result: %d\n", StrCmp(s1, s2));
    printf("shali VS shalipersy - library result: %d\n", strcmp(s1, s2));
    printf("shalipersy VS shali - myfuntion result: %d\n", StrCmp(s8, s7));
    printf("shalipersy VS shali - library result: %d\n", strcmp(s8, s7));
    printf("shtli VS shzli - myfuntion result: %d\n", StrCmp(s3, s4));
    printf("shtli VS shzli - library result: %d\n", strcmp(s3, s4));
    printf("shtli VS shali - myfuntion result: %d\n", StrCmp(s5, s6));
    printf("shtli VS shali - library result: %d\n", strcmp(s5, s6));*/
    
   

    return 0;
}
