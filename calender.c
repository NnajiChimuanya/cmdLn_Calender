#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
	char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December", 0};
	char *day[] = {"mon", "tue", "wed", "thur", "fri", "sat", "sun", 0};

	for (int i = 0; i <= 12; i++)
	{
			/* Printing out the name of the month */
			printf("                %s              \n", month[i]);

			for (int j = 0; j <= 7; j++)
			{
				if (day[j] != 0)
				{
					/* Printing out the days of the week */
					printf(" %s  ", day[j]);
				}
			}

		printf("\n\n");
	}

	return 0;
}
