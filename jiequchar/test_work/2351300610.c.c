#include<stdio.h>
fun(x,y)
{
	char ch[20];
	gets(ch);
	char* pch1=ch;
	pch1=pch1+x;//ʣbook!
	char* pch2=pch1;
	pch2=pch2+(y-x+1);//ʣ�� 
	for(x=0;x<=4;x++)
	{
		if(pch1[x]!=pch2[0])
		{
			printf("%c",pch1[x]);
		}
	}	
}
int main()
{
	fun(10,13);
	return 0;
 } 
