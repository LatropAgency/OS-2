#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
void main() {
	int fp;
	long offset, lpos;
	fp = open("OS09_07.txt", O_RDWR);
	if (fp<0)
	    return;
	offset = 0L;
	lpos = lseek(fp, offset, SEEK_SET);
	write (fp, "dd", 2);
	close(fp);
}
