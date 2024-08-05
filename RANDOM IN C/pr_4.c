#include <stdio.h>
int main()
{
    // output.explanation(presence of pointer)

    char *str[2] = {"hello", "var"}, *str1 = "world", str2 = 'r';

    //  str {// printf("%s\n",str[1]);
    // war (without pointer) ,no output as it has segmantation fault (with pointer)
    // printf("%c\n",str[1]);
    // w (with pointer),j. random character (without pointer)
    // printf("%d\n",*str[1]);
    // 4214890 (without pointer),118. ascii value of first character (with pointer)

    // printf("%s\n",str);
    // dP@. random value (without pointer) ,no output as it has segmantation fault (with pointer)
    // printf("%c\n",str);
    // d. frist character of random value (with pointer),►. random character (without pointer)
    // printf("%d\n",str);
    // 4214884 (with pointer), 6422288 (without pointer)}

    // printf("%s\n",str1);
    //  same as str with different values
    // printf("%c\n",*str1);
    //  same as str with different values
    // printf("%d\n",*str1);
    //  same as str with different values

    // here no case of pointer 
    // printf("%s\n",str2);
    // segmantation problem 
    // printf("%c\n",str2);
    // r.character
    // printf("%d\n",str2);
    // asccii value of a character
    return 0;
}