#include <iostream>
#include <csignal>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;
int pid,i;

static void func1(int id)
{      

         cout<<"I am child :"<<endl;
         for( i=1;i<10;i++)
          {
             if(i% 2!=0)  // Printing Odd numbers for Child
             cout<<"having Odd numbers:"<<i<<" "<<endl;
//             exit(0);
          }
	cout<<"Child Died"<<endl;
	wait(NULL);
	cout<<"ID: "<<id<<endl;
	
	
}


int main()
{
	signal(SIGCHLD, func1);
	pid = fork();
	
	if(pid == 0)
	{
		sleep(5);
      		cout<<"Child"<<endl;
		
	}	
	else
	{	
		
		
		
		wait(0);
		cout<<"Parent"<<endl;
		
             for(int j=1;j<10;j++)
            { 
               if(j% 2==0)  // Printing even numbers for Parent
               cout<<"having even numbers:"<<j<<" "<<endl;
		
	}
       }    cout<<"\nParent Dies"<<endl;


	return 0;
}