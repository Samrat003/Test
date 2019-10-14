#include<stdio.h>
#include<string.h>
int main()
{
	int top1=-1,counter1=-1,top2=-1,counter2=-1,counter,countspecialchar = 0,countother = 0,i;
	char str1[50],str2[50],str3[50];
	printf("Enter the string  ");
	gets(str1);
	for(counter = 0;counter<strlen(str1); counter++)
	{
		if(str1[counter] ==" " || (str1[counter]>='0' && str1[counter]<='9') ||  (str1[counter]>='a' && str1[counter]<='z') || (str1[counter]>='A' && str1[counter]<='Z') )
		{
			countother++;
		}
		else
		{
			countspecialchar++;
		}
	}

	for(counter = 0;counter<strlen(str1);counter++)
		{
			if(str1[counter]>='0' && str1[counter]<='9')
			{
				
				if( (int)( str1[counter]) %2 == 0  )
				{
					str2[++counter1] = str1[counter];
					if(top2 == counter2)
						{
							continue;
						}
					else
						{
							top2++;top1++;	
							if(countspecialchar%2 == 0)
								printf("%c %c ",str2[top1],str3[top2]);
							else
								printf("%c %c ",str3[top2],str2[top1]);

						} 
				}
				else
				{
					str3[++counter2] = str1[counter];
					if(top1 == counter1)
						{
							continue;
						}
					else
						{
							top2++;top1++;	
							if(countspecialchar%2 == 0)
								printf("%c %c ",str2[top1],str3[top2]);
							else
								printf("%c %c ",str3[top2],str2[top1]);
						} 
				}	
			}
		}
	
if(top2 != counter2 && top1 != counter1)
{

	if(counter2>counter1)
	{
		for(i=top1;i<counter1;)
		{
			top2++;
			if(countspecialchar%2 == 0)
				printf("%c %c ",str2[++i],str3[top2]);
			else
				printf("%c %c ",str3[top2],str2[++i]);
	    }
		if(top2 != counter2)
		{
			for(i=top2;i<counter2;)
			{
				printf("%c ",str3[++i]);
			}
		}
	}
	else
	{
		for(i=top2;i<counter2;)
		{
			top1++;
			if(countspecialchar%2 == 0)
				printf("%c %c ",str2[top1],str3[++i]);
			else
				printf("%c %c ",str3[top2],str3[++i]);
	
		}
		if(top1 != counter1)
		{
			for(i=top1;i<counter1;)
			{
				printf("%c ",str2[++i]);
			}
		}
	}
}
else if(top2 != counter2 && top1 == counter1)
{
	for(i=top2;i<counter2;)
		{
			printf("%c ",str3[++i]);
		}
		
}
else if(top1 != counter1 && top2 == counter2)
{
    for(i=top1;i<counter1;)
        {
            printf("%c ",str2[++i]);
        }
}
	
}
