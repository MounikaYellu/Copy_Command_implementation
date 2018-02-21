#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc ,char **argv)
{
int fd1,fd2;
char str;
fd1=open(argv[1],O_RDONLY);
fd2=open(argv[2],O_WRONLY|O_CREAT,0660);
dup2(fd1,0);
dup2(fd2,1);
while(scanf("%c",&str)!=EOF)
printf("%c",str);
close(fd1);
close(fd2);
return 0;
}
