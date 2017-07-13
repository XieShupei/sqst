#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
		srand((unsigned)time(NULL));
	    int a=0;
		int i=0;
		printf("1-->roit\n2-->jiandao\n3-->bu\n");
		while (1)
		{
				 a=0;
        printf("please make your choise\n");
		scanf("%d",&a);
		getchar();
		i=rand()%3 +1;
		switch(a)
		{
		case 1:
				if(i==1)
						printf("roit you are not fail but not win\n");
				else if(i==2)
						printf("jiandao you are winner\n");
				else
						printf("bu you are loser\n");
				break;
		case 2:
				if(i==1)
						printf("roit you are loser\n");
				else if(i==2)
						printf("jiandao you are not a loser or winner\n");
				else
						printf("bu you are winner\n");
				break;

		case 3:
				if(1==i)
						printf("roit you are winner\n");
				else if(2==i)
						printf("jiandao you are losser\n");
				else
						printf("bu you are not losser and winner\n");
				break;
		default:

						printf("please use 1 2 3\n");
					//	return 0;
		}
		if(a!=1&&a!=2&&a!=3)
				return 0;
		}
}

