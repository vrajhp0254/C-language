// count the occurrence of charachter and removing first , last and all occurrence
#include <stdio.h>
int main()
{
    char arr[10];
    printf("enter the string \n");
    gets(arr);
    int len = sizeof(arr) / sizeof(arr[0]);

    int v = -1;
    int f[len];

    for (int i = 0; i < len; i++)
    {
        int c = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                c++;
                f[j] = v;
            }
        }
        if (f[i] != v)
        {
            f[i] = c;
        }
    }
    printf("element - frequency\n");
    for (int i = 0; i < len; i++)
    {
        if (f[i] != v)
        {
            printf("%c - %d\n", arr[i], f[i]);
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d", f[i]);
    }

    for (int i = 0; i < len; i++)
    {
        printf("%c", arr[i]);
    }
    char c;
    int r=0;
    printf("\nenter the character to remove the last character\n");
    scanf("%c", &c);
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == c)
        {
            r = i;
            // if we put break then it is for first character removing
        }
    }
    for (int i = r; i < len; i++)
    {
        arr[i] = arr[i + 1];
    }
    len--;
    for (int i = 0; i < len; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");



    int b;
    label1:
    
    b=0;

    for (int i = 0; i < len; i++)
    {
        // printf("%c\n",arr[i]);
        if (arr[i] == c)
        {
            r = i;
            b=1;
        }
    }
    
    if(b==1)
    {
    for (int i = r; i < len; i++)
    {
        if(i+1<len)
        {arr[i] = arr[i + 1];}
        
    }}
    
    if(b==1)
    {
        len--;
        goto label1;
    }

    printf("string after the removing all character\n");
    for (int i = 0; i < len; i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}