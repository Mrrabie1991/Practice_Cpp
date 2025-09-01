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
map<string,int> studentMap;
void mapIng(vector <Student> students){
	for(auto &s : students){
		studentMap[s.name]=s.id;
	}
}
int main(){

	students.push_back(Student("Sara",101));
	students.push_back(Student("Amir",102));
	students.push_back(Student("Omid",103));
	
	mapIng(students);
	while(1){
		
	for(auto &s : studentMap){
		cout <<"Name : "<<s.first<<" ID : "<<s.second<<endl;
	}
	}
}
