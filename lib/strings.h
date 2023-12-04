#ifndef STRINGS_H
#define STRINGS_H

#include <string.h>
#include <stdio.h>

int GetTokenCount(char* str, char* delimiter) {
    char sentence[128];
    strcpy(sentence, str);
    char* token;
    token = strtok(sentence, delimiter);
    int count = 0;
    while (token != NULL) {
        token = strtok(NULL, delimiter);
        count++;
    }
    return count;
}

void Split(char* str, char *delimiter, char **output) {
    char sentence[128];
    strcpy(sentence, str);
    char* token;
    token = strtok(sentence, delimiter);
    int count = 0;
    while (token != NULL) {
        token[strcspn(token, "\r\n")] = 0; //removes /n and /r from the end of the string for the case we have a number at the end of the line
        strcpy(output[count++], token);
        token = strtok(NULL, delimiter);
    }
}

// return 1 if its letters, 0 if not
int IsLetter(char* str) {
    if (str == NULL || str[0] == '\0') {
        return 0;
    }
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (!isdigit(str[i])) {
            return 1;
        }
    }
    return 0;
}

int IsNumber(char* str) {
    if (str == NULL || str[0] == '\0') {
        return 0;
    }
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

int ToInt(char* str) {
    return atoi(str);
}

float ToFloat(char* str) {
    return atof(str);
}

int IsUpper(char c) {
    return isupper(c);
}


#endif

