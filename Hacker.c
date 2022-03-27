/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int max_of_four(int a, int b, int c, int d)
{
	int max = a;
	if(max<b)
		max=b;
	if(max<c)
		max=c;
	if(max<d)
		max=d;
	return max;
}
int main() 
{
/*
// output : C
//			languge
//			c is languge
char C;
char S1[50];
char S2[max];
scanf("%c",&C);
scanf("%s",S1);
scanf(" %[^\t\n]s",&S2);

    printf("%c\n",C);
    printf("%s\n",S1);
    printf("%s\n",S2);
*/
/*
int num1,num2;
float num3,num4;
scanf("%d%d",&num1,&num2);
scanf("%f%f",&num3,&num4);
printf("%d %d ",(num1+num2),(num1-num2));
printf("%.1f %.1f ",(num3+num4),(num3-num4));
*/
/*
int num1,num2,num3,num4;
scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
printf("%d\n",max_of_four(num1,num2,num3,num4));
*/
/*
unsigned int num;
scanf("%u",&num);
if(num==1)
	puts("one");
else if (num==2)
	puts("two");
else if (num==3)
	puts("three");
else if (num==4)
	puts("four");
else if (num==5)
	puts("five");
else if (num==6)
	puts("six");
else if (num==7)
	puts("siven");
else if (num==8)
	puts("eight");
else if (num==9)
	puts("nine");
else 
	puts("Greater than 9");
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int n,last_num,sum = 0,temp;
    scanf("%d", &n);
    temp = n;
 
    while(temp > 0)
    {
        last_num = temp %10;
        sum = sum + last_num;
        temp = temp/10;
    }
    printf("%d",sum);
    return 0;
	
		
		
}
*/
/*
#include <stdio.h>
int main() 
{

    int n;
    scanf("%d", &n);
	
	int L = 2*n-1;
	
	int Start =0 ,end =L-1;
	
	int arr[L][L];
	
	while(n != 0)
	{
		
		for(int i= Start; i<=end ; i++)
		{
			for(int j =Start ;j<=end ; j++)
			{
				if( (i== Start) || (i== end) || (j== Start ) || (j== end) )
					arr[i][j] =n ;
				
			}
			
		}
		++Start;
		--end;
		--n;
	}
		for(int i= 0; i<L ; i++)
		{
			for(int j =0 ;j<L ; j++)
			{
				printf("%d " ,arr[i][j] );
				
				
			}
			printf("\n");
			
		}
	
  	


	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>



int main()
{
	int num , sum=0;
	scanf("%d",&num);
	
	int *arr =malloc(num*sizeof(int));
	
	  for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%i",sum);
    free(arr);

    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>


int main()
{
	
	int n ;
	scanf("%d",&n);

	int *arr = malloc(n * sizeof(int));
	int *arrReverse = malloc(n * sizeof(int));

	for(int i=0 ; i<n ;i++)
	{
		scanf("%d",&arr[i]);

	}
	 
	
	for(int i=1 ; i<=n ;i++)
	{
		arrReverse[i-1]=arr[n-i];

	}
	for(int i = 0; i < n; i++)
        printf("%d ",arrReverse[i]);
 free(arr);
 free(arrReverse);
	return 0; 
}
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	//char S2[max];

	
	//scanf(" %[^\t\n]s",&S2);
	
	//printf("%s\n",S2);
	int x =2;
	int y = (((++x) + (++x) + (++x)));
		printf("%d\n",y);

	
	
	return 0; 
}

