#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct prob *Prob;

struct prob
{
    char c;
    int t;
    int flag;
};

int compare(const void *a, const void *b)
{

    struct prob *orderA = (struct prob *)a;
    struct prob *orderB = (struct prob *)b;

    return (orderB->t - orderA->t);
}

int main()
{
    int T;
    scanf("%d", &T);
 struct prob arr[13];
    while (T-->0)
    {
        int k;
        int temp;
        scanf("%d", &k);

        for (int i = 0; i < 13; i++)
        {
            arr[i].c='A'+i;
            arr[i].flag=0;

        }
        char s[14];
        scanf("%s",s);
        for (int i = 0; i < strlen(s); i++)
        {
            temp=s[i];
            temp = temp - 'A';
            arr[temp].flag = 1;
        }
        for (int i = 0; i < 13; i++)
        {   
            scanf("%d", &arr[i].t);
        }
        qsort(arr, 13, sizeof(struct prob), compare);
        for (int i = 0; i < 13; i++)
        {
            if (arr[i].flag ==0)
            {
                printf("%c\n", arr[i].c);
                break;
            }
        }
    }
}
