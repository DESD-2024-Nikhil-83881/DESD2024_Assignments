#include<stdio.h>
#include<string.h>

size_t my_strlen(const char *s);

int main(void)
{
	char str[20];
	int len;
	scanf("%[^\n]s", str);
	printf("str = %s\n", str);
len = my_strlen(str);
//	len = strlen(str);
	printf("Length = %d\n", len);

return 0;
}

size_t my_strlen(const char *s)
{
	size_t length = 0;
	for(int i = 0; s[i] != '\0'; i++)
			length++;
		return length;

}
