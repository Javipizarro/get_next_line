#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int narg, char **xarg)
{
	int		fd;
	char 	*line;

	if (narg == 2)
	{
		fd = open(xarg[1], O_RDONLY);
		printf("El file descriptor es: %d\n", fd);
		while (get_next_line(fd, &line) == 1)
		{
			printf("%s\n", line);
			free(line);
		}
	}
}