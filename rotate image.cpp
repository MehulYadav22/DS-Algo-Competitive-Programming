#include<stdio.h>
int main()
{
    int array[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}},array1[4][4];


    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
        	array1[i][j]=array[j][i];
            
            printf("%d",array1[i][j]);
            printf("\t");
        }
          printf("\n");
    }
    printf("final output\n");
    for(int i=0;i<=3;i++)
    {
    	for(int j=3;j>=0;j--)
    	{
    		printf("%d",array1[i][j]);
    		printf("\t");
		}

		printf("\n");
	}
    return 0;
}
