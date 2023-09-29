#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t timer = time(NULL);
    printf("%s", ctime(&timer));
}