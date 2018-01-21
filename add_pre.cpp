#include<iostream>
using namespace std; 
int main()
{
	char s1[50]="pan.baidu.com/mbox/homepage?short=",s2[50],s3[50]; 
	int i=0,j=0,max=0;
	cout<<"please copy to here"<<endl;
	cin.getline(s2,49);
	while (s2[max]) {max++;}
	for(i=0;i<max;i++){
	if((s2[i]<='Z'&&s2[i]>='A')||
		(s2[i]>='a'&&s2[i]<='z')||
		(s2[i]>='0'&&s2[i]<='9')||
		s2[i]=='.'||
		s2[i]=='='||
		s2[i]=='?'||
		s2[i]=='&'||
		s2[i]=='/'||
		s2[i]==':'||
		s2[i]=='-'||
		s2[i]=='%'||
		s2[i]=='_')
		{
			s3[j++]=s2[i];
		}		
	}
	s3[j]='\0';
	i=0;
	j=34;	 
	if (s3[0]=='=')
		j=33;
	else if (s3[0]=='?')
		j=27;
	else if (s3[0]=='s'&&s3[1]=='h'&&s3[2]=='o')
		j=28;
	while (s3[i])
		s1[j++]=s3[i++];
	s1[j]='\0';
	cout<<s1<<endl;	
	return 0;
}
