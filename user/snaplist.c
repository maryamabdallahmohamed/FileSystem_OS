// user/snaplist.c
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if (argc != 2) {
    printf("usage: snaplist <directory>\n");
    exit(1);
  }

  if (snaplist(argv[1]) < 0) {
    printf("snaplist failed\n");
    exit(1);
  }

  exit(0);
}
