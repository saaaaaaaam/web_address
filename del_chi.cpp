#include<iostream>
using namespace std; 
int main()
{
	char s[100]; 
	cin.getline(s,100);
	int i=0,j=0;
	while (s[j])
		j++; 
	for(i=0;i<=j;i++){	
		if((s[i]<='Z'&&s[i]>='A')||
		   (s[i]>='a'&&s[i]<='z')||
		   (s[i]>='0'&&s[i]<='9')||
		    s[i]=='.'||
			s[i]=='='||
			s[i]=='?'||
			s[i]=='&'||
			s[i]=='/'||
			s[i]==':'||
			s[i]=='-'||
			s[i]=='%'||
			s[i]=='_') 
				cout<<s[i];
	} 
	cout<<endl;	
	return 0;
}
