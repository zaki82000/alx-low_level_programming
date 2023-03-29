#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_MIN_LENGTH 6
#define PASSWORD_MAX_LENGTH 10

int main(void)
{
    srand(time(NULL));
    int password_length = rand() % (PASSWORD_MAX_LENGTH - PASSWORD_MIN_LENGTH + 1) + PASSWORD_MIN_LENGTH;
    char password[password_length + 1];
    for (int i = 0; i < password_length; i++)
    {
        password[i] = rand() % 94 + 33;  // ASCII range 33-126
    }
    password[password_length] = '\0';

    printf("%s\n", password);
    return 0;
}

