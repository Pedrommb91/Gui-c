#include "App.h"
#include "./Menu/menu.h"
#include "../lib/ReadTerminal.h"
#include "../lib/files.h"
#include "../lib/strings.h"
#include "../lib/arrays.h"

#include <stdlib.h>
#include <string.h>


void Run() {
	int isRunning = 1;

	char address[256];
	int isAdressFilled = 0;

	int *list = NULL;
	int size = 1;

	while (isRunning == 1) {
		system("cls");
		PrintMenu();
		int option = ReadInt("Option: ");

		switch (option)
		{
		case 1:
			break;
		case 2:
			AppendInt(&list, &size, ReadInt("Insert a number: "));

			char input[24];
			while (strcmp("n", input) != 0) {
				ReadString("Do you want to add more numbers? (s/n): ", input);
				while (strcmp("s", input) != 0 && strcmp("n", input) != 0) {
					printf("Invalid choise, only s or n allowed.\n");
					ReadString("Do you want to add more numbers? (s/n): ", input);
				}
				if (strcmp("n", input) == 0) {
					continue;
				}

				AppendInt(&list, &size, ReadInt("Insert a number: "));
			}
			for (int i = 0; i < size; i++)
			{
				printf(list[i]);
			}
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:;
			ReadString("Address: ", address);
			isAdressFilled = 1;
			printf(address);
			WaitForAnyKey();
			break;
		case 7:
			if (isAdressFilled != 0) {
				printf(address);
				printf("\n");
			}
			else {
				printf("No address recorded.\n");
			}
			WaitForAnyKey();
			break;
		case 8:;
			char* fileName = "file.txt";
			int lineCounter = GetLinesCount(fileName);
			char** lines = (char**)malloc(lineCounter * sizeof(char*));
			for (int i = 0; i < lineCounter; i++)
				lines[i] = (char*)malloc(128 * sizeof(char));

			GetLines(fileName, lines, &lineCounter);
			for  (int i = 0; i < lineCounter; i++)
			{
				int tokenCounter = GetTokenCount(lines[i], ",");
				char** tokens = (char**)malloc(tokenCounter * sizeof(char*));
				for (int k = 0; k < tokenCounter; k++)
					tokens[k] = (char*)malloc(128 * sizeof(char));

				Split(lines[i], ",", tokens);
				int sum = 0;
				for (int j = 0; j < tokenCounter; j++)
				{
					printf(tokens[j]);
					printf("\n");
					if (IsNumber(tokens[j]) == 1) {
						int n = ToInt(tokens[j]);
						sum += n;
					}
				}
				printf("%i\n", sum);
			}
			WaitForAnyKey();
			break;
		case 0:
			isRunning = 0;
			break;
		default:
			printf("Option not available.\n");
			break;
		}
	}
}