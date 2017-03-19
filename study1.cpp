#include <iostream>
 
void a()
{
// This define value is now available for the rest of this file
#define x 5
	std::cout << x;
}
 
void b()
{
// Even though we're intending this x to be local to function b()
// it conflicts with the x we defined inside function a()
#define x 6
	std::cout << x;
}
 
int main() {
 
	a();
	b();
 
	return 0;
}
/*
 char ch1(97);
 char ch2('a');
 char ch3{97};
 char ch4='a';
 cout<<ch1<<endl<<ch2<<endl<<ch3<<endl<<ch4<<endl;
	cout<<static_cast<int>(ch1)<<endl;
	*/
/*
char ch;
	cout<<"Input a keyboard char: ";
	cin>>ch;// ch = 'a', "bcd" is left queued
	cout<<ch<<" has ascii cod "<<static_cast<int>(ch)<<endl;
	// Note: The following cin doesn't ask the user for input, it grabs queued input!
	cin>>ch;// ch = 'b', "cd" is left queued.
	cout<<ch<<" has ascii code "<<static_cast<int>(ch)<<endl;
	*/