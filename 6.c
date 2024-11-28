#include<stdio.h>
#include<conio.h>
int triangle(int l,int h,int area)
{
	area=l*h/2;
	return area;
}
int main()
{
	int l,h;
	printf("enter l:");
	scanf("%d",&l);
	printf("enter h:");
	scanf("%d",&h);
	int area=triangle();
	printf("area is %d",area);
}
