/* A program which uses a single function to 
   sort any kind of data type 
 */
#include<stdio.h>
#include<stdlib.h>
void sort(void *,int,int);
int main()
{
	int opt,i,n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the option\n1.Enter 1 if you want to sort integers\n"
	                         "2.Enter 2 if you want to sort float\n");
    scanf("%d",&opt);
	switch(opt)
	{
       case 1:       ;
                  int *A;
                  A=(int*)malloc(n*sizeof(int));
                  for (int i = 0; i < n; ++i)
                  {
                  	scanf("%d",&A[i]);
                  }
                  sort(A,opt,n);
                  for (int i = 0; i < n; ++i)
                  {
                  	printf("%d\n",A[i]);
                  }
                  break;
       case 2:    
                             ;
                  float  *B;
                  B=(float*)malloc(n*sizeof(float));
                  for (int i = 0; i < n; ++i)
                  {
                  	scanf("%f",&B[i]);
                  }
                  sort(B,opt,n);
                  for (int i = 0; i < n; ++i)
                  {
                  	printf("%f\n",B[i]);
                  }
                  break;
    }
	return 0;
}

   	void sort(void *p,int opt,int n)
   	{
   		int i,j;
   		unsigned long temp;
                unsigned long *arr_p=(unsigned long *)p;   		
   		for (i = 0; i < n-1; i++)
   		    {
   		    	for (j= 0; j< n-i-1; j++)
   		    	{
   		    		if ((unsigned long *)arr_p[j]>(unsigned long *)arr_p[j+1])
   		    		{
                                     temp=arr_p[j];
                                     arr_p[j]=arr_p[j+1];
                                     arr_p[j+1]=temp;
   		    		}
   		    	}
   		    	
   		    }
    }