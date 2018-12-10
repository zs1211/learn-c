#include<stdio.h>
#include<ctype.h>
#include<string.h>

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
        for(i=0; i < strlen(arg);i++ ){
                char ch = arg[i];

                if(isalpha(ch) || isblank(ch)) {
                        printf("'%c' == %d \n", ch ,ch);
                }
        }

}


int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch); 

}
