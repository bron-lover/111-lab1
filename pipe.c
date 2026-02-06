#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	int fds[2];
	pipe(fds);
	for (int i = 0; i < 2; i++)
	{
		printf("fds[%d] = %d\n", i, fds[i]);
	}
	return 0;
}
