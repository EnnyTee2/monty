#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
	FILE *file;
	char *line_buff = NULL;
	size_t len = 0;
	ssize_t nread;
	char *opcode;
	
	if (argc != 2)
	{
		fprintf(stderr, "Usage: monty file\n");
		exit(EXIT_FAILURE);
	}
	
	file = fopen(argv[1], "r");
	
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	while((nread = getline(&line_buff, &len, file)) != -1)
	{
		opcode = strtok(line_buff, "\n\t\r ");
		if (!opcode && opcode[0] != '#')
		{
			printf("correct opcode");
		}
		
	}
	fclose(file);
}
