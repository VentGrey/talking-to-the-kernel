#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*
 * The open() syscall maps a file fiven by a path to a file descriptor
 * which returns it on success. The starting file position is zero and the
 * file is opened by the given flags
 */

int open(const char *name, int flags);
int open(const char *name, int flags, mode_t mode);
