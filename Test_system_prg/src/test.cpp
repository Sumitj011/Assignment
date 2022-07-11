#include<test1.h>

int main(int argc, char* argv[])
{
	int n, even, odd, pid;

	n=atoi(argv[1]);

	pid=fork();
    if(pid==0)
	{
		for(int i=1; i<=n;i++)
		{
			if (i%2!=0)
			cout<<"The ODD number is"<<i<<" "<<endl;
		}
	}
	else
	{
		sleep(5);
		for(int j=1; j<=n; j++)
	    {
			if (j%2== 0)
			cout<<"Even Number"<<j<<" "<<endl;
	    }
	}
	return 0;
}
