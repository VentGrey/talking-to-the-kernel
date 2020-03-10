#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {

        // You can trade off the previous file with a smaller open() syscall

        int fd;
        char *file = "/home/omar/Escritorio/flora/app-admin/equo/equo-319.ebuild";

        fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0664);

        if (fd == -1 )
                     return 1;





        return 0;
}
