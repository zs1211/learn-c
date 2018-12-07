#include<stdio.h>

int main(int argc, char *argv[])
{

        char *states[] = {
        "beijign", "shanghai", "chongqing", "shenzhen"
        };

        printf(" argc is %d\n", argc);

       // argv[0] = states[0];

        int i = 0;

        for(i = 0; i<argc; i++) {
       
                printf("arg %d is : %s\n",i,argv[i] );
        }



        for(i = 0; i<4; i++) {
                printf("state %d is : %s\n",i,states[i]);
        }
}
