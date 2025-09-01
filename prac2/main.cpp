#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Student{
	public:
		int id;
		string name;
		Student(string n,int i)
			:id(i),name(n){}
};

vector <Student> students;
map<int,string> studentMap;
int app = 1;

void mapIng(vector <Student> students){
	for(auto &s : students){
		studentMap[s.id]=s.name;
	}
}

void serchStudent (){
	system("clear");
	int i;
	try{
		cin >> i;
		try{
			if(studentMap.find(i) != studentMap.end()){
				cout << "Name : " <<studentMap.find(i) <<" ID " << studentMap.find(i) <<" .\n";}
		}catch(...){
		
		}

	}catch(...){
		cout <<"Enter the correct input.\n";	
	}
}


void exit(){
	system("clear");
	app = 0;
}
void showStudent(){}
void addStudent(){}
int main(){;
	int numOption;
	students.push_back(Student("Sara",101));
	students.push_back(Student("Amir",102));
	students.push_back(Student("Omid",103));
	
	mapIng(students);
	while(app){
	numOption = 0;
	system("clear");
	cout <<"Please select the appropriate option.\n";
	cout <<"1 # List of all students.\n";
	cout <<"2 # Search for a student by ID.\n";
	cout <<"3 # Add a new student.\n";
	cout <<"4 # Exit. \n";

	try{
		cin >> numOption;
		throw(99);
		if(numOption < 5 && numOption > 0){
			switch(numOption){
				case 1:
					showStudent();
					break;
				case 2:
					serchStudent();
					break;
				case 3:
					addStudent();
					break;
				case 4:
					exit();
					break;
		
			}
		}else{
			cout <<"Enter the correct input.\n";  
			return 0;
		}
	}
	catch(...){
		cout <<"Enter the correct input.\n";
		return 0;
	}

	}
}
