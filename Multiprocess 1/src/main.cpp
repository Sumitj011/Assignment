#include<header.h>

using namespace std;
	
int main(int argc, char *arg[])
{
	if(argc != 2)
	{
		cerr<<"arguments should be 2 in number"<<endl;
		exit(EXIT_FAILURE);
	}
	char *file = argv[1];
	
	fstream f;
	string line;
	int pid = fork();
	
	if (pid == 0)
	{
		cout<<"this is a child process with pid: "<<getpid()<<endl;
		fwrite(file,line);
		cout<<"child process ends"<<endl;
	}
	else
	{	
		wait(0);
		cout<<"this is a parent process with pid : "<<getpid()<<endl;
		fread( file,f);
		cout<<"parent process ends"<<endl;
	}
}
	 
