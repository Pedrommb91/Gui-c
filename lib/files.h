#ifndef FILES_H
#define FILES_H

#include <stdio.h>

int GetLinesCount(char* fileName) {
	FILE* file = fopen(fileName, "r");
	if (file == NULL) {
		printf("Error open the file.\n");
		return;
	}

	char buffer[128];
	int counter = 0;
	while (fgets(buffer, sizeof(buffer), file) != NULL) {
		counter++;
	}
	return counter;

	fclose(file);
}

void GetLines(char* fileName, char **output) {
	char buffer[128];

	FILE* file = fopen(fileName, "r");
	if (file == NULL) {
		printf("Error open the file.\n");
		return;
	}

	int count = 0;
	while (fgets(buffer, sizeof(buffer), file) != NULL) {
		strcpy(output[count++], buffer);
	}
	fclose(file);
}


#endif
