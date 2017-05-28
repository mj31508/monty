#include "monty.h"

/**
 * main - argument count and num of strings
 * @ac: argument count of files
 * @av: Number of files
 *
 **/
int main(int ac, char **av)
{
	FILE *file = fopen(av[1], "r");
	unsigned int line_count = 0;
	char *line = NULL;
	size_t len = 0;
	int  nread;
	char *token;


	if (ac != 2)
	{
		printf("USAGE: monty %s file\n", av[0]);
		exit(EXIT_FAILURE);
	}

	if (file == NULL)
	{
		printf("Error: Can't open file %s\n", av[0]);
		exit(EXIT_FAILURE);
	}

	nread = getline(&line, &len, file);
	token = strtok(line, "\n");
	while(nread)
	 {
		 printf("%s\n", token);
		 break;
		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, "\n ");
			printf("%s\n", token);

		}

		printf("%s\n", token);
		line_count++;
	}

	fclose(file);
	free(line);
	exit (EXIT_SUCCESS);
}
