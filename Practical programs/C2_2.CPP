#include<iostream.h> 

#include<conio.h> 

#include<stdio.h> 

class worker 

{ 

int roll_no; 

int wno; 

char wname[25]; 

float hrwrk; 

float wgrate; 

float totwage; 

float calcwg()

{ 

float totpay;

totpay=hrwrk*wgrate; 

return totpay;

} 

public: 

void In_data(); 

void Out_data(); 

}; 

void worker::In_data() 

{ 

 

cout<<"\nEnter worker details: "; 

cout<<"\Enter name: "; 

gets(wname); 

cout<<"\nEnter roll no.: "; 

cin>>roll_no; 

cout<<"\nEnter worker no.: "; 

cin>>wno; 

cout<<"\nEnter work hours: "; 

cin>>hrwrk; 

cout<<"\nEnter wage rate: "; 

cin>>wgrate; 

totwage=calcwg(); 

} 

void worker::Out_data() 

{ 

cout<<"\Name: "; 

puts(wname); 

cout<<"\nRoll no.: "; 

cout<<roll_no; 

cout<<"\nWorker no.: "; 

cout<<wno; 

cout<<"\nWork Hours: "; 

cout<<hrwrk; 

cout<<"\nWage rate: "; 

cout<<wgrate; 

cout<<"\nTotal wage: "; 

cout<<totwage; 

} 

void main() 

{ 

clrscr(); 

worker w1; 

w1.In_data(); 

w1.Out_data(); 

getch(); 

} 