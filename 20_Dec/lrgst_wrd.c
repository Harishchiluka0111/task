#include <stdio.h>
#include <string.h>

#define MAX 100

int main(){
	char str[MAX];
	char longest_str[MAX];
	int len;
	int i, index = 0;
	int max_wlen = 0, wlen = 0;

	printf("Enter a string: ");
	gets(str);

	len = strlen(str);

	for (i = 0; i <= len; i++) {

		if (str[i] != ' ' && str[i] != '\0') {
			wlen++;
			continue;
		}

		/* space or end of string */
		if (wlen > max_wlen) {
			max_wlen = wlen;
			index = i - max_wlen;
		}

		wlen = 0;
	}

	for (i = 0; i < max_wlen; i++) {
		longest_str[i] = str[index+i];
	}

	longest_str[i] = '\0';

	printf ("Longest word: %s.\n", longest_str);
	printf ("Longest word length: %d.\n", max_wlen);
	return 1;
}
