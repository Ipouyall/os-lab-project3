#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"



int
main(int argc, char *argv[])
{  
  set_lottery_params(atoi(argv[1]), atoi(argv[2]));

  exit();
}