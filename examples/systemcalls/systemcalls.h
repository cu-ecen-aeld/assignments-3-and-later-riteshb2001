#include <stdio.h>
#include <stdbool.h>
#include <stdarg.h>
#include <unistd.h>     /* fork(), execv(), dup2(), _exit() */
#include <sys/types.h>  /* pid_t */
#include <sys/wait.h>   /* waitpid(), WIFEXITED(), WEXITSTATUS() */
#include <fcntl.h>      /* open(), O_WRONLY|O_CREAT|O_TRUNC */
#include <stdlib.h>
bool do_system(const char *command);

bool do_exec(int count, ...);

bool do_exec_redirect(const char *outputfile, int count, ...);
