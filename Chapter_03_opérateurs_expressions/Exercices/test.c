#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

int count(int arr[]){
    int count = sizeof(arr)/sizeof(arr[0]);
    return count;

};
int main()
{
    int array[] = {1, 2, 3, 4, 2, 5, 2, 10};
    int y = count(array);
    return 0;
}
