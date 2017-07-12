#include<stdio.h>
int main()
{
		int a=0,b=0,c=0,d=1;
		char key='\0';
		char user='\0';
		printf("welcom to the shangqian student xsp's calculator\nif you want exit,please do 'ctrl'+'c'\nhave great time and great life\n");
		printf("you want to known how to use the tool?\ny or n?");
		scanf("%c",&user);
		if(user=='y')
	 
				printf("+mean add;\n-mean minus;\n*mean multiply;\n/mean divide\nfor example num+num,num-num,num*num,num/num\nnow here we go:\n");

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


