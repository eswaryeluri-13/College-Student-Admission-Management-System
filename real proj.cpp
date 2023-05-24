//GROUP 16 MEMBERS :
//Pooja Bhoomigha .S - AP21110010387
//Eswar Yeluri - AP21110010388
//Ujjwal Rawat - AP21110010389
//Siva Komal - AP21110010390

#include<bits/stdc++.h>
#include<conio.h>
#include<iomanip>
using namespace std;

int d=0,e=0,f=0;
class student_end
{
 public:
//for 10th class
 float stud_marks,tot_marks;
 float year_of_completion,percentage;
 int x,x1,pc,ug,bt,mt,bs,stu=0;
 int count_;
 int sp_num;
 int i=0,k=0;
 string stu_name,sch_name,roll_no,state,board;
//for intermediate
  string stu_name_1,state_1,sch_name_1,roll_no_1,board_1;
  float year_of_completion_1,percentage_1;
  float stud_marks_1,tot_marks_1;
//for personal details
  string student_name,mail,mother_name,father_name,m_mail,f_mail,m_occupation,f_occupation,caste,community,religion,nationality,mother_tongue,address;
  string ph_no,m_phno,f_phno,d_o_b;
  int eli=0;
  //for symbols taking from char
  char c=47;

 void student_e()
 {
  cout<<"                                                   *********** 10th class details *********** "<<endl<<endl;
  cout<<"  Enter the name of the student : ";
  getline(cin>>ws,stu_name);
  //stu++;
  cout<<endl<<"  SPECIAL NUMBER FOR STUDENT "<<stu_name<<" : ";
  cin>>sp_num;

  //k++;
  cout<<endl<<"  What type of board exam did student write  "<<endl<<"  1)STATE BOARD "<<endl<<"  2)CBSE "<<endl<<"  3)Others "<<endl;
  cout<<"  Choose the number which is given before the education board : ";
  cin>>x;
  switch(x)
  {
   case 1:
     cout<<endl<<"                                       *********** 10th STATE BOARD OF SECONDARY EDUCATION *********** "<<endl;
     cout<<endl;
     cin.ignore(1,'\n');
     cout<<" Which state is the student from : ";
     getline(cin,state);
     cout<<endl;
     cout<<" Enter the name of the student's school : ";
     getline(cin,sch_name);
     cout<<endl;
     cout<<" Enter the roll number of the student : ";
     getline(cin,roll_no);
     cout<<endl;
     cout<<" Enter the year of completion of 10th Standard : ";
     cin>>year_of_completion;
     cout<<endl;
     cout<<" Enter the total marks the student got : ";
     cin>>stud_marks;
     cout<<endl;
     cout<<" Enter the total marks out of the marks the state board has conducted the examinations : ";
     cin>>tot_marks;
     cout<<endl;
     display_s();
     break;

    case 2:
     cout<<endl<<"                                       *********** 10th CENTRAL BOARD OF SECONDARY EDUCATION *********** "<<endl;
     cout<<" Enter the name of the student's school : ";
     cin.ignore(1,'\n');
     getline(cin,sch_name);
     cout<<endl;
     cout<<" Which state is the student from : ";
     getline(cin,state_1);
     cout<<endl;
     cout<<" Enter the roll number of the student : ";
     getline(cin,roll_no);
     cout<<endl;
     cout<<" Enter the year of completion of 10th Standard : ";
     cin>>year_of_completion;
     cout<<endl;
     cout<<" Enter the total marks the student got : ";
     cin>>stud_marks;
     cout<<endl;
     cout<<" Enter the total marks out of the marks the state board has conducted the examinations : ";
     cin>>tot_marks;
     cout<<endl;
     display_s();
     break;
    case 3:
     cout<<endl<<"                                            Mention the board the student had studied : ";
     cin.ignore(1,'\n');
     getline(cin,board);
     cout<<endl<<"                                            *********** "<<board<<" BOARD OF SECONDARY EDUCATION *********** "<<endl<<endl;
     cout<<" Which state is the student from : ";
     getline(cin,state);
     cout<<endl;
     cout<<" Enter the name of the student's school : ";
     getline(cin,sch_name);
     cout<<endl;
     cout<<" Enter the roll number of the student : ";
     getline(cin,roll_no);
     cout<<endl;
     cout<<" Enter the year of completion of 10nth Standard :";
     cin>>year_of_completion;
     cout<<endl;
     cout<<" Enter the total marks the student got : ";
     cin>>stud_marks;
     cout<<endl;
     cout<<" Enter the total marks out of the marks the state board has conducted the examinations : ";
     cin>>tot_marks;
     cout<<endl;
     display_s();
     break;
  }
 cout<<endl;
  cout<<"                                                *********** INTERMEDIATE DETAILS *********** "<<endl<<endl;
  cout<<"  Enter the name of the student : ";
  getline(cin>>ws,stu_name_1);
  cout<<"  What type of board exam did student write  "<<endl<<"  1)STATE BOARD "<<endl<<"  2)CBSE "<<endl<<"  3)Others "<<endl;
  cout<<"  Choose the number which is given before the education board : ";
  cin>>x1;
  switch(x1)
  {
   case 1:
     cout<<endl;
     cout<<"                                           *********** STATE BOARD OF INTERMEDIATE EDUCATION *********** "<<endl;
     cout<<endl;
     cin.ignore(1,'\n');
     cout<<" Which state is the student from : ";
     getline(cin,state_1);
     cout<<endl;
     cout<<" Enter the name of the student's college : ";
     getline(cin,sch_name_1);
     cout<<endl;
     cout<<" Enter the roll number of the student : ";
     getline(cin,roll_no_1);
     cout<<endl;
     cout<<" Enter the year of completion of intermediate : ";
     cin>>year_of_completion_1;
     cout<<endl;
     cout<<" Enter the total marks the student got : ";
     cin>>stud_marks_1;
     cout<<endl;
     cout<<" Enter the total marks out of the marks the state board has conducted the examinations : ";
     cin>>tot_marks_1;
     cout<<endl;
     display_inter();
     break;

    case 2:
     cout<<"                                       *********** CENTRAL BOARD OF SECONDARY EDUCATION (+1 AND +2) *********** "<<endl;
     cout<<" Which state is the student from : ";
     getline(cin>>ws,state_1);
     cout<<endl;
     cout<<" Enter the name of the student's college : ";
     getline(cin>>ws,sch_name_1);
     cout<<endl;
     cout<<" Enter the roll number of the student : ";
     getline(cin,roll_no_1);
     cout<<endl;
     cout<<" Enter the year of completion of intermediate :";
     cin>>year_of_completion_1;
     cout<<endl;
     cout<<" Enter the total marks the student got : ";
     cin>>stud_marks_1;
     cout<<endl;
     cout<<" Enter the total marks out of the marks the state board has conducted the examinations : ";
     cin>>tot_marks_1;
     cout<<endl;
     display_inter();
     break;
    case 3:
     cout<<endl<<"                                            Mention the board the student had studied : ";
     cin.ignore(1,'\n');
     getline(cin,board_1);
     cout<<endl<<"                                           *********** "<<board_1<<" BOARD OF INTERMEDIATE EDUCATION *********** "<<endl<<endl;
     cout<<" Which state is the student from : ";
     getline(cin,state_1);
     cout<<endl;
     cout<<" Enter the name of the student's college : ";
     getline(cin,sch_name_1);
     cout<<endl;
     cout<<" Enter the roll number of the student : ";
     getline(cin,roll_no_1);
     cout<<endl;
     cout<<" Enter the year of completion of intermediate :";
     cin>>year_of_completion_1;
     cout<<endl;
     cout<<" Enter the total marks the student got : ";
     cin>>stud_marks_1;
     cout<<endl;
     cout<<" Enter the total marks out of the marks the state board has conducted the examinations : ";
     cin>>tot_marks_1;
     cout<<endl;
     display_inter();
     break;

  }

 }

void display_s()
{
 ofstream fout,fo;
 fout.open("test.txt",ios::app);
 fout<<"***************************"<<endl;
 fout<<"***************************"<<endl;
 //fo.open("test1.txt",ios::app);
 //fo<<"STUDENT NUMBER"<<"              "<<"BOARD"<<"              "<<"STATE"<<"              "<<"SCHOOL NAME"<<"              "<<"ROLL NUMBER"<<"              "<<"YEAR OF COMPLETION"<<"              "<<"STUDENT MARKS"<<"/"<<"TOTAL MARKS"<<"              "<<"PERCENTAGE"<<endl;
 //fo<<"STUDENT NUMBER"<<endl<<"BOARD"<<endl<<"STATE"<<endl<<"SCHOOL NAME"<<endl<<"ROLL NUMBER"<<endl<<"YEAR OF COMPLETION"<<endl<<"STUDENT MARKS"<<"/"<<"TOTAL MARKS"<<endl<<"PERCENTAGE"<<endl;

 cout<<"                                                *********** DETAILS OF CLASS 10 *********** "<<endl<<endl;
 cout<<"  Name of the student : "<<stu_name<<endl;
 cout<<"  SPECIAL NUMBER OF STUDENT : "<<sp_num<<endl;
 //k++;
   //i++;
  //sp_num[i]++;
  //fo<<""<<sp_num<<"              ";
 fout<<"*Details of class 10*"<<endl;
 fout<<"Name of the student : "<<stu_name<<endl;
 fout<<"SPECIAL NUMBER OF STUDENT : "<<sp_num<<endl;
 if(x==1)
{

 cout<<"  Name of the state the student has studied in : "<<state<<endl;
 cout<<"  Name of the school the student has studied 10th std : "<<sch_name<<endl;
 cout<<"  Register number of the student in 10th standard : "<<roll_no<<endl;
 cout<<"  Year of completion of secondary education : "<<year_of_completion<<endl;
 fout<<"Name of the state the student has studied in : "<<state<<endl;
 fout<<"Name of the school the student has studied 10th std : "<<sch_name<<endl;
 fout<<"Register number of the student in 10th standard : "<<roll_no<<endl;
 fout<<"Year of completion of secondary education : "<<year_of_completion<<endl;
//fo<<"		        STATE"<<"     	      "<<state<<"                   "<<sch_name<<"      	     	         "<<roll_no<<"       		          	"<<year_of_completion<<"     		  	   	";
 //fo<<"STATE"<<"              "<<state<<"              "<<sch_name<<"               "<<roll_no<<"               "<<year_of_completion<<"               ";

}
if(x==2)
{
 cout<<"  Name of the state the student has studied in : "<<state<<endl;
 cout<<"  Name of the school the student has studied 10th std : "<<sch_name<<endl;
 cout<<"  Register number of the student in 10th standard : "<<roll_no<<endl;
 cout<<"  Year of completion of secondary education : "<<year_of_completion<<endl;
 fout<<"Name of the state the student has studied in : "<<state<<endl;
 fout<<"Name of the school the student has studied 10th std : "<<sch_name<<endl;
 fout<<"Register number of the student in 10th standard : "<<roll_no<<endl;
 fout<<"Year of completion of secondary education : "<<year_of_completion<<endl;
  //fo<<"CENTRAL"<<"\t"<<state<<"\t"<<sch_name<<"\t"<<roll_no<<"\t"<<year_of_completion<<"\t";


}
if(x==3)
{
 cout<<"  Name of the board the student had studied : "<<board<<endl;
 cout<<"  Name of the state the student has studied in : "<<state<<endl;
 cout<<"  Name of the school the student has studied 10th std : "<<sch_name<<endl;
 cout<<"  Register number of the student in 10th standard : "<<roll_no<<endl;
 cout<<"  Year of completion of secondary education : "<<year_of_completion<<endl;
 fout<<"Name of the board the student had studied : "<<board<<endl;
 fout<<"Name of the state the student has studied in : "<<state<<endl;
 fout<<"Name of the school the student has studied 10th std : "<<sch_name<<endl;
 fout<<"Register number of the student in 10th standard : "<<roll_no<<endl;
 fout<<"Year of completion of secondary education : "<<year_of_completion<<endl;
 //fo<<" "<<board<<"\t"<<state<<"\t"<<sch_name<<"\t"<<roll_no<<"\t"<<year_of_completion<<"\t";


}

  percentage=(stud_marks*100)/tot_marks;
  cout<<"  Total Marks : "<<stud_marks<<" out of "<<tot_marks<<endl;
  cout<<"  Total Percentage : "<<fixed<<setprecision(3)<<percentage<<endl;
  fout<<" Total Marks : "<<stud_marks<<" out of "<<tot_marks<<endl;
  fout<<" Total Percentage : "<<fixed<<setprecision(3)<<percentage<<endl;
 // fo<<stud_marks<<"/"<<tot_marks<<"                                                     "<<percentage<<endl;
  //fo<<stud_marks<<"/"<<tot_marks<<"        "<<percentage<<endl;
//fo.close();
fout.close();
/*ifstream fi("test1.txt");

while(fi>>sp_num>>board>>state>>sch_name>>roll_no>>year_of_completion>>stud_marks>>c>>tot_marks>>percentage)
{
    cout<<sp_num<<"\t"<<board<<"\t"<<state<<"\t"<<sch_name<<"\t"<<roll_no<<"\t"<<year_of_completion<<"\t"<<stud_marks<<"/"<<tot_marks<<"\t"<<percentage<<endl;;
}
//system("CLS");
fi.close();*/

}

void display_inter()
{
ofstream fout,fo;
 fout.open("test.txt",ios::app);
 //fo.open("test1.txt",ios::app);

cout<<"                                                *********** DETAILS OF CLASS 11 & 12 *********** "<<endl;
  cout<<"  Name : "<<stu_name_1<<endl;
  fout<<"**Details of class 11 & 12** "<<endl;
  fout<<"Name : "<<stu_name_1<<endl;
  if(x1==1){
 cout<<"  Name of the state the student has studied in : "<<state_1<<endl;
 cout<<"  Name of the school the student has studied : "<<sch_name_1<<endl;
 cout<<"  Register number of the student in 12th standard : "<<roll_no_1<<endl;
 cout<<"  Year of completion of intermediate : "<<year_of_completion_1<<endl;
 fout<<"Name of the state the student has studied in : "<<state_1<<endl;
 fout<<"Name of the school the student has studied : "<<sch_name_1<<endl;
 fout<<"Register number of the student in 12th standard : "<<roll_no_1<<endl;
 fout<<"Year of completion of intermediate : "<<year_of_completion_1<<endl;
 //fo<<" STATE"<<" "<<state_1<<" "<<sch_name_1<<" "<<roll_no_1<<" "<<year_of_completion_1<<" ";

  }
  if(x1==2)
  {
 cout<<"  Name of the state the student has studied in : "<<state_1<<endl;
 cout<<"  Name of the school the student has studied : "<<sch_name_1<<endl;
 cout<<"  Register number of the student in 10th standard : "<<roll_no_1<<endl;
 cout<<"  Year of completion of secondary education : "<<year_of_completion_1<<endl;
 fout<<"Name of the state the student has studied in : "<<state_1<<endl;
 fout<<"Register number of the student in 10th standard : "<<roll_no_1<<endl;
 fout<<"Year of completion of secondary education : "<<year_of_completion_1<<endl;
 //fo<<" CENTRAL"<<"\t"<<state_1<<"\t"<<sch_name_1<<"\t"<<roll_no_1<<""<<year_of_completion_1<<"\t";

  }
  if(x1==3)
{
 cout<<"  Name of the board the student had studied : "<<board_1<<endl;
 cout<<"  Name of the state the student has studied in : "<<state_1<<endl;
 cout<<"  Name of the school the student has studied 10th std : "<<sch_name_1<<endl;
 cout<<"  Register number of the student in 10th standard : "<<roll_no_1<<endl;
 cout<<"  Year of completion of secondary education : "<<year_of_completion_1<<endl;
 fout<<"Name of the board the student had studied : "<<board_1<<endl;
 fout<<"Name of the state the student has studied in : "<<state_1<<endl;
 fout<<"Name of the school the student has studied 10th std : "<<sch_name_1<<endl;
 fout<<"Register number of the student in 10th standard : "<<roll_no_1<<endl;
 fout<<"Year of completion of secondary education : "<<year_of_completion_1<<endl;
 //fo<<" "<<board_1<<"\t"<<state_1<<"\t"<<sch_name_1<<"\t"<<roll_no_1<<""<<year_of_completion_1<<"\t";

}

  percentage_1=(stud_marks_1*100)/tot_marks_1;
  cout<<"  Total Marks : "<<stud_marks_1<<" out of "<<tot_marks_1<<endl;
  cout<<"  Total Percentage : "<<fixed<<setprecision(3)<<percentage_1<<endl;
  fout<<" Total Marks : "<<stud_marks_1<<" out of "<<tot_marks_1<<endl;
  fout<<" Total Percentage : "<<fixed<<setprecision(3)<<percentage_1<<endl;
  fo<<stud_marks_1<<"/"<<tot_marks_1<<"  "<<percentage_1<<endl;
  fo.close();
  fout.close();
/*ifstream fi("test1.txt");

while(fi>>board_1>>state_1>>sch_name_1>>roll_no_1>>year_of_completion_1>>stud_marks_1>>c>>tot_marks_1>>percentage_1)
{
    cout<<board_1<<"    "<<state_1<<"    "<<sch_name_1<<"    "<<roll_no_1<<"    "<<year_of_completion_1<<"    "<<stud_marks_1<<"/"<<tot_marks_1<<"    "<<percentage_1<<endl;;
}
//system("CLS");
fi.close();*/

}
void personal_details()
{
    //cin>>sp_num;
    cout<<endl;
    cout<<"Enter the Name of the student : ";
    getline(cin>>ws,student_name);
    cout<<endl;
    cout<<"Enter your personal mail id : ";
    getline(cin,mail);
    cout<<endl;
    cout<<"Enter your phone number : ";
    getline(cin,ph_no);
    cout<<endl;
    cout<<"Enter Mother's name of the student : ";
    getline(cin,mother_name);
    cout<<endl;
    cout<<"Enter Father's name of the student : ";
    getline(cin,father_name);
    cout<<endl;
    cout<<"Enter Mother's phone number : ";
    getline(cin,m_phno);
    cout<<endl;
    cout<<"Enter Father's phone number : ";
    getline(cin,f_phno);
    cout<<endl;
    cout<<"Enter Mother's mail id : ";
    getline(cin,m_mail);
    cout<<endl;
    cout<<"Enter Father's mail id : ";
    getline(cin,f_mail);
    cout<<endl;
    cout<<"Enter Mother's Occupation : ";
    getline(cin,m_occupation);
    cout<<endl;
    cout<<"Enter Father's Occupation : ";
    getline(cin,f_occupation);
    cout<<endl;
    cout<<"Enter the Date Of Birth of the student : ";
    getline(cin,d_o_b);
    cout<<endl;
    cout<<"Enter the Caste of the student : ";
    getline(cin,caste);
    cout<<endl;
    cout<<"Enter the Community of the student : ";
    getline(cin,community);
    cout<<endl;
    cout<<"Enter the Religion of the student : ";
    getline(cin,religion);
    cout<<endl;
    cout<<"Enter the Nationality of the student : ";
    getline(cin,nationality);
    cout<<endl;
    cout<<"Enter the Mother Tongue of the student : ";
    getline(cin,mother_tongue);
    cout<<endl;
    cout<<"Enter the Address of the student : ";
    getline(cin,address);
    cout<<endl;
    display_personal_details();
}
void display_personal_details()
{
    ofstream fout,fou;
    cout<<"                                                *********** PERSONAL DETAILS INFO ***********"<<endl;
    fout<<"                                                *********** PERSONAL DETAILS INFO ***********"<<endl;
    //cout<<"                                                 ";
    fout.open("test.txt",ios::app);
    fou.open("test2.txt",ios::app);
    cout<<endl<<"                                                         SP NUM : "<<sp_num<<endl;
    cout<<"                                              The Name of the student is : "<<student_name<<endl;
    cout<<"                                              Personal mail id of the student : "<<mail<<endl;
    cout<<"                                              Phone number of the student : "<<ph_no<<endl;
    cout<<"                                              Mother's Name of the student : "<<mother_name<<endl;
    cout<<"                                              Father's Name of the student : "<<father_name<<endl;
    cout<<"                                              Mother's phone number of the student : "<<m_phno<<endl;
    cout<<"                                              Father's phone number of the student : "<<f_phno<<endl;
    cout<<"                                              Mother's mail id of the student : "<<m_mail<<endl;
    cout<<"                                              Father's mail id of the student : "<<f_mail<<endl;
    cout<<"                                              Mother's occupation of the student : "<<m_occupation<<endl;
    cout<<"                                              Father's occupation of the student : "<<f_occupation<<endl;
    cout<<"                                              Date of Birth of the student is : "<<d_o_b<<endl;
    cout<<"                                              Caste of the student is : "<<caste<<endl;
    cout<<"                                              Community of the student is : "<<community<<endl;
    cout<<"                                              Religion of the student is : "<<religion<<endl;
    cout<<"                                              Nationality of the student is : "<<nationality<<endl;
    cout<<"                                              Mother Tongue of the student is : "<<mother_tongue<<endl;
    cout<<"                                              Address of the student is : "<<address<<endl<<endl;

    fout<<"The Name of the student is : "<<student_name<<endl;
    fout<<"Personal mail id of the student : "<<mail<<endl;
    fout<<"Phone number of the student : "<<ph_no<<endl;
    fout<<"Mother's Name of the student : "<<mother_name<<endl;
    fout<<"Father's Name of the student : "<<father_name<<endl;
    fout<<"Mother's phone number of the student : "<<m_phno<<endl;
    fout<<"Father's phone number of the student : "<<f_phno<<endl;
    fout<<"Mother's mail id of the student : "<<m_mail<<endl;
    fout<<"Father's mail id of the student : "<<f_mail<<endl;
    fout<<"Mother's occupation of the student : "<<m_occupation<<endl;
    fout<<"Father's occupation of the student : "<<f_occupation<<endl;
    fout<<"Date of Birth of the student is : "<<d_o_b<<endl;
    fout<<"Caste of the student is : "<<caste<<endl;
    fout<<"Community of the student is : "<<community<<endl;
    fout<<"Religion of the student is : "<<religion<<endl;
    fout<<"Nationality of the student is : "<<nationality<<endl;
    fout<<"Mother Tongue of the student is : "<<mother_tongue<<endl;
    fout<<"Address of the student is : "<<address<<endl;

     if(percentage>=50 && percentage_1>=50)
            {

            //fou<<sp_num<<"  "<<student_name<<"  "<<d_o_b<<"  "<<mail<<"  "<<ph_no<<"  "<<father_name<<"   "<<mother_name<<"   "<<"ELIGIBLE_FOR_RESPECTIVE_COURSE "<<endl;
            fou<<sp_num<<"  "<<student_name<<"  "<<d_o_b<<"  "<<mail<<"  "<<ph_no<<"  "<<father_name<<"   "<<mother_name<<"   "<<address<<"  "<<"ELIGIBLE "<<endl;

            }
            else
            {
                //cout<<" NOT ELIGIBLE "<<endl;
                //fou<<"  NOT ELIGIBLE  ";
            //fou<<sp_num<<"  "<<student_name<<"  "<<d_o_b<<"  "<<mail<<"  "<<ph_no<<"  "<<father_name<<"   "<<mother_name<<"   "<<"NOT_ELIGIBLE_FOR_RESPECTIVE_COURSE "<<endl;
            fou<<sp_num<<"  "<<student_name<<"  "<<d_o_b<<"  "<<mail<<"  "<<ph_no<<"  "<<father_name<<"   "<<mother_name<<"   "<<address<<"  "<<"NOT_ELIGIBLE "<<endl;


            }
    fou.close();
    fout.close();

}

void display_stlist()
{
    string sm;
    ifstream fn("test2.txt");
/*while(fn>>sp_num>>student_name>>d_o_b>>mail>>ph_no>>father_name>>mother_name>>sm)
{
    cout<<sp_num<<"  "<<student_name<<"  "<<d_o_b<<"  "<<mail<<"  "<<ph_no<<"  "<<father_name<<"   "<<mother_name<<"   "<<sm<<"   "<<endl;
}*/
while(fn>>sp_num>>student_name>>d_o_b>>mail>>ph_no>>father_name>>mother_name>>address>>sm)
{
cout<<endl;
//cout<<left<<setw(10)<<"SP.NUM"<<left<<setw(10)<<"NAME"<<left<<setw(20)<<"D_O_B"<<left<<setw(19)<<"ST'S_GMAIL"<<left<<setw(15)<<"ST'S P_NO"<<left<<setw(20)<<"ST'S FATHER NAME"<<left<<setw(30)<<"ST'S MOTHER NAME"<<left<<setw(20)<<"ADDRESS"<<"STATUS"<<endl;
cout<<"  "<<left<<setw(8)<<sp_num<<left<<setw(9)<<student_name<<left<<setw(15)<<d_o_b<<left<<setw(25)<<mail<<left<<setw(20)<<ph_no<<left<<setw(20)<<father_name<<left<<setw(15)<<mother_name<<left<<setw(29)<<address<<left<<setw(1)<<sm<<endl;

}
  fn.close();
}
void pcourse()
{
    cout<<endl;
  cout<<"                                                   Which course do the student want to choose or know about : "<<endl<<endl;
  cout<<"                                                           1)UG(undergraduate) 2)PG(postgraduate) "<<endl<<endl<<"                                                              Choose the option given : ";
  cin>>pc;
  if(pc==1)
   {
    cout<<endl;
     cout<<"                                                   ***************1)UG(undergraduate)*************** "<<endl<<endl;
     cout<<endl<<"                                                                     1)BTECH 2)BSC "<<endl<<endl<<"                                                                 Select one of these : ";
     cin>>ug;
     switch(ug)
     {
     case 1:
        cout<<endl;
        cout<<"                                                        *************** (BTECH) ***************  "<<endl<<endl<<"                                                                   1)CSE 2)ECE 3)EEE "<<endl<<endl;
        cout<<"                                                   Choose the given options given to know about them : ";
        cin>>bt;
        if(bt==1)
        {
            cout<<endl<<endl;
          cout<<"                                             *************** COMPUTER SCIENCE ENGINEER (CSE) *************** "<<endl<<endl;
          cout<<"                        *ADMISSION PROCESS :- ENTRANCE EXAM + COUNSELLING "<<endl;
          cout<<"                        *Computer Science and Engineering (CSE) is an academic program at many universities which comprises scientific "<<endl<<"                         and engineering aspects of computing "<<endl;
          cout<<"                        *SUBJECTS STUDENT WILL LEARN :- ENGINEERING MATHEMATICS , COMPUTER PROGRAMMING LANGUAGES(C,PYTHON,C++,JAVA),ETC "<<endl;
          cout<<"                        *STUDY FEES :- 4 LAKHS PER YEAR"<<endl;
          cout<<"                        *POPULAR CAREERS :- SOFTWARE DEVELOPER,COMPUTER SYSTEMS ENGINEER,WEB DEVELOPER , ETC "<<endl<<endl;

        }
        else if(bt==2)
        {
            cout<<endl<<endl;
          cout<<"                                          *************** ELECTRONICS AND COMMUNICATION ENGINEERING (ECE) *************** "<<endl<<endl;
          cout<<"                        *ADMISSION PROCESS :- ENTRANCE EXAM + COUNSELLING "<<endl;
          cout<<"                        *Electronics and Communications Engineering (ECE) involves researching, designing, developing, and testing "<<endl<<"                         electronic equipment used in various systems "<<endl;
          cout<<"                        *SUBJECTS STUDENT WILL LEARN :- ENGINEERING MATHEMATICS , BASIC ELECTRONICS AND COMMUNICATION ENGINEERING ,ETC "<<endl;
          cout<<"                        *STUDY FEES :- 3 LAKHS PER YEAR"<<endl;
          cout<<"                        *POPULAR CAREERS :- ELECTRONICS ENGINEER , FIELD TEST ENGINEER , ELECTRONICS TECHNICIAN , ETC "<<endl;
        }
        else if(bt==3)
        {
         cout<<endl<<endl;
          cout<<"                                          *************** ELECTRICAL AND ELECTRONICS ENGINEERING (EEE) *************** "<<endl<<endl;
          cout<<"                        *ADMISSION PROCESS :- ENTRANCE EXAM + COUNSELLING "<<endl;
          cout<<"                        *Electrical and electronics engineering is an integrated branch of engineering. It also includes the "<<endl<<"                         concepts of power generation & distribution communication & machine control  "<<endl;
          cout<<"                        *SUBJECTS STUDENT WILL LEARN :- APPLIED MATHEMATICS , ELEMENTS OF ELECTRICAL ENGINEERING ,ETC "<<endl;
          cout<<"                        *STUDY FEES :- 3 LAKHS PER YEAR"<<endl;
          cout<<"                        *POPULAR CAREERS :- AEROSPACE ENGINEER , ELECTRICAL ENGINEER , SYSTEMS ENGINEER , ETC "<<endl;
        }
     break;

     case 2:
         cout<<endl;
         cout<<"                                          *************** (BSC) *************** "<<endl<<endl<<"                                              1)Mathematics 2)Chemistry 3)IT(Information technology) "<<endl<<endl;
         cout<<"                                               Choose the given options given to know about them : ";
         cin>>bs;
          if(bs==1)
          {
              cout<<endl<<endl;
              cout<<"                                          *************** BSC MATHEMATICS *************** "<<endl<<endl;
              cout<<"                                *The study of Mathematics in undergraduate deals with the structure, change and space."<<endl<<"                                 Students need to meet the eligibility criteria set up in order to pursue the course "<<endl;
              cout<<"                                *STUDY FEES :- 30K LAKHS PER YEAR "<<endl;
              cout<<"                                *POPULAR CAREERS :- TEACHING , GOVERNMENT SERVICES , ETC "<<endl;
          }
         else if(bs==2)
         {
             cout<<endl<<endl;
              cout<<"                                          *************** BSC CHEMISTRY *************** "<<endl<<endl;
              cout<<"                        *Chemistry provides a foundation for understanding both the basis and applied scientific disciplines at a fundamental level. "<<endl;
              cout<<"                        *STUDY FEES :- 30K LAKHS PER YEAR "<<endl;
              cout<<"                        *POPULAR CAREERS :- TEACHING , ENVIRONMENTAL AND SAFETY SPECIALIST , ETC "<<endl;
         }
         else if(bs==3)
         {
             cout<<endl<<endl;
             cout<<"                                          *************** BSC IT(information technology) *************** "<<endl<<endl;
              cout<<"                        *BSc (Bachelor of Science) in IT is basically about storing, processing, securing, and managing information."<<endl<<"                         This degree is primarily focused on subjects such as software, databases, and networking. "<<endl;
              cout<<"                        *STUDY FEES :- 2 LAKHS PER YEAR "<<endl;
              cout<<"                        *POPULAR CAREERS :- Programmers, Software Developer, Quality Analyst, ETC "<<endl;
         }
         break;

   }
   }
   else if(pc==2)
   {
        cout<<endl;
        cout<<"                                             *************** (MTECH) *************** "<<endl<<endl<<"                           1)Computer Network Engineering  2)Energy Engineering  3)Digital system and signal processing "<<endl<<endl;
        cout<<"                                           Choose the given options given to know about them : ";
        cin>>mt;
        if(mt==1)
          {
        cout<<endl<<endl;
           cout<<"                                              *************** Computer Network Engineering *************** "<<endl<<endl;
           cout<<"                        *The Computer Network Engineering Technology program emphasizes the design, installation, and support of an organization’s"<<endl<<"                         local area network (LAN), wide area network (WAN), network segment, internet, or intranet system. "<<endl;
           cout<<"                        *STUDY FEES :- 1.5 LAKHS "<<endl;
           cout<<"                        *POPULAR CAREERS :- COMPUTER ENGINEERING TECHNICIAN ,NETWORK ADMINISTRATOR , ETC. "<<endl;
          }
          if(mt==2)
          {
           cout<<endl<<endl;
           cout<<"                                              *************** Energy Engineering *************** "<<endl<<endl;
           cout<<"                        *Energy Engineering is the branch of engineering that deals with energy efficiency, power generation, energy services,"<<endl<<"                         facility management, environmental compliance, sustainable energy and renewable energy. "<<endl;
           cout<<"                        *STUDY FEES :- 1.5 LAKHS "<<endl;
           cout<<"                        *POPULAR CAREERS :- ENERGY PERFORMANCE ENGINEER , ENVIRONMENT SOLUTIONS ENGINEER , ETC. "<<endl;
          }
          if(mt==3)
          {
           cout<<endl<<endl;
           cout<<"                                             *************** Digital System and Signal Processing *************** "<<endl<<endl;
           cout<<"                        *Digital Signal Processors (DSP) take real-world signals like voice, audio, video, temperature, pressure, or position "<<endl<<"                         that have been digitized and then mathematically manipulate them."<<endl;
           cout<<"                        *STUDY FEES :- 1.5 LAKHS "<<endl;
           cout<<"                        *POPULAR CAREERS :- Digital Signal Processing Engineer , ETC. "<<endl;
          }

   }
}
 void queries()
 {
     ofstream fout;
     fout.open("test.txt",ios::app);
    string sthu,sthu1;
    int hd;
    cout<<endl;
   cout<<"                                        ---------------- Some queries raised by university authorities ---------------- "<<endl<<endl;

  if(nationality!="indian" || nationality!="INDIAN")
  {
    cout<<endl<<"                                                 How do you know about this university? : ";
    fout<<"How do you know about this university?"<<endl;
    getline(cin>>ws,sthu);
    fout<<sthu;
  }
  if(year_of_completion_1-year_of_completion>2)
  {
    cout<<"                                         Why there is"<<year_of_completion_1-year_of_completion<<" years gap between your 10 th and +2? :"<<endl;
    fout<<"Why there is"<<year_of_completion_1-year_of_completion<<" years gap between your 10 th and +2? :"<<endl;
    getline(cin>>ws,sthu1);
     fout<<sthu1;

  }
  cout<<endl<<"                                                 Do you want to be a 1)DayScholar  2)Hosteler : ";
  fout<<"Do you want to be a 1)DayScholar  2)Hosteler ?"<<endl;
  cin>>hd;
  if(hd==1)
  {
      cout<<endl<<"                                                       ********SELECTED DAYSCHOLAR******** "<<endl<<endl;
      fout<<" SELECTED DAYSCHOLAR "<<endl;
  }
  else if(hd==2)
  {
      cout<<endl<<"                                                         ********SELECTED HOSTELER******** "<<endl<<endl;
      fout<<" SELECTED HOSTELER "<<endl;
  }
 else
 {
     cout<<"                                                    WRONG INPUT  "<<endl;
 }
  fout.close();
 }

};

