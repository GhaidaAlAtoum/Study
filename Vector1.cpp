#include<iostream>
#include<vector>
using namespace std;

void printstack(const vector<int> & stack)
{
for(const auto& element: stack)
	cout<<element<<' ';
	cout<<"(cap "<<stack.capacity()<<" length "<<stack.size()<<" )\n";
}

int main(){
vector<int> stack;
	
	printstack(stack);
	
	stack.push_back(5);
	printstack(stack);
	
	stack.push_back(3);
	printstack(stack);
	
	stack.push_back(2);
	printstack(stack);
	
	cout<<"top: "<<stack.back()<<'\n';
	
	stack.pop_back();
	printstack(stack);
	
	stack.pop_back();
	printstack(stack);
	
	stack.pop_back();
	printstack(stack);	
	
return 0;	
}
/*
// no need to specify length at initialization
	//vector<int> array;
	vector<int> array{9,7,5,3,1};
	cout<<"The length is: "<<array.size()<<'\n';
	*/