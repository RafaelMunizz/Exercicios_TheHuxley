#include <stdio.h>
#include <string.h>

int bigger( char *string1, char *string2) {

    int value1 = 0, value2 = 0, i = 0, result;

    while (string1[i] && string2[i]) {

        value1 += string1[i];
        value2 += string2[i];
        
        if ( value1 > value2) {
            return 1;
            break;

        } else if ( value1 < value2) {
            return 2;
            break;
        }
        i++;
    }
    if ( string1[i] == string2[i] || string1[i] ) return 1;
    else if ( string2[i] ) return 2;
}

void main() {

    int i, result;
    char string1[20], string2[20];

    scanf("%s %s", string1, string2);

    result = bigger( string1, string2 );

    if ( result == 1 ) printf("%s", string1);
    else if ( result == 2 ) printf("%s", string2);
}