class univer_end:public student_end
{
 public:
   int dob_1sp,a,i,c,hul=0;
 void check()
 {
  ofstream fl;
  fl.open("test2.txt",ios::app);
  ifstream fis("test2.txt");
  string st1,st2,st3,st4,st5,st6,st7,st8;
    if(stu_name==stu_name_1&& stu_name_1==student_name)
    {
        cout<<endl;
        cout<<"                         Enter the password(SPECIAL NUM) to check the student 's status : ";
        cin>>dob_1sp;
        cout<<endl<<endl;

         while(fis>>sp_num>>st1>>st2>>st3>>st4>>st5>>st6>>st7>>st8)
        {
           if(dob_1sp==sp_num)
            {
            cout<<left<<setw(10)<<"SP.NUM"<<left<<setw(10)<<"NAME"<<left<<setw(20)<<"D_O_B"<<left<<setw(19)<<"ST'S_GMAIL"<<left<<setw(15)<<"ST'S P_NO"<<left<<setw(20)<<"ST'S FATHER NAME"<<left<<setw(30)<<"ST'S MOTHER NAME"<<left<<setw(20)<<"ADDRESS"<<"STATUS"<<endl;
            cout<<"  "<<left<<setw(8)<<sp_num<<left<<setw(9)<<st1<<left<<setw(15)<<st2<<left<<setw(25)<<st3<<left<<setw(20)<<st4<<left<<setw(20)<<st5<<left<<setw(15)<<st6<<left<<setw(29)<<st7<<left<<setw(1)<<st8<<endl<<endl<<endl;
            }
        }
    }
     else
            {
                cout<<"        --------------------------------------------------STUDENT NOT FOUND !!--------------------------------------------------- "<<endl<<endl;
            }
 //}
    fl.close();
    fis.close();
 }

