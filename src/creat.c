#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// The creat function (yes, creat) is a combination of syscalls to create
// files in Unix

char *filename = "/home/omar/Escritorio/flora/app-admin/equo/equo-319.ebuild";

int fd;

int main(int argc, char *argv[]) {
    fd = creat(filename, 0644);

    if (fd == -1)
        return -1;

    return 0;
}
