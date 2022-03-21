#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;
	int randomizer = 0;
	char numbers[] = "0123456789";
	char up_letters[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char low_letters[] = "abcdefghijklmnoqprstuvwyzx";
	char symbols[] = "!@#$^&*?";
	char pass[20];
	
	srand((unsigned int)(time(NULL)));

	randomizer = rand() % 4;

	for (i = 0; i < 20; i++)
	{
		if (randomizer == 1) {
            pass[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            printf("%c", pass[i]);
        }
        else if (randomizer == 2) {
            pass[i] = symbols[rand() % 8];
            randomizer = rand() % 4;
            printf("%c", pass[i]);
        }
        else if (randomizer == 3) {
            pass[i] = up_letters[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", pass[i]);
        }
        else {
            pass[i] = low_letters[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", pass[i]);
        }
	}
}
}
