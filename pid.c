#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
        
    int my_pid = getpid();
    printf("%u\n", my_pid);
    int my_ppid = getppid();
    printf("%u\n", my_ppid);
    return (0);
}
