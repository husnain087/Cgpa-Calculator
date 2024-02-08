#include<iostream>
using namespace std;
int main()
{
int mark1,mark2,mark3,mark4,mark5,cr1,cr2,cr3,cr4,cr5;
float subjectgpa1,subjectgpa2,subjectgpa3,subjectgpa4,subjectgpa5,earngrade1,earngrade2,earngrade3,earngrade4,earngrade5,totalearngrade,totalcr,totalgpa;
cout<<"Enter the marks of 1st subject:";
cin>>mark1;
cout<<"Enter the credit hours of 1st subject:";
cin>>cr1;
cout<<"Enter the marks of 2nd subject:";
cin>>mark2;
cout<<"Enter the credit hours of 2nd subject:";
cin>>cr2;
cout<<"Enter the marks of 3rd subject:";
cin>>mark3;
cout<<"Enter the credit hours of 3rd subject:";
cin>>cr3;
cout<<"Enter the marks of 4th subject:";
cin>>mark4;
cout<<"Enter the credit hours of 4th subject:";
cin>>cr4;
cout<<"Enter the marks of 5th subject:";
cin>>mark5;
cout<<"Enter the credit hours of 5th subject:";
cin>>cr5;
		// For subject 1
	if(mark1>=85&&mark1<=100){subjectgpa1=4;}
	else if(mark1>=80&&mark1<=85){subjectgpa1=3.7;}
	else if(mark1>=75&&mark1<=79){subjectgpa1=3.5;}
	else if(mark1>=70&&mark1<=74){subjectgpa1=3.0;}
	else if(mark1>=65&&mark1<=69){subjectgpa1=2.7;}
	else if(mark1>=60&&mark1<=64){subjectgpa1=2.5;}
	else if(mark1>=55&&mark1<=59){subjectgpa1=2;}
	else if(mark1>=50&&mark1<=54){subjectgpa1=1.7;}
	else{subjectgpa1=0;}
	earngrade1=subjectgpa1*cr1;
		// For subject 2
	if(mark2>=85&&mark2<=100){subjectgpa2=4;}
	else if(mark2>=80&&mark2<=85){subjectgpa2=3.7;}
	else if(mark2>=75&&mark2<=79){subjectgpa2=3.5;}
	else if(mark2>=70&&mark2<=74){subjectgpa2=3.0;}
	else if(mark2>=65&&mark2<=69){subjectgpa2=2.7;}
	else if(mark2>=60&&mark2<=64){subjectgpa2=2.5;}
	else if(mark2>=55&&mark2<=59){subjectgpa2=2;}
	else if(mark2>=50&&mark2<=54){subjectgpa2=1.7;}
	else{subjectgpa2=0;}
	earngrade2=subjectgpa2*cr2;
		// For subject 3
	if(mark3>=85&&mark3<=100){subjectgpa3=4;}
	else if(mark3>=80&&mark3<=85){subjectgpa3=3.7;}
	else if(mark3>=75&&mark3<=79){subjectgpa3=3.5;}
	else if(mark3>=70&&mark3<=74){subjectgpa3=3.0;}
	else if(mark3>=65&&mark3<=69){subjectgpa3=2.7;}
	else if(mark3>=60&&mark3<=64){subjectgpa3=2.5;}
	else if(mark3>=55&&mark3<=59){subjectgpa3=2;}
	else if(mark3>=50&&mark3<=54){subjectgpa3=1.7;}
	else{subjectgpa3=0;}
	earngrade3=subjectgpa3*cr3;
		// For subject 4
	if(mark4>=85&&mark4<=100){subjectgpa4=4;}
	else if(mark4>=80&&mark4<=85){subjectgpa4=3.7;}
	else if(mark4>=75&&mark4<=79){subjectgpa4=3.5;}
	else if(mark4>=70&&mark4<=74){subjectgpa4=3.0;}
	else if(mark4>=65&&mark4<=69){subjectgpa4=2.7;}
	else if(mark4>=60&&mark4<=64){subjectgpa4=2.5;}
	else if(mark4>=55&&mark4<=59){subjectgpa4=2;}
	else if(mark4>=50&&mark4<=54){subjectgpa4=1.7;}
	else{subjectgpa4=0;}
	earngrade4=subjectgpa4*cr4;
		// For subject 5
	if(mark5>=85&&mark5<=100){subjectgpa5=4;}
	else if(mark5>=80&&mark5<=85){subjectgpa5=3.7;}
	else if(mark5>=75&&mark5<=79){subjectgpa5=3.5;}
	else if(mark5>=70&&mark5<=74){subjectgpa5=3.0;}
	else if(mark5>=65&&mark5<=69){subjectgpa5=2.7;}
	else if(mark5>=60&&mark5<=64){subjectgpa5=2.5;}
	else if(mark5>=55&&mark5<=59){subjectgpa5=2;}
	else if(mark5>=50&&mark5<=54){subjectgpa5=1.7;}
	else{subjectgpa5=0;}
	earngrade5=subjectgpa5*cr5;
		// Calculation
	totalearngrade=earngrade1+earngrade2+earngrade3+earngrade4+earngrade5;
	totalcr=cr1+cr2+cr3+cr4+cr5;
	totalgpa=totalearngrade/totalcr;
	cout<<"Your total gpa is:"<<totalgpa;
}
			
	
	
	
