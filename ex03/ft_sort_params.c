#include <unistd.h>

int main(int argc, char **argv)
{
	char c[argc];
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		c[i-1] = argc[i];
		i++;
	}
	i = 0;
	while (i < argc)
	{
		j = i;
		while (j > 0)
		{
			if (argv[j - 1] > argv[j])
			{
				char *tmp;
				tmp = argv[j];
				argv[j] = argv[j - 1];
				argv[j - 1] = tmp;
			}
			j--;
		}
		i++;
	}
}
