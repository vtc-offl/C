String str

Print the characters in a line until a character is continuosly repeated

Similarly program must print the other lines until the character is continuously repeated and also all the characters of str are printed

Pad * at the end of strings so that each line has same length

Sample I/O: abcdeeeemonopppppluck

Sample O/P:  abcdeeee*     // Length of 8, so padded with 4 asterisks.
             monoppppp     // Maximum among the other strings of length 9.
             luck*****     // Length of 4, so padded with 5 asterisks. 


#include<stdio.h>
#include<string.h>

int main()
{
    char substr[101][101];
    char str[101];
    scanf("%s", str);
    int flag=0,k=0,l=0,max=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==str[i-1] && i>0) flag=1;
        if(flag==1 && str[i]!=str[i-1])
        {
            flag=0;
            substr[k][l] = '\0';
            if(l>max) max=l;
            k++;
            l=0;
        }
        substr[k][l++] = str[i];
    }
    if(l>max) max=l;
    for(int i=0;i<=k;i++)
    {
        printf("%s", substr[i]);
        if(strlen(substr[i])<max)
        {
            for(int j=0;j<max-strlen(substr[i]);j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
                printf("*");
            }
        }
        printf("\n");
    }
}
