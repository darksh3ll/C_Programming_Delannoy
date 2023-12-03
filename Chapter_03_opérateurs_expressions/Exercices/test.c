#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

int count(int arr[]){
    int count = sizeof(arr)/sizeof(arr[0]);
    return count;

};
int main()
{
<<<<<<< HEAD
    int array[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d",array[i]);
    }
    
=======
    int array[] = {1, 2, 3, 4, 2, 5, 2, 10};
    int y = count(array);
    return 0;
>>>>>>> 97b67c5a92905139739682ed44e2b6a9db167796
}
