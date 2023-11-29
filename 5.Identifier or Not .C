#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isValidIdentifier(const char *identifier) {
    if (!isalpha(identifier[0]) && identifier[0] != '_') {
        return 0; // Invalid: Identifier must start with a letter or underscore
    }

    for (int i = 1; i < strlen(identifier); i++) {
        if (!isalnum(identifier[i]) && identifier[i] != '_') {
            return 0; // Invalid: Contains non-alphanumeric characters other than underscore
        }
    }

    return 1; // Valid ide
output:
Enter an identifier: myVariable123
Valid identifier
