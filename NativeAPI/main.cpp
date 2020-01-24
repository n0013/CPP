#include <sys/inotify.h>
#include <unistd.h> //read
#include "AddInNative.h"


#define EVENT_SIZE (sizeof(struct inotify_event))
#define BUF_LEN (1024 * (EVENT_SIZE + 16))

using namespace std;

int main()
{
    CAddInNative::Init;
    

    int fd;
    int wd;
    int lenght;

    char buffer[BUF_LEN];

    fd = inotify_init();
    wd = inotify_add_watch(fd, "/home/ev/1/2/", IN_CREATE | IN_MODIFY | IN_DELETE);
    lenght = read(fd, buffer, BUF_LEN);
}