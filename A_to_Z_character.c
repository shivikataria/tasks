/*#include <stdio.h>
int main()
{
    char t;
    
     printf("Enter u/U to display alphabets in uppercase and enter l/L to display alphabets in lowercase: ");
      scanf("%c", &t);
    if(t == 'u'|| t == 'U')
    {
    	
       for(t = 'a'; t <= 'z'; ++t)
      
	   printf("%c ", t);
	 	
    	
	}
    
    else if(t == 'l'|| t == 'L')
	{
	    for(t = 'A'; t <= 'z'; ++t)
      
		printf("%c ", t);
    
	}
	else

	{
			printf("Error! You entered invalid character.");
	}
 
    return 0;
}
*/
#include <stdio.h>
int main()
{
     char t;
 
    printf("Enter u/U to uppercae and enter l/L to lowercase: ");
    scanf("%c", &t);
 
    if(t== 'U' || t== 'u')
    {
       for(t = 'A'; t <= 'Z'; ++t)
         printf("%c ", t);
    }
    else if (t == 'L' || t == 'l')
    {
        for(t = 'a'; t <= 'z'; ++t)
         printf("%c ", t);
    }
    else
       printf("Error.........!!\n You entered invalid character.");
    return 0;
}
