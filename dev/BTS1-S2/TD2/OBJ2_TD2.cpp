#include <iostream>
#include <string>
#include <vector>

using namespace std;

class student{ // class for students
    private:
        string name;
        float grade;
    public:
        student(string newName, float newGrade){
            this->name=newName;
            this->grade=newGrade;
        }
        string getName() {return this->name;} //name getter
        float getGrade() {return this->grade;} //grade getter
};

class listStudents{ //class to store instances of "student"
    private:
        vector<student> listS;
        int studentAmount; 
    public:
        listStudents(vector<student> students){
            this->listS=students;
            this->studentAmount=students.size(); //get the size
        }

        void addStudent(student newStudent){
            this->listS.push_back(newStudent);
            this->studentAmount=this->listS.size();
        }
        void removeStudent(int index){
            this->listS.erase(listS.begin() + index);
            this->studentAmount=this->listS.size();
        }
        void sortByGrade(){
            int t=0;
            student tx("",0);
            while(t<this->listS.size()){
                for(int i=0; i<this->listS.size()-1; i++) {
                    if (this->listS[i].getGrade()>this->listS[i+1].getGrade()) {
                        tx=this->listS[i];
                        this->listS[i]=this->listS[i+1];
                        this->listS[i+1]=tx;
                        t=0;
                    } else {
                        t+=1;
                    }
                }
            }
        }
        float getAvgGrade(){
            float grades=0; int i;
            for(i=0; i<this->listS.size(); i++){
                grades+=listS[i].getGrade();
            }
            return grades/i;
        }
        int getSize(){ return this->studentAmount; }
        student getStudent(int index){ return listS[index]; }
        void showList(){
            for (int i=0; i<this->listS.size(); i++) {
                cout << "Student #"<< i << "\nName: " << listS[i].getName() << "\nGrade:" << listS[i].getGrade() << "\n";
            }
        }
};

void showResults(listStudents list){ 
    list.sortByGrade();
    student tempStudent = list.getStudent(list.getSize()-1);
    cout << "- Best Student -\nName: " << tempStudent.getName() << "\nGrade: " << tempStudent.getGrade() << "\n";
    tempStudent = list.getStudent(0);
    cout << "- Worst Student -\nName: " << tempStudent.getName() << "\nGrade: " << tempStudent.getGrade() << "\n";
    cout << "\n(Average Grade): " << list.getAvgGrade();
}

student createStudent(){
    string name; float grade;
    cout << "\nName: ";
    cin >> name;
    cout << "\nGrade: ";
    cin >> grade;
    student st(name,grade);
    return st;
}

int main() {
    vector<student> listSt; //create list
    student st1("John", 25); //create instances of student
    student st2("Mort", 20);
    student st3("Goldilocks", 23);
    student st4("Barnabi", 30);
    student st5("Kongoline", 22);
    student st6("Toupe", 21);

    student st7=createStudent();

    listStudents listR(listSt); //create instance of listStudents
    listR.addStudent(st1); //adds entries to our previous instance
    listR.addStudent(st2);
    listR.addStudent(st3);
    listR.addStudent(st4);
    listR.addStudent(st5);
    listR.addStudent(st6);
    listR.addStudent(st7);

    showResults(listR); //shows the best and worst students and the average grade in our "listR" listStudents instance

    return 0;
};