#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int Courses;
double grade, creditHours;
double totalcredits= 0;
double totalGradePoints=0;

cout<<"Enter number of Courses :";  
cin>>Courses;  

for(int i=1; i<=Courses; i++){  
    cout<<"\nCourses"<<i<<endl;  

    cout<<"Enter Grade Points:";  
    cin>>grade;  

    cout<<"Enter Credit Hours :";  
    cin>>creditHours;  

    totalcredits +=creditHours;  
    totalGradePoints += grade*creditHours;  

    cout<<"Course :"<<i<<"Grade :"<<grade<<endl;

}
double gpa;
double cgpa;
if(totalcredits>0){

gpa=totalGradePoints/totalcredits;

cgpa=gpa;  

cout<<fixed<<setprecision(2);  

cout<<"\nTotal Credits :"<<totalcredits;  
cout<<"\nTotal Grade Points :"<<totalGradePoints;

cout<<"\nSemester GPA :"<<gpa;
cout<<"Overall CGPA :"<<cgpa<<endl;
}
else {
cout<<"Credit hours must be greater than Zero.";
}
return (0);
}
