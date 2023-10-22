#include <stdio.h>

struct message{
    int msg_id;
    char msg[20];
};

void main()
{
    struct message basketball;
    struct message football;
    basketball.msg_id=1;
    strcpy(football.msg, "hello");
    printf("%d\n", basketball.msg_id);
    printf("%s", football.msg);
}
