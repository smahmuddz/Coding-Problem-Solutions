#include <stdio.h>
int main()
{
    int n,i,j,max_num=-9999;
    int arr[100];
    //Input of the number of elements
    printf("Enter Number of elements in histogram: ");
    scanf("%d",&n);
    //Input the histogram
    printf("Enter the data: ");
    for(int i=0;i<n;i++)
    {scanf("%d",&arr[i]);}
    //To find the largest number
    for (i = 0; i < n; ++i)
        {
         if (arr[i] > max_num)
            {max_num = arr[i];}
        }
    //To print the histogram
    for (i = 0; i < max_num; max_num--) {
        for (j = 0; j < n; ++j) {
            if (arr[j] >= max_num)
                printf("  |");
            else
                printf("   ");
        }
        printf("\n");
    }

}

