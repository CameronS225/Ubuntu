#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, const char *argv[])
{
    char cmd[200];
    char path[] = "~/programming/";
    char dest_path[100];
    if(argv[1] == NULL){
        printf("No filename given");
        return 0;
    }

    for(int i = 0; i<argc; i++)
    {
        if (!strcmp(argv[i],"-dest"))
        {
            sprintf(dest_path,"/home/students/c.stewart16/%s", argv[i+1]); 
            //printf("argv+i = |%s|\n",argv[i+1]);
            break;
        }
        else{
            sprintf(dest_path,"/home/students/c.stewart16");
        }
    }
    

 /*   printf("path = %s\n",path);
    printf("destination path = %s\n",dest_path);
    printf("filename = %s\n",argv[1]);
    printf("scp %s%s c.stewart16@ctec.clark.edu:%s \n",path,argv[1], dest_path);*/
    sprintf(cmd,"scp %s%s c.stewart16@ctec.clark.edu:%s ",path,argv[1], dest_path);
    system(cmd);
    return 0;

}