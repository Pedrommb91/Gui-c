#ifndef READTERMNINAL_H
#define READTERMNINAL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ReadInt(char sentence[]) {
	int result;
	printf(sentence);
	scanf_s("%d", &result);
	fseek(stdin, 0, SEEK_END); // clean stding buffer: scanf leaves \n behind and when you call fgets it will get it
	return result;
}

void ReadString(char sentence[], char *output) {
	printf(sentence);
	while (fgets(output, sizeof(output), stdin) != NULL) {
		output[strcspn(output, "\r\n")] = 0;
		fseek(stdin, 0, SEEK_END); // clean stding buffer: scanf leaves \n behind and when you call fgets it will get it
		return;
	}
}

void WaitForAnyKey() {
	printf("Click any key to continue.");
	getchar();
}

#endif

