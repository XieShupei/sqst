#include<stdio.h>
int main()
{
		int a=0,b=0,c=0,d=1;
		char key='\0';
		printf("welcom to the shangqian student xsp's calculator\nif you want exit,please do 'ctrl'+'c'\nhave great time and great life\n");
		while(1)
		{
		scanf("%d%c%d",&a,&key,&b);
		if(key=='+')
				c=a+b;
		else if(key=='-')
				c=a-b;
		else if(key=='*')
				c=a*b;
		else if(key=='/')
				c=a/b;
		else
		{
				printf("error:you make a mistake so we need close the calculator\n");
				return 0;
		}
		printf("the %d st result you want is:%d\n",d,c);
		d+=1;
		
		}
}


