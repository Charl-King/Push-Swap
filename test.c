#include "list.h"
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    t_list l1;
    t_list l2;
    l1.data = 1;
    l1.next = &l2;
    l2.data = 2;
    l2.next = NULL;
    printf("%d\n",l1.next->data);
}