/*
 20:46 24-03-2021
 Implementation of OOP
 
 The below code is an example implementation of classses, objects, inheritance, polymorphism, Encapsulation
*/

#include<iostream>
 using namespace std;
 
 class human{
 	
 	private:											// Encapsulation
 		int salary;
 		string secret;
 	
 	public:
 		string name;
 		int age;
 		
 		int getsalary()
 		{
 			return salary;
		 }
		void setsalary(int s)
		{
			salary=s;
		}
		string getsecret()
		{
			return secret;
		}
		void setsecret(string s)
		{
			secret=s;
		}
 };
 
 class covid_symptoms:public human{							// Inheritance
 	public:
 		bool cough;
 		bool fever;
 		bool cold;
 		string getsecret()
 		{
 			return "Private";
		 }
 		covid_symptoms(int a,string b,bool c,bool d,bool e)   // Constructor
 		{
 			age=a;
 			name=b;
 			cold=c;
 			fever=d;											
 			cough=e;
		 }
 };
 
 int main()
 {
 	covid_symptoms  unKNOWN(19,"Anonymous",false,false,false);
 	unKNOWN.setsalary(1000);
 	unKNOWN.setsecret("Data is Money");

 	cout<<unKNOWN.getsalary()<<endl;
 	cout<<unKNOWN.getsecret()<<endl;
 	cout<<unKNOWN.age;
 }
