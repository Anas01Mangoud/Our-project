/*
#include <stdio.h>
void main(void)
{
	int grade =0;
	printf("enter your grade: ");
	scanf("%d",&grade);
	if((grade>0)&&(grade<50))
	{
		
		printf("you fialed ^_^");
	}
	else if((grade>= 50)&& (grade<65))
	{
		printf("you get pass !");
	}
	else if((grade>=65)&&(grade<75))
	{
		printf("you get good");
	}
	else if((grade>=75)&& (grade<85))
	{
		printf("you get very good");
	}
	else if((grade>=85)&& (grade<100))
	{
		printf("you get exellent ");
	}
	else
	{
		printf("agian!");
	}
	
}
*/
/* #include <stdio.h>
void main(void)
{
	int sum =0;
	
	for(int i=1;i<=10;i++)
	{
		printf("enter your num");
		scanf("%d",&i);
		sum+=i;
	}
	printf("%d",sum);
	//float ava = sum/10 ;
	printf("avarage %f", ( (float)sum/10));
	
	
	
} */
/* #include <stdio.h>
void main(void)
{
	int x;
	scanf("%d",&x);
	int i=1;
	while(i<=12)
	{
		printf("%d * %d = %d \n",i,x,(i*x));
		i++;
	}
	printf("\n");
	int y=1;
	for(;y<=12;)
	{
		printf("%d * %d = %d \n",y,x,(x*y));
		y++;
	}
} */
/*
 #include <stdio.h>
int power(int x ,int z)
{
	if (z==0)
	{
		return 1;
	}
	else
	{
		return x*power(x,z-1);
		
	}
	
}

void main(void)
{
	
	printf("%d",power(2,3));
}
 */
/* #include <stdio.h>
int fun(int* x,int* y)
{
	int temp =*x + *y;
		  *x= *x - *y;
	return temp;
}

void main(void)
{
	int x , y;
	scanf("%d%d",&x,&y);
	int z= fun(&x,&y);
	printf("%d\n",z);
	printf("%d",x);
} */
/* 
#include <stdio.h>
void main(void)
{
	int size,i;
	scanf("%d",&size);
	int array1[size];
	int array2[size];
	int * ptr1= array1;
	int * ptr2 =array2;
	
	for(i=0 ;i<size;i++)
	{
		scanf("%d",&array1[i]);
	}
	for(i=0 ;i<size;i++)
	{
		ptr2[i] =ptr1[i];
	}
	for(i=0 ;i<size;i++)
	{
		printf("%d",array2[i]);
	}
	
} */
/* #include <stdio.h>
void main(void)
{

	printf("in size   		  =%d\n",sizeof(int));
	printf("char size 		  =%d\n",sizeof(char));
	printf("long long size    =%d\n",sizeof(long long ));
	printf("float size  	  =%d\n",sizeof(float));
	printf("long double size 	  =%d\n",sizeof(long double));
	printf("long int size 	  =%d\n",sizeof(long int));
	printf("double size 	  =%d\n",sizeof( double));
} */
/* #include <stdio.h>
#include "STD_TYPES.h"
void main(void)
{
	printf(" unsigned char size   		    =%d\n",sizeof(u8));
	printf(" unsigned short int 		    =%d\n",sizeof(u16));
	printf(" unsigned long int              =%d\n",sizeof(u32 ));
	printf(" signed char 				    =%d\n",sizeof(s8));
	printf(" signed short int        	    =%d\n",sizeof(s16));
	printf(" signed long int	            =%d\n",sizeof(s32));
	printf(" float 	                        =%d\n",sizeof( f32));
	printf(" double	                 	    =%d\n",sizeof(f64));
	printf(" float 	                        =%d\n",sizeof( f128));
}
 */
 /*
 #include <stdio.h>
#include "STD_TYPES.h"
typedef struct 
{
	u16 id;
	u16 c1;
	u16 c2;
	u16 c3;
	u16 c4;
	
} grade;

void main(void)
{
	grade class[3];
	
	for(int i=0 ; i<3 ;i++)
	{
		printf("enter ID& grades for student%d \n",i+1);
		scanf("%d%d%d%d%d",&class[i].id,&class[i].c1,&class[i].c2,&class[i].c3,&class[i].c4);
		
	}
	u16 x,flag =0;
			printf("enter ID to check");
			scanf("%d",&x);
		for(int i=0 ; i<3 ;i++)
	{
		if(x== class[i].id)
		{
			printf("the grades of this id  = %d\n %d\n %d\n %d\n",class[i].c1,class[i].c2,class[i].c3,class[i].c4);
			flag =1;
			break;
		}
	}
    if(flag==0)
	{
		printf("this ID is not found\n");
	}		
		

} */
/* #include <stdio.h> 
  
int main() 
{ 
   printf("Current File :%s\n", __FILE__ ); 
   printf("Current Date :%s\n", __DATE__ ); 
   printf("Current Time :%s\n", __TIME__ ); 
   printf("Line Number :%d\n", __LINE__ ); 
   return 0; 
}  */

/*
	//diffirent between (void) &() 
 #include<stdio.h>
void fun()
{
	printf("hello world");
}
int main ()
{
	int a =9;
	fun(a);
	return 0;
} */
/*
#include <stdio.h>

#define Max(a,b)	(((a)>(b)) ? (a) :(b) )


int main()
{
	printf("%d\n",Max("abc","def"));
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
int magic; // magic number 
int guess; // user's guess 
magic = rand(); // generate the magic number 
printf("Guess the magic number: ");
scanf("%d", &guess);
if(guess == magic) printf("** Right **");
return 0;
}
*/

#include <stdio.h> 
#include <string.h>

int main(void)
{
	char a=7;
	a^=5;
	printf("%d" ,printf("%d",a+10));
	
	return 0;
}