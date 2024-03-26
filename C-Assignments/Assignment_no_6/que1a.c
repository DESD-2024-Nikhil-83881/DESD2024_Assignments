#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[20];
	int len;
	scanf("%[^\n]s", str);
	printf("str = %s\n", str);
len = strlen(str);
	printf("Length = %d\n", len);

return 0;
}
