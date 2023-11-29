#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

#define L (30+1)

typedef struct student_s {
    int i;
    long int id;
    char name[L];
    char surname[L];
    int mark;
} student_t;

int main(int argc, char **argv){


    int n,fd; 
    char store_str[L],command[L];
    student_t student_record;
    
    if(argc !=2 ){
        fprintf(stderr," The File enter format: cp file-binary\n");
        exit(1);
    }

    fprintf (stdout,  "Final file:\n");
    fd = open (argv[1], O_RDWR);
    if(fd==-1){
        fprintf(stderr,"The binary file couldnt open");
        exit(1);
    }

    while ((n = read (fd, &student_record, sizeof (student_t))) ==
           sizeof (student_record)) {
        fprintf (stdout, "%d %ld %s %s %d\n", student_record.i, student_record.id,
                 student_record.name, student_record.surname, student_record.mark);
    }

    

    do{
        fprintf(stdout,"Command: ");
        fgets(store_str, L, stdin); //stdin represents standart input
        sscanf(store_str, "%s", command);
        if(strcmp(command,"E")==0){
            break;
        }
        sscanf(store_str, "%s%d",&n);
        lseek(fd,((n-1)*sizeof(student_t)), SEEK_SET);
        if(strcmp(store_str,"R") ==0){
            read (fd,&student_record,sizeof(student_t));
            fprint(stdout,"%d %ld %s %s% d\n", student_record.i, student_record.id,
                   student_record.name, student_record.surname, student_record.mark);
        }   else if(strcmp(store_str,"W")==0){
            scanf("%d%ld%s%s%d", &student_record.i, &student_record.id,
                   student_record.name, student_record.surname, &student_record.mark);
            write(fd,&student_record, sizeof(student_t));
        }
    }while(strcmp(command,"E")!=0);


    close(fd);

    return 0;
}