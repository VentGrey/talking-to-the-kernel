#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*
 * The open() syscall maps a file fiven by a path to a file descriptor
 * which returns it on success. The starting file position is zero and the
 * file is opened by the given flags
 */

// int open(const char *name, int flags);
// int open(const char *name, int flags, mode_t mode);


int main(int argc, char *argv[]) {

        int fd;

        /* The following code opens a Gentoo ebuild in Read Only */
        fd = open("/home/omar/Escritorio/flora/app-admin/equo/equo-319.ebuild",
                  O_RDONLY);

        // In case fd fails to open the file return 1 instead
        if (fd == -1)
                return 1;

        return 0;
}

