#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

int count(int arr[]){
    int count = sizeof(arr)/sizeof(arr[0]);
    return count;

};
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d",array[i]);
    }
    
}
