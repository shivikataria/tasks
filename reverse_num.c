#include<stdio.h>
int main()
{
	
	int num, rem,res=0;
	
	printf("Enter a num : ");
	scanf("%d",&num);
	while(num!=0)
	{
			rem = num%10 ; 
			
			res = res*10 +rem; 
			num = 	num/10 ; 
		
	}

		printf("%d",res); 
	
}
