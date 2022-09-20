include<stdio.h>
#include<unistd.h>
int main()
{
	int p_id,p_pid;
	p_id=getpid();
	p_pid=getpid();
	printf("process identifier:%d\n",p_id);
	printf("parent process identifier:%d\n",p_pid);
	return 0;	
}
