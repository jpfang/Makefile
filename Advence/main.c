#include <common.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int iNum, iSum;

	printf("Hello~, GNU Makefile\n");

	print("Hello~, PrintFunction");

	print("Type in a number for loop:");

	scanf("%d",&iNum) ;

	iSum=loop(iNum);

	printf("%d log10 is %.2lf\n",iSum,(float)log10((float)iSum));

	return 0;
}
