#include <stdio.h>

int  main(int agrc, char *argv[])
{
        int areas[] = {1,2,3,4,5};

        char name[] = "Zed";

        char full_name[] = {
        'Z','e','d',
        ' ', 'A','.', ' ',
        'S', 'h', 'a', 'w','\0' 
        };

        printf(" The size of an int: %ld\n", sizeof(int));
        printf(" The size of an areas: %ld\n", sizeof(areas));
        printf(" The number of an areas: %ld\n", sizeof(areas) / sizeof(int));
        printf(" The first area id: %d, the 2nd area is : %d\n", areas[0],areas[1]);
        printf(" The size of an char: %ld\n", sizeof(char));
        printf(" The size of an name: %ld\n", sizeof(name));
        printf(" The number of name: %ld\n", sizeof(name) / sizeof(char));
        printf(" The size of an full_name: %ld\n", sizeof(full_name));
        printf(" The number of an full_name: %ld\n",sizeof(full_name) / sizeof(char));
        printf(" name=\"%s\"  and  full_name=\"%s\" \n", name,full_name);
}
