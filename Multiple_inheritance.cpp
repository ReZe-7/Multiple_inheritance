#include <iostream>

using namespace std;

// calss person

class person

{

	char name[30];

	int age;

	public:

	void read()

	{

		cout<<"Enter Name:";

		cin>>name;

		cout<<"Enter Age:";

		cin>>age;

	}

    void show()

    {

        cout<<"Name : "<<name<<endl;

	    cout<<"Age : "<<age<<endl;

	}

};

// class company

class company

{

	char name[30];

	int empid;

	public:

		void read()

		{

			cout<<"Enter Company Name : ";

			cin>>name;

			cout<<"Enter Employee ID : ";

			cin>>empid;

		}

		void show()

		{

			cout<<"Company Name : "<<name<<endl;

			cout<<"Employee ID : "<<empid<<endl;

		}

};

// class employee

class employee : public person,public company

{

	char dept[10];

	float salary;

	public :

		void read()

		{

			person::read();

			company::read();

			cout<<"Enter Department : ";

			cin>>dept;

			cout<<"Enter Salary : ";

			cin>>salary;

		}

		void show()

		{

			person::show();

			company::show();

			cout<<"Department : "<<dept<<endl;

			cout<<"Salary : "<<salary<<endl;

		}

} ;

//main() function

int main()

{

	employee a;

	cout<<"Enter Your Information :"<<endl;

	a.read();

	cout<<"\nEntered Details : "<<endl;

	a.show();

	return 0;

}
