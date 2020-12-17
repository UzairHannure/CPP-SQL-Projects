#include<iostream.h> 

#include<conio.h> 

#include<stdio.h> 

class publication 

{ 

public: 

char name[30]; 

float price; 

}; 

class book:private publication 

{ 

int counts; 

 

public: 

void getdata(); 

void putdata(); 

}; 

class CD:private publication 

{ 

int bytes; 

 

public: 

void getdata(); 

void putdata(); 

}; 

void book::getdata() 

{ 

cout<<"\nEnter name of the book: "; 

gets(name); 

cout<<"\nEnter price of the book: "; 

cin>>price; 

cout<<"\nEnter no. of pages of the book: ";

cin>>counts;
cout<<endl;

}

void book::putdata()

{

cout<<"\nname of the book: ";

puts(name);

cout<<"\nprice of the book: ";

cout<<price;

cout<<"\nBook pages: ";

cout<<counts<<endl;


}

void CD::getdata()

{

cout<<"\nEnter name of the CD: ";

gets(name);

cout<<"\nEnter price of the CD: ";

cin>>price;

cout<<"\nEnter bytes of the CD: ";

cin>>bytes;
cout<<endl;

}

void CD::putdata()

{

cout<<"\nName of the CD: ";

puts(name);

cout<<"\nPrice of CD: ";

cout<<price;

cout<<"\nBytes of the CD: ";

cout<<bytes;

} 

void main() 

{ 

clrscr(); 

book b1; 

CD c1; 

b1.getdata(); 

b1.putdata(); 

c1.getdata(); 

c1.putdata(); 

getch(); 

} 

 