#include<stdio.h>
#define FILE_READ "file.txt"

    int main()

{
    FILE * filp;
    int count = 1;
    char c;
    filp = fopen(FILE_READ, "r");
    if(filp == NULL)
        printf("file not found\n");
    while((c = fgetc(filp)) != EOF) {
        if(c == ' ')
            count++;
    }
    printf("words = %d\n", count);
    return 0;
}
