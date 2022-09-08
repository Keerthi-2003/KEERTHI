#include<stdio.h>
int main()
{
	int tot,stf,std,def;
	printf("enter the total number of users",tot);
	scanf("%d",&tot);
	if(tot<0)
	{
		printf("enter positive value");
	}
else{
	printf("enter total staff users",stf);
	scanf("%d",&stf);
	def=stf/3;
	std=tot-stf-def;
	printf("the student users are:%d",std);
	}
}
