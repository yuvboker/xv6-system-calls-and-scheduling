#include "types.h"
#include "schedulinginterface.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    int id = atoi(argv[1]);
    if (id < 1 || id > 3) {
        printf(2, "####### WRONG POLICY VALUE ENTERED ######\n");
        exit(0);
    }
    policy(id);
    exit(0);
}