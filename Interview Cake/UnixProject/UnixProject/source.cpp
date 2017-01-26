#include <iostream>
#include <string>

using namespace std;

int main(){

	int choose;
	string input;
	string source;
cout<<"please entre the source that You want to indent"<<endl;
	cout<<"1) user input\n2) from file"<<endl;
	cin>>choose;
	switch(choose){
	case 1:
		cout<<"input your source and use the word end to end your input"<<endl;
		cin>>input;
		if(input !="end"){
		source=	input;
			
			}
		break;
	case 2:
		break;
	default:
		break;
	}
	system("pause");
}
