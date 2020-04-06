#include <stdio.h>
#include <string.h>

void print_substr(char *str, int strLen)
{
	int len, start, end, i;
	
	for (len = 1; len <= strLen; len++) {
		for (start = 0; start <= strLen-len; start++) {
			end = start+len-1;
			for (i = start; i <= end; i++) {
				fprintf(stderr, "%c", str[i]);
			}
			fprintf(stderr, "\n");
		}
	}
}

int main()
{
	char str[] = "abcd";

	print_substr(str, strlen(str));

	return 0;
}