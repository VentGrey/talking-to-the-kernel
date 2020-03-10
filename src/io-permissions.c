#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {

        /* Here we handle permissions using a file specified in a string
         * variable for the same Gentoo ebuild but handling permissions
         * correctly
         * */

        int fd;
        char *file = "/home/omar/Escritorio/flora/app-admin/equo/equo-319.ebuild";

        fd = open(file, O_WRONLY | O_CREAT | O_TRUNC,
                  S_IWUSR | S_IRUSR | S_IWGRP | S_IRGRP | S_IROTH);

        /* Here is a brief explanation on FILE permissions
         * S_IWUSR -> The owner has write permissions
         * S_IRUSR -> The owner has read permissions
         * S_IWGRP -> The group has write permissions
         * S_IRGRP -> The group has read permissions
         * S_IROTH -> EVERONE ELSE has read permissions
         * */




        return 0;
}
