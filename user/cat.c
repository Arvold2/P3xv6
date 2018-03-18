#include "types.h"
#include "stat.h"
#include "user.h"

char buf[512];

void
cat(int fd)
{
  int n;

  while((n = read(fd, buf, sizeof(buf))) > 0)
    write(1, buf, n);
  if(n < 0){
    printf(1, "cat: read error\n");
    exit();
  }
}

int
main(int argc, char *argv[])
{
  char* i = NULL;
  printf(1, "Before: %d\n", *i);
  *i = 'd';
  printf(1, "After: %d\n", *i);


   exit();
}
