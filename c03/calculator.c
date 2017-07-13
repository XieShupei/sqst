#include<stdio.h>
#include<stdlib.h>
int main()
{     //  int flag =0;
		int a=0,b=0,c=0,d=1;
		char key='\0';
		char user='\0';
		char rub='\0';
		printf("welcom to the shangqian student xsp's calculator\nif you want exit,please do 'ctrl'+'c'\nhave great time and great life\n");
		printf("you want to known how to use the tool?\ny or n?");
		scanf("%c",&user);
		rub=getchar();
		if(user=='y')
	 
				printf("+mean add;\n-mean minus;\n*mean multiply;\n/mean divide\nfor example num+num,num-num,num*num,num/num\nnow here we go:\n");

		while(1)
		{
		char key='\0';		
		scanf("%d%c%d",&a,&key,&b);
	    getchar();
		if(key=='+')
		{
			//	flag=1;
				c=a+b;
		}
		else if(key=='-')
		{
			//	flag=1;
				c=a-b;
		}
		else if(key=='*')
		{
			//	flag =1;
				c=a*b;
		}
		else if(key=='/'&&b==0)
		{
				printf("you can't use num/0\n");
	      //  	flag=0;
				return 0;
		}
		        
		else if(key=='/'&&b!=0)
		{
				c=a/b;
	    //    	flag=1;
		}
		else
		    {
				printf("error:you make a mistake so we need close the calculator\n");
				return 0;
		    }
	//	if(flag==1)
		printf("the %d st result you want is:%d\n",d,c);
		d+=1;
		
		}
}


