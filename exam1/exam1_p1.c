/*	Author: Parker Mathewson
 *	Date Created: 2/22/12
 *	Comments: This is the first program of exam 1 that converts time of seconds into a hours minutes and seconds.
 *		This time includes hours, minutes, and seconds.
 */

#include <stdio.h>

int main(void)
{
	long int seconds=0;
	int minutes=0, hours=0;
	char quit=0;

	printf("Please enter a time in seconds: ");
	scanf("%d", &seconds);
									//this is my first scan do collect the data
	while (seconds != 57)
	{

		if (seconds == 57)
			return (0);

		else
		{
			minutes = seconds/60;
			hours = seconds/3600;
			minutes = minutes%60;
			seconds = seconds%60;
									//calculations to get all the necessary info
			if (hours == 0 && minutes == 0)
				printf("Time is: %d seconds", seconds);
			else if (hours == 0 && minutes != 0)
				printf("Time is: %d minutes and %d seconds", minutes, seconds);
			else if (hours != 0)
				printf("Time is: %d hours %d minutes and %d seconds", hours, minutes, seconds);
		}							//my if else block for print statements

		printf("\nPlease enter time in seconds or q to quit: ");
		fflush(stdin);
		scanf("%d", &seconds);					//repeat of collecting data
	}

	return (0);
}
