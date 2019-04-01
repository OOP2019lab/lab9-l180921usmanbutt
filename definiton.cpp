#include "address.h"

#include "employee.h"


Address::Address(char* h, char* s, char * c,char* cn)
{
	


	house_Number = h;
	street_Name = s;
	city = c;
	county = cn;

}

Address::Address(const Address& a)
{
	house_Number = new char[strlen(a.house_Number) + 1];

	int i=0;
	for(;a.house_Number[i]!='\0';i++){

	house_Number[i]=a.house_Number[i];
	}
	house_Number[i]='\0';

	street_Name = new char[strlen(a.street_Name) + 1];

	int j=0;
	for(;a.street_Name[i]!='\0';j++)
	{
	street_Name[j]=a.street_Name[j];
	}
	street_Name[j]='\0';

	city = new char[strlen(a.city) + 1];

	int k=0;
	for(;a.city[i]!='\0';k++)
	{
		city[k]=a.city[k];
	}
	city[k]='\0';

	county = new char[strlen(a.county) + 1];

	int l=0;
	for(;a.county[i]!='\0';l++)
	{
		county[l]=a.county[l];
	}
	county[l]='\0';


}

ostream& operator<<(ostream& os, const Address& a)
{
	for(int i=0;a.house_Number[i]!='\0';i++){

	os<<a.house_Number[i];
	}
	os<<endl;
	for(int i=0;a.street_Name[i]!='\0';i++)
	{
	os<<a.street_Name[i];
	}
	os<<endl;
	for(int i=0;a.city[i]!='\0';i++)
	{
		os<<a.city[i];
	}
	os<<endl;
	for(int i=0;a.county[i]!='\0';i++)
	{
		os<<a.county[i];
	}

	return os;
}

const Address& Address::operator=(const Address& a)
{
	house_Number = new char[strlen(a.house_Number) + 1];

	int i = 0;
	for (; a.house_Number[i] != '\0'; i++) {

		house_Number[i] = a.house_Number[i];
	}
	house_Number[i] = '\0';

	street_Name = new char[strlen(a.street_Name) + 1];

	int j = 0;
	for (; a.street_Name[i] != '\0'; j++)
	{
		street_Name[j] = a.street_Name[j];
	}
	street_Name[j] = '\0';

	city = new char[strlen(a.city) + 1];

	int k = 0;
	for (; a.city[i] != '\0'; k++)
	{
		city[k] = a.city[k];
	}
	city[k] = '\0';

	county = new char[strlen(a.county) + 1];

	int l = 0;
	for (; a.county[i] != '\0'; l++)
	{
		county[l] = a.county[l];
	}
	county[l] = '\0';


	return a;
}

Project::Project(char* n, int b, int d)
{
	name = n;

	budget=b;
	duration=d;

}

Project::Project(const Project& p)
{
	name = new char[strlen(p.name) + 1];

	int i=0;
	for(;p.name[i]!='\0';i++)
	{
		name[i]=p.name[i];
	}
	name[i]='\0';

	budget=p.budget;
	duration=p.duration;

}

ostream& operator<<(ostream& os, const Project& p)
{
	for(int i=0;p.name[i]!='\0';i++)
	{
		os<<p.name[i];
	}

	os<<endl;
	os<<p.budget<<endl;
	os<<p.duration;

	return os;
}

const Project&   Project::operator=(const Project& o)
{
	name = new char[strlen(o.name) + 1];

	int i=0;

	for(;o.name[i]!='\0';i++)
	{
		name[i]=o.name[i];
	}
	name[i]='\0';

	budget=o.budget;
	duration=o.duration;

	return o;

}

void Project::setBudget(int b)
{
	budget=b;

}



Project::~Project()
{ 
	delete [] name;
}

Employee::Employee(char* n, const Address& a)
{

	emp_name = n;



	add = new Address(a);
	

}

Employee::Employee(const Employee& e)
{
	emp_name = new char[strlen(e.emp_name) + 1];
	int i = 0;

	for (; e.emp_name[i] != '\0'; i++)
	{
		emp_name[i] = e.emp_name[i];
	}
	emp_name[i] = '\0';

	add = new Address(*e.add);

	p = new Project(*e.p);

}

ostream& operator<<(ostream& os, const Employee& e)
{

	for (int i = 0; e.emp_name[i] != '\0'; i++)
	{
		os << e.emp_name[i];
	}
	os << endl;

	os << e.add;
	os << endl;
	os << e.p;

	return os;
}

const Employee &   Employee::operator=(const Employee& e)
{
	emp_name = new char[strlen(e.emp_name) + 1];

	int i = 0;
	for (; e.emp_name[i] != '\0'; i++)
	{
		emp_name[i] = e.emp_name[i];
	}
	emp_name[i] = '\0';

	add = new Address(*e.add);
	p = new Project(*e.p);


	return e;
}

Address::~Address() {

	delete[] house_Number;
	delete[] street_Name;
	delete[] city;
	delete[] county;

}