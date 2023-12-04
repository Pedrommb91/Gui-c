#ifndef APP_H
#define APP_H

#include <stdlib.h>

typedef struct PersonData {
	char *firstName;
	char *idNumber;
}PersonData;

PersonData NewPersonData();
PersonData ReadNodeInfo();
void Run();

#endif

