#include<stdio.h>
#include<ctype.h>

void print_letter(char arg[]);
int can_print_it(char ch);

int main(int argc, char *argv[])
{
        int i = 0;

        for (i = 1; i < argc; i++){
                print_letter(argv[i]);
        }

        return 0;

}


void print_letter(char *arg)
{
        int i = 0;
        for(i=0; arg[i] != '\0';i++ ){
                char ch = arg[i];

                if(can_print_it(ch)) {
                        printf("'%c' == %d \n", ch ,ch);
                }
        }

}


int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch); 

}
