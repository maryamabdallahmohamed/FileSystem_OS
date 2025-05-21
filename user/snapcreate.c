#include "user/user.h"

int
main(int argc, char *argv[])
{
  if (argc != 2) {
    printf("Usage: snapcreate <file>\n");
    exit(1);
  }

  if (snapcreate(argv[1]) < 0) {
    printf("snapcreate failed\n");
    exit(1);
  }

  exit(0);
}

