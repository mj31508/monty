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
	ssize_t nread;
	char *token;
	char *saveptr;



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
	while(nread != -1)
	{

		if (nread > 0)
		{
			token = strtok_r(line, "\n", &saveptr);
			printf("%s\n", token);
			line_count++;

		}

		nread = getline(&line, &len, file);

	}
	fclose(file);
	free(line);
	return (0);

}
