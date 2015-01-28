#include <fcntl.h>
#include <stdio.h>

#include "get_next_line.h"

int		main(int ac, char **av)
{
	int		fd;
	char	*line;
	int		ret;
	if (ac < 2)
		fd = 0;
	else
		fd = open(av[1], O_RDONLY);

	while ((ret = get_next_line(fd, &line)) > 0)
	{
		printf("%i|||%s|||\n", ret, line);
	}
	if (ret < 0)
		printf("Something went wrong!\n");

	return (0);
}
