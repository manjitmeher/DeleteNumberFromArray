#include<stdio.h>

int main()
{
    int num[5],check[5];
    int p[5];
    printf("Enter number: ");
    for(int i =0; i<5; i++)
    {
        scanf("%d",&num[i]);
        p[i]=num[i];
    }
    printf("Enter number to delete :");
    for(int a =0; a<3; a++)
    {
        scanf("%d",&check[a]);
    }
   
    for(int x=0; x<3; x++)
    {
        for(int z=0; z<5; z++)
        {
            if(num[z]==check[x])
            {
                for(int q=z; q<5; q++)
                {
                    num[q]=num[q+1];
                }
            }
        }
    }
    for(int e=0; e<5; e++)
    {
        int j=0;
        for(int o=0; o<5; o++)
        {
            if(num[e] != p[o])
            {
                j=j+1;
            }           
        }
        if(j<5)
            {
                printf("%d\t",num[e]);
            }           
    }

    return 0;
}