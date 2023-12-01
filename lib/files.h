#ifndef FILES_H
#define FILES_H

#include <stdio.h>

void GetLines(char* fileName, char **output) {
	char buffer[128];

	FILE* file = fopen(fileName, "r");
	if (file == NULL) {
		printf("Error open the file.\n");
		return;
	}
	int count = 0;
	while (fgets(buffer, sizeof(buffer), file) != NULL) {
		output[count++] = buffer;
	}
	fclose(file);
	//return ;
}


#endif