 void commen()
 {
    int cm1=1,coms;
    string comm,comm1;
    cout<<endl;
    /*cout<<" Press '1' if u want to put comments on student :- "<<student_name<<" or click any button to skip : ";
    cin>>cm1;*/
    ofstream fout;
    fout.open("test.txt",ios::app);
    while(cm1==1)
    {
        cout<<endl;
        cout<<" Press '1' if u want to put comments on student :- "<<student_name<<" or click any button to skip : ";
        cin>>cm1;
        if(cm1!=1)
        {
            comm1.resize(comm1.size()-1);
            comm1+=".";
            break;
        }
        cout<<" Type the comments here :- ";
        cin.ignore(1,'\n');
        getline(cin>>ws,comm);
        cout<<endl;
        if(cm1==1)
         {
             comm1+=comm+",";
         }
    }
    cout<<endl<<endl;
    cout<<" *******COMMENTS ON STUDENT******** :- "<<comm1<<endl<<endl;
    fout<<" *******COMMENTS ON STUDENT******** :- "<<comm1;

   fout.close();
 }
 void fee()
 {
    float fe1,fe2,fe3;
   ofstream fout;
   fout.open("test.txt",ios::app);
     if(pc==1)
     {
         if(ug==1)
         {
             if(bt==1)
             {
                 cout<<endl;
                 cout<<"                                                  HE HAS CHOOSEN CSE(COMPUTER SCIENCE ENGINEERING)"<<endl<<endl;
                 cout<<"                                                 *************** FEES :- 4 LAKHS *************** "<<endl<<endl;
                 cout<<"                                                                 DID THE STUDENT "<<endl<<endl<<"                                                       1)PAYED 2)JUST ACKNOWLEDGED IT : ";
                 fout<<" HE HAS CHOOSEN CSE(COMPUTER SCIENCE ENGINEERING)"<<endl;
                 fout<<" FEES :- 4 LAKHS "<<endl;
                 cin>>fe1;
                 if(fe1==1)
                 {
                     cout<<endl;
                     cout<<"                                                     HOW MUCH DID HE PAY (ex - 25000) : ";
                     cin>>fe2;
                     fe3=400000.0-fe2;
                     if(fe3>0)
                      {
                          cout<<endl;
                          cout<<"                                                 ******* THE STUDENT SHOULD PAY "<<fe3<<" MORE *******"<<endl<<endl;
                          fout<<"THE STUDENT SHOULD PAY "<<fe3<<"MORE "<<endl;
                      }
                      else if(fe3==0)
                      {
                          cout<<endl<<"                                                        ******* TOTAL FEES PAYED ******* "<<endl<<endl;
                          fout<<" TOTAL FEES PAYED "<<endl;
                      }
                 }
                else if(fe1==2)
                 {
                     cout<<endl<<"                                                  ******* SHOWED INTEREST IN THIS COURSE ******* "<<endl<<endl;
                     fout<<" SHOWED INTEREST IN THIS COURSE "<<endl;
                 }
             }
             if(bt==2)
             {
                 cout<<endl;
                 cout<<"                                           HE HAS CHOOSEN ECE(ELECTRONICS AND COMMUNICATION ENGINEERING)"<<endl<<endl;
                 cout<<"                                                 *************** FEES :- 3 LAKHS ***************"<<endl<<endl;
                 fout<<"HE HAS CHOOSEN ECE(ELECTRONICS AND COMMUNICATION ENGINEERING)"<<endl;
                 fout<<" FEES :- 3 LAKHS "<<endl;
                 cout<<"                                                                 DID THE STUDENT "<<endl<<endl<<"                                                       1)PAYED 2)JUST ACKNOWLEDGED IT : ";
                 cin>>fe1;
                 if(fe1==1)
                 {
                     cout<<endl<<"                                                    HOW MUCH DID HE PAY (ex - 25000) : ";
                     cin>>fe2;
                     fe3=300000.0-fe2;
                     if(fe3>0)
                      {
                          cout<<endl;
                          cout<<"                                                 ******* THE STUDENT SHOULD PAY "<<fe3<<" MORE *******"<<endl<<endl;
                          fout<<"THE STUDENT SHOULD PAY "<<fe3<<"MORE "<<endl;
                      }
                      else if(fe3==0)
                      {
                          cout<<endl<<"                                                        ******* TOTAL FEES PAYED ******* "<<endl<<endl;
                          fout<<" TOTAL FEES PAYED "<<endl;
                      }
                 }
                else if(fe1==2)
                 {
                     cout<<endl<<"                                                  ******* SHOWED INTEREST IN THIS COURSE *******"<<endl<<endl;
                     fout<<" SHOWED INTEREST IN THIS COURSE "<<endl;
                 }
                }
             else if(bt==3)
             {
                 cout<<endl;
                 cout<<"                                            HE HAS CHOOSEN ELECTRICAL AND ELECTRONICS ENGINEERING (EEE)"<<endl<<endl;
                 cout<<"                                                 *************** FEES :- 3 LAKHS ***************"<<endl<<endl;
                 fout<<"HE HAS CHOOSEN ELECTRICAL AND ELECTRONICS ENGINEERING (EEE)"<<endl;
                 fout<<" FEES :- 3 LAKHS "<<endl;
                 cout<<"                                                                 DID THE STUDENT "<<endl<<endl<<"                                                       1)PAYED 2)JUST ACKNOWLEDGED IT : ";
                 cin>>fe1;
                 if(fe1==1)
                 {
                     cout<<endl<<"                                                    HOW MUCH DID HE PAY (ex - 25000) : ";
                     cin>>fe2;
                     fe3=300000.0-fe2;
                     if(fe3>0)
                      {
                          cout<<endl;
                          cout<<"                                                 ******* THE STUDENT SHOULD PAY "<<fe3<<" MORE *******"<<endl<<endl;
                          fout<<"THE STUDENT SHOULD PAY "<<fe3<<"MORE "<<endl;
                      }
                      else if(fe3==0)
                      {
                          cout<<endl<<"                                                        ******* TOTAL FEES PAYED ******* "<<endl<<endl;
                          fout<<" TOTAL FEES PAYED "<<endl;
                      }
                 }
                else if(fe1==2)
                 {
                     cout<<endl<<"                                                  ******* SHOWED INTEREST IN THIS COURSE *******"<<endl<<endl;
                     fout<<" SHOWED INTEREST IN THIS COURSE "<<endl;
                 }
             }

         }
         if(ug==2)
         {
             if(bs==1)
             {
                 cout<<endl;
                 cout<<"                                                            HE HAS CHOOSEN BSC MATHEMATICS "<<endl<<endl;
                 cout<<"                                                 *************** FEES :- 30 THOUSAND ***************"<<endl<<endl;
                 fout<<"HE HAS CHOOSEN BSC MATHEMATICS "<<endl;
                 fout<<" FEES :- 30 THOUSAND "<<endl;
                 cout<<"                                                                 DID THE STUDENT "<<endl<<endl<<"                                                       1)PAYED 2)JUST ACKNOWLEDGED IT : ";
                 cin>>fe1;
                 if(fe1==1)
                 {
                     cout<<endl<<"                                                    HOW MUCH DID HE PAY (ex - 25000) : ";
                     cin>>fe2;
                     fe3=30000.0-fe2;
                     if(fe3>0)
                      {
                          cout<<endl;
                          cout<<"                                                  ******* THE STUDENT SHOULD PAY "<<fe3<<" MORE *******"<<endl<<endl;
                          fout<<"THE STUDENT SHOULD PAY "<<fe3<<"MORE "<<endl;
                      }
                      else if(fe3==0)
                      {
                          cout<<endl<<"                                                        ******* TOTAL FEES PAYED ******* "<<endl<<endl;
                          fout<<" TOTAL FEES PAYED "<<endl;
                      }
                 }
                else if(fe1==2)
                 {
                     cout<<endl<<"                                                  ******* SHOWED INTEREST IN THIS COURSE *******"<<endl<<endl;
                     fout<<" SHOWED INTEREST IN THIS COURSE "<<endl;
                 }
             }
            }
             if(bs==2)
             {
                 cout<<endl;
                 cout<<"                                                             HE HAS CHOOSEN BSC CHEMISTRY"<<endl<<endl;
                 cout<<"                                                  *************** FEES :- 30 THOUSAND ***************"<<endl<<endl;
                 fout<<"HE HAS CHOOSEN BSC CHEMISTRY"<<endl;
                 fout<<" FEES :- 30 THOUSAND "<<endl;
                 cout<<"                                                                 DID THE STUDENT "<<endl<<endl<<"                                                       1)PAYED 2)JUST ACKNOWLEDGED IT : ";
                 cin>>fe1;
                 if(fe1==1)
                 {
                     cout<<endl<<"                                                    HOW MUCH DID HE PAY (ex - 25000) : ";
                     cin>>fe2;
                     fe3=30000.0-fe2;
                     if(fe3>0)
                      {
                          cout<<endl;
                          cout<<"                                                  ******* THE STUDENT SHOULD PAY "<<fe3<<" MORE *******"<<endl<<endl;
                          fout<<"THE STUDENT SHOULD PAY "<<fe3<<"MORE "<<endl;
                      }
                      else if(fe3==0)
                      {
                          cout<<endl<<"                                                        ******* TOTAL FEES PAYED ******* "<<endl<<endl;
                          fout<<" TOTAL FEES PAYED "<<endl;
                      }
                 }
                else if(fe1==2)
                 {
                     cout<<endl<<"                                                  ******* SHOWED INTEREST IN THIS COURSE *******"<<endl<<endl;
                     fout<<" SHOWED INTEREST IN THIS COURSE "<<endl;
                 }
             }
             else if(bs==3)
             {
                 cout<<endl;
                 cout<<"                                                  HE HAS CHOOSEN BSC IT(information technology)"<<endl<<endl;
                 cout<<"                                                  *************** FEES :- 2 LAKHS ***************"<<endl<<endl;
                 fout<<"HE HAS CHOOSEN BSC IT(information technology)"<<endl;
                 fout<<" FEES :- 2 LAKHS "<<endl;
                 cout<<"                                                                 DID THE STUDENT "<<endl<<endl<<"                                                       1)PAYED 2)JUST ACKNOWLEDGED IT : ";
                 cin>>fe1;
                 if(fe1==1)
                 {
                     cout<<endl<<"                                                    HOW MUCH DID HE PAY (ex - 25000) : ";
                     cin>>fe2;
                     fe3=200000.0-fe2;
                     if(fe3>0)
                      {
                          cout<<endl;
                          cout<<"                                                  ******* THE STUDENT SHOULD PAY "<<fe3<<" MORE *******"<<endl<<endl;
                          fout<<"THE STUDENT SHOULD PAY "<<fe3<<"MORE "<<endl;
                      }
                      else if(fe3==0)
                      {
                          cout<<endl<<"                                                        ******* TOTAL FEES PAYED ******* "<<endl<<endl;
                          fout<<" TOTAL FEES PAYED "<<endl;
                      }
                 }
                else if(fe1==2)
                 {
                     cout<<endl<<"                                                  ******* SHOWED INTEREST IN THIS COURSE *******"<<endl<<endl;
                     fout<<" SHOWED INTEREST IN THIS COURSE "<<endl;
                 }
             }
         }
     else if(pc==2)
     {
         if(mt==1)
         {
            cout<<endl;
           cout<<"                                                     HE HAS CHOOSEN Computer Network Engineering "<<endl<<endl;
           cout<<"                                                  *************** FEES :- 1.5 LAKHS ***************"<<endl<<endl;
           fout<<"HE HAS CHOOSEN Computer Network Engineering "<<endl;
           fout<<" FEES :- 1.5 LAKHS "<<endl;
           cout<<"                                                                 DID THE STUDENT "<<endl<<endl<<"                                                       1)PAYED 2)JUST ACKNOWLEDGED IT : ";
                 cin>>fe1;
                 if(fe1==1)
                 {
                     cout<<endl<<"                                                    HOW MUCH DID HE PAY (ex - 25000) : ";
                     cin>>fe2;
                     fe3=150000.0-fe2;
                     if(fe3>0)
                      {
                          cout<<endl;
                          cout<<"                                                  ******* THE STUDENT SHOULD PAY "<<fe3<<" MORE *******"<<endl<<endl;
                          fout<<"THE STUDENT SHOULD PAY "<<fe3<<"MORE "<<endl;
                      }
                      else if(fe3==0)
                      {
                          cout<<endl<<"                                                        ******* TOTAL FEES PAYED ******* "<<endl<<endl;
                          fout<<" TOTAL FEES PAYED "<<endl;
                      }
                 }
                else if(fe1==2)
                 {
                     cout<<endl<<"                                                  ******* SHOWED INTEREST IN THIS COURSE *******"<<endl<<endl;
                     fout<<" SHOWED INTEREST IN THIS COURSE "<<endl;
                 }
           }
         else if(mt==2)
         {
          cout<<endl;
          cout<<"                                                          HE HAS CHOOSEN Energy Engineering "<<endl<<endl;
          cout<<"                                                  *************** FEES :- 1.5 LAKHS ***************"<<endl<<endl;
          fout<<"HE HAS CHOOSEN Energy Engineering "<<endl;
          fout<<" FEES :- 1.5 LAKHS "<<endl;
          cout<<"                                                                 DID THE STUDENT "<<endl<<endl<<"                                                       1)PAYED 2)JUST ACKNOWLEDGED IT : ";
                 cin>>fe1;
                 if(fe1==1)
                 {
                     cout<<endl<<"                                                    HOW MUCH DID HE PAY (ex - 25000) : ";
                     cin>>fe2;
                     fe3=150000.0-fe2;
                     if(fe3>0)
                      {
                          cout<<endl;
                          cout<<"                                                  ******* THE STUDENT SHOULD PAY "<<fe3<<" MORE *******"<<endl<<endl;
                          fout<<"THE STUDENT SHOULD PAY "<<fe3<<"MORE "<<endl;
                      }
                      else if(fe3==0)
                      {
                          cout<<endl<<"                                                        ******* TOTAL FEES PAYED ******* "<<endl<<endl;
                          fout<<" TOTAL FEES PAYED "<<endl;
                      }
                 }
                else if(fe1==2)
                 {
                     cout<<endl<<"                                                  ******* SHOWED INTEREST IN THIS COURSE *******"<<endl<<endl;
                     fout<<" SHOWED INTEREST IN THIS COURSE "<<endl;
                 }
           }
         else if(mt==3)
         {
          cout<<endl;
          cout<<"                                                 HE HAS CHOOSEN Digital System and Signal Processing "<<endl<<endl;
          cout<<"                                                  *************** FEES :- 1.5 LAKHS ***************"<<endl<<endl;
          fout<<"HE HAS CHOOSEN Digital System and Signal Processing "<<endl;
          fout<<" FEES :- 1.5 LAKHS "<<endl;
          cout<<"                                                                 DID THE STUDENT "<<endl<<"                                                       1)PAYED 2)JUST ACKNOWLEDGED IT : ";
          cin>>fe1;
                 if(fe1==1)
                 {
                     cout<<endl<<"                                                    HOW MUCH DID HE PAY (ex - 25000) : ";
                     cin>>fe2;
                     fe3=150000.0-fe2;
                     if(fe3>0)
                      {
                          cout<<endl;
                          cout<<"                                                  ******* THE STUDENT SHOULD PAY "<<fe3<<" MORE *******"<<endl<<endl;
                          fout<<"THE STUDENT SHOULD PAY "<<fe3<<"MORE "<<endl;
                      }
                      else if(fe3==0)
                      {
                          cout<<endl<<"                                                        ******* TOTAL FEES PAYED ******* "<<endl<<endl;
                          fout<<" TOTAL FEES PAYED "<<endl;
                      }
                 }
                else if(fe1==2)
                 {
                     cout<<endl<<"                                                  ******* SHOWED INTEREST IN THIS COURSE *******"<<endl<<endl;
                     fout<<" SHOWED INTEREST IN THIS COURSE "<<endl;
                 }
         }
      }
         fout.close();
    }
void info()
{
  string in;
  int cho;
  ofstream fout;
  fout.open("test.txt",ios::app);
  cout<<endl;
  cout<<"                                               How did you come to know about this university ? : ";
  fout<<" How did you come to know about this university ? : "<<endl;
  getline(cin>>ws,in);
  fout<<" Ans :- "<<in<<endl;
  cout<<endl<<"                                               Did you tell about our university to your friends/relatives "<<endl;
  cout<<"                                                                        1)YES 2)NO : ";
  cin>>cho;
  if(cho==1)
  {
     fout<<" Ans :- YES "<<endl;
  }
  else if(cho==2)
  {
      fout<<" Ans :- NO "<<endl;
  }
   cout<<endl<<endl;
  fout<<"*****************************************************************************"<<endl;
  fout<<"*****************************************************************************"<<endl;
fout.close();
}

int admin()
{
    int options,g;
    char cc;
    cout<<"                                                                                                     "<<endl;
    cout<<"                                                                                                     "<<endl;
    cout<<"                                             ********************************************************"<<endl;
    cout<<"                                             **************** ADMISSION MANAGEMENT ******************"<<endl;
    cout<<"                                             ********************************************************"<<endl;
    cout<<endl;cout<<"checker - "<<d<<" "<<e<<" "<<f<<endl;
    cout<<"                                             Select 1/2/3/4 for giving your details"<<endl;
    cout<<"                                             1. Academic Qualifications"<<endl;
    cout<<"                                             2. Personal Informations"<<endl;
    cout<<"                                             3. Information Related To Particular Course"<<endl;
    cout<<"                                             4. Respond To Queries Raised By Authorities"<<endl;
    cout<<"                                             5. UNIVERSITY CHECK(IF STUDENT INFO IS PRESENT) OR EXIT "<<endl;
    cout<<endl<<"                                             INPUT YOUR CHOICE : ";
    cin>>options;
    system("CLS");
    switch(options)
    {
        case 1:
        cout<<endl;
        cout<<"                                                 *********** Academic Qualifications ***********"<<endl;
        student_e();
        d++;
        cout<<endl;
        cout<<"                                                *********** PRESS ANY BUTTON TO CLEAR SCREEN : ";
        getch();
        system("CLS");
        cout<<endl<<endl;
        admin();
        break;
        case 2:
         cout<<endl;
        cout<<"                                                *********** Personal Informations ***********"<<endl;
        personal_details();
        e++;
        cout<<"                                                *********** PRESS ANY BUTTON TO CLEAR SCREEN : ";
        getch();
        system("CLS");
        admin();
        break;
        case 3:
        cout<<endl;
        cout<<"                                                *********** Information Related To Particular Course ***********"<<endl;
        pcourse();
        f++;
        cout<<"                                                *********** PRESS ANY BUTTON TO CLEAR SCREEN : ";
        getch();
        system("CLS");
        admin();
        break;
        case 4:
        cout<<endl;
        cout<<"                                                 *********** Respond To Queries Raised By Authorities ***********"<<endl;
        queries();
        cout<<"                                                *********** PRESS ANY BUTTON TO CLEAR SCREEN : ";
        getch();
        system("CLS");
        admin();
        break;
        case 5:
        if(d>=1 && e>=1 && f>=1)
        {
             cout<<"                                                                                                   "<<endl;
            cout<<"                                                                                                   "<<endl;
            cout<<"                                           ********************************************************"<<endl;
            cout<<"                                           **************** UNIVERSITY RESPONSE ****************"<<endl;
            cout<<"                                           *****************************************************"<<endl;
            cout<<"                                                          1. Students status "<<endl;
            cout<<"                                                          2. Comments "<<endl;
            cout<<"                                                          3. Fee details "<<endl;
            cout<<"                                                          4. More information about student "<<endl;
            cout<<"                                                          5. students list "<<endl;
            cout<<"                                                          6. EXIT "<<endl;
            cout<<"                                                          Enter your choice : ";
            cin>>g;
            system("CLS");
            switch(g)
            {
             case 1:
            cout<<endl<<endl;
            cout<<"                                                 **************** STUDENTS STATUS ****************"<<endl;
            check();
            cout<<"                                                *********** PRESS ANY BUTTON TO CLEAR SCREEN : ";
            getch();
            system("CLS");
            admin();
            break;
            case 2:
            cout<<endl;
            cout<<"                                                 **************** COMMENTS  ****************"<<endl;
            commen();
            cout<<"                                                *********** PRESS ANY BUTTON TO CLEAR SCREEN : ";
            getch();
            system("CLS");
            admin();
            break;
            case 3:
            cout<<endl;
            cout<<"                                                 **************** FEE DETAILS ****************"<<endl;
            fee();
            cout<<"                                                *********** PRESS ANY BUTTON TO CLEAR SCREEN : ";
            getch();
            system("CLS");
            admin();
            break;
            case 4:
            cout<<endl;
            cout<<"                                                 **************** MORE INFORMATION ABOUT STUDENT ****************"<<endl;
            info();
            cout<<"                                                *********** PRESS ANY BUTTON TO CLEAR SCREEN : ";
            getch();
            system("CLS");
            admin();
            break;
            case 5:
            cout<<endl;
            cout<<"                                                 **************** STUDENTS DETAILS ****************"<<endl<<endl;
            cout<<left<<setw(10)<<"SP.NUM"<<left<<setw(10)<<"NAME"<<left<<setw(20)<<"D_O_B"<<left<<setw(19)<<"ST'S_GMAIL"<<left<<setw(15)<<"ST'S P_NO"<<left<<setw(20)<<"ST'S FATHER NAME"<<left<<setw(30)<<"ST'S MOTHER NAME"<<left<<setw(20)<<"ADDRESS"<<"STATUS"<<endl;
            display_stlist();
            cout<<endl<<endl;
            cout<<"                                                *********** PRESS ANY BUTTON TO CLEAR SCREEN : ";
            getch();
            system("CLS");
            admin();
            break;
            case 6:
            cout<<endl;
            cout<<"                         -------------------NUMBER OF STUDENTS CAME FOR ADMISSION : "<<(d+e+f)/3<<"-------------------"<<endl<<endl;
            cout<<"                                -------------------NUMBER OF ELIGIBLE STUDENTS : "<<eli<<"-------------------"<<endl;
            cout<<endl<<"                                   -------------------THANK YOU "<<char(1)<<"------------------- "<<endl;
            //eli=0;
            return 0;
            break;
            }
        }
      else
        {
            cout<<endl<<endl<<endl<<endl<<endl;
            cout<<"                               -------------------THERE IS NO FULL INFO ABOUT ANY STUDENT-------------------"<<endl;
            cout<<endl<<"                                          -------------------THANK YOU "<<char(1)<<"------------------- "<<endl;
        }
         return 0;
        break;

        default:
        cout<<" INVALID INPUT , PLEASE CHECK YOUR INPUT AGAIN "<<endl;

}
}

};

int main()
{
    univer_end un1;
    un1.admin();
}
