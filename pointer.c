#include<stdio.h>

int main(int argc, char *argv[])
{
        int ages[]={23, 43, 12, 89, 2};
        int nums[5][1] = {{23},{43},{12},{89},{2}};
        char *names[] = {
        "Vlan", "Frank",
        "Mary", "John", "abcdefghijk"
        };

        char str[] = {'a','b','c','d','e'};

        int count = sizeof(ages) / sizeof(int);

        int i = 0;

        for(i=0; i<count; i++){
        
                printf("%s has %d years alive.\n ", names[i], ages[i]);
        }

        int *cur_age = ages;
        char **cur_name = names;

        printf("%s\n", *(cur_name +1));
        printf("%c\n", *(*(cur_name+2) + 3) );
        return 0;

        for(i=0; i<count; i++){
        
                printf("%p has %p years alive.\n ", cur_name+i, cur_age+i);
        }
        
        for(i=0; i<count; i++){
        
                printf("%s ----------- %d \n ",names[i], sizeof(names[i]));
        }

        for(i=0; i<count; i++){
        
                printf("%d ----------- %d \n ",ages[i], sizeof(ages[i]));
        }
        
        for(i=0; i<count; i++){
        
                printf("%p ----------- %d \n ",nums[i], sizeof(nums[i]));
        }

        for(i=0; i<count; i++){
        
                printf("%c ----------- %d \n ",str[i], sizeof(str[i]));
        }
}
