#include <stdio.h>
#include <string.h>

void swap(char *x, char *y)
{
	char tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

void permute(char *str, int left, int right)
{
	int i;
	
	if (left == right) {
		fprintf(stderr, "%s\n", str);
		return;
	}

	for (i = left; i < right; i++) {
		swap(str+left, str+i);
		permute(str, left+1, right);
		swap(str+left, str+i);
	}
}

int main()
{
	char str[] = "abc";

	permute(str, 0, strlen(str));

	return 0;
}