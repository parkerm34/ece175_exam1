/*	Author: Parker Mathewson
 *	Date Created: 2/22/12
 *	Comments: Problem 2 of in lab exam 1.
 *		This problem is to write the numbers 1 to (user inputed) n into a file text.dat
 */

#include <stdio.h>

int main(void)
{
	int n=0, i=1;
	FILE *one_to_n;

	one_to_n = fopen("text.dat","w");
	if(one_to_n == NULL)
		printf("There was an error trying to read file\n");

	else
	{
		printf("Please enter the number n that you would like to write: ");
		scanf("%d", &n);

		for(i=1; i<=n; i++)
			fprintf(one_to_n,"%d",i);
	}

	fclose(one_to_n);
	return (0);
}
