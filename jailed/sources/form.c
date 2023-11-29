#include <stdio.h>

void vuln(char buf[])
{
        char buf2[32];

        gets(buf2);
        printf(buf2);
}

int main()
{
        char buf[64];
        
        //flag_generator code is out of scope of this challenge. 
        //It is a magic function that stores the random flag in the buffer
        
      
        FILE * f = fopen("form_flag.txt","r");
        if (f==NULL){
                printf("Error . no flag\n");
                exit(0);
        }

        fgets(buf, 64, f);

        fflush(NULL);

        puts("Please enter your string: \n");
        
        vuln(buf);
}
