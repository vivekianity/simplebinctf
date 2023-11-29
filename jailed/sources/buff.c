#include <stdio.h>

void win(){
        char buf[64];
        FILE * f = fopen("buff_flag.txt","r");
        if (f==NULL){
                printf("Error . no flag\n");
                exit(0);
        }

        fgets(buf, 64, f);
        printf("You won. The flag is %s\n",buf);
        fflush(NULL);
}

void vuln()
{
        char buf[32];
        printf("Your fortunes are at %p\n", win);
        fflush(NULL);
        gets(buf);
        printf("Time to go back. Jumping to return address %p\n",  __builtin_return_address(0));
        fflush(NULL);
}

int main()
{
        char buf[32];

        printf("Flag B01 - CONGOMORTYTAN\n");
        puts("Please enter your string: \n");
        fflush(NULL);
        vuln();
        return 0;
}

