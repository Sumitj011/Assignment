#include <Emp.h>


using namespace std;


int main()
{
	fstream a;
	
	Employee S(98769,"sumit","fresher");

	int pid;
	pid=fork();

	if(pid==0)
	{
		cout<<"child starting"<<endl;
		fstream a;
		a.open("empp.txt", ios::app);
		a.write((char*) &S, sizeof(S));
		a.close();
		cout<<"terminating the child"<<endl;
	}
	else
	{
		wait(0);
		cout<<"parent starting"<<endl;
		ifstream a2;
		a2.open("empp.txt", ios::in);
		a2.seekg(0);
		a2.read((char*) &S, sizeof(S));
		cout<<"empname<<S.empname;
		cout<<"salary"<<S.salary;
		cout<<"ID"<<S.ID;
		a2.close();
		cout<<"terminating the parent"<<endl;
	}
	return 0;
}
