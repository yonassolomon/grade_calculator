 //grade calculator
#include<iostream>
#include <string>
 using namespace std;
struct DateOfBirth {
    int year;
    int month;
    int day;
};

 struct list{
     string name;
     char id[5];//the id character contain 5 character
     DateOfBirth dob;
     double mark[5];//assume the students take 5 subject
double total=0;
 };
 void accept(){
     //this code work for 50 or not more students
     list l[50];
     char exit;
int i=0;
     do {

             cout << "enter the name of the student first name and last name\n";
             getline(cin,l[i].name);
             cout<<"entre the id\n ";
             cin>>l[i].id;
             cout<<"enter birth of date(year-month-day)\n";
             cin>>l[i].dob.year;
             cin>>l[i].dob.month;
             cin>>l[i].dob.day;
             cout<<"entre the marks for each subject\n";
             for(int j=0;j<5;j++){
                 cin>>l[i].mark[j];
                 l[i].total+=l[i].mark[j];
             }
             cout << "enter 'E' to work for only the entered number of students else press 'n' to continue or any key element \n";
             cin >> exit;
             cin.ignore();

     } while (exit!='E');
 }
 void display(){
     list l[50];
     for(int i=0;i<50;i++){
         cout<<"name of the student\n";
         cout<<l[i].name;
         cout<<"id \n";
         cout<<l[i].id;
         cout<<"birth of date\n";
         cout<<l[i].dob.year<<'-'<<l[i].dob.month<<'-'<<l[i].dob.day;
     }
 }
 void grade(){
     list l[50];
     for (int i = 0; i < 50; ++i) {
         if(l[i].total>=90){
             cout<<"A+"<<endl;
         }
         if(l[i].total>=85&&l[i].total<90){
             cout<<'A'<<endl;
         }
         if(l[i].total>=80&&l[i].total<85){
             cout<<"A-"<<endl;
         }
         if(l[i].total>=75&&l[i].total<80){
             cout<<'B+'<<endl;
         }
         if(l[i].total>=70&&l[i].total<75){
             cout<<'B'<<endl;
         }
         if(l[i].total>=65&&l[i].total<70){
             cout<<'B-'<<endl;
         }
         if(l[i].total>=60&&l[i].total<65){
             cout<<'c+'<<endl;
         }
         if(l[i].total>=50&&l[i].total<60){
             cout<<'C'<<endl;
         }
         if(l[i].total>=45&&l[i].total<50){
             cout<<'D'<<endl;
         }
         if(l[i].total<45){
             cout<<'F'<<endl;
         }
     }
 }

 int main(){
   accept();
   display();
   grade();
     return 0;
 }
