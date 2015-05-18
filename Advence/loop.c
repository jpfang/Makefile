#include <common.h>

int loop(int iNum)
{
	int i, iSum=0;

	for (i=0; i<=iNum; i++)
	{
		iSum=iSum+i ;
	}

	printf("0+...+%d=%d\n",iNum,iSum) ;

	return iSum;
}
