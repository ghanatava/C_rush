#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFER_SIZE 80

char buffer[BUFFER_SIZE];

int main(int argc,char *argv[]){
	int file_descriptor=STDIN_FILENO;
	
	if (argc>1){
	    file_descriptor=open(argv[1],O_RDONLY);
	    if(file_descriptor==-1){
	        write(STDERR_FILENO,"no such file or directory\n",26); 
		exit(EXIT_FAILURE); 
	    }
	}
	ssize_t bytes_read;
	while((bytes_read = read(file_descriptor,buffer,BUFFER_SIZE))){
	    write(STDOUT_FILENO,buffer,bytes_read);
            

	}
	close(file_descriptor);


}
