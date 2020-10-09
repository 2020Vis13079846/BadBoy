#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>

int main() {
    int fd;
    int *map;
    int size = sizeof(int);
    char *name = "/a";

    shm_unlink(name);
    fd = shm_open(name, O_RDWR | O_CREAT, (mode_t)0600);
    map = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    *map = 0;
}
