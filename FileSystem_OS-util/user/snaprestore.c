#include "user/user.h"

int
main(int argc, char *argv[])
{
  if (argc != 2) {
    printf("Usage: snaprestore <file>\n");
    exit(1);
  }

  if (snaprestore(argv[1]) < 0) {
    printf("snaprestore failed\n");
    exit(1);
  }

  exit(0);
}
