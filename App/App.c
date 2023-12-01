#include "App.h"
#include "./Menu/menu.h"
#include "../lib/ReadTerminal.h"
#include "../lib/files.h"

#include <stdlib.h>
#include <string.h>


void Run() {
	int isRunning = 1;

	char address[256];
	int isAdressFilled = 0;

	while (isRunning == 1) {
		system("cls");
		PrintMenu();
		int option = ReadInt("Option: ");

		switch (option)
		{
		case 1:
			break;
		case 2:
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
			char lines[10][128];
			GetLines("file.txt", lines);
			for  (int i = 0; i < 10; i++)
			{
				printf(lines[i]);
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