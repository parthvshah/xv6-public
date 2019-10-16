#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
	int pid, prio;
	
	pid = atoi(argv[1]);
	prio = atoi(argv[2]);

	chpr(pid, prio);

	exit();
}
