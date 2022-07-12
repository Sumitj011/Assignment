#pragma once

#include<iostream>
#include<fstream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <vector>
#include<cstring>
#define BUF_SIZE 2000

using namespace std;

class Employee
{
	private:
		int ID;
		int salary;
		string empname;
	
	public:
		Employee(){}
		Employee(int I, int s, string e)
	{
			ID = I; 
			salary = s;
			empname = e;
	}

};
