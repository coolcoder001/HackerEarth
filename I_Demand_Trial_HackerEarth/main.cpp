#include<iostream>
using namespace std;
int main(){
	int t,n,m,i,j,count,count1;
	cin>>t;
	while(t--){
		cin>>n>>m;
		char a[n],b[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0,count1=10;i<m;i++){
			if(i%2==0){
				count=0,count1=10;
				if(a[1]=='1')
					b[0]='1';
				else
					b[0]='0',++count;
				for(j=1;j<n-1;j++){
					if(a[j-1]=='1'&&a[j+1]=='1')
						b[j]='1';
					else
						b[j]='0',++count;
				}
				if(a[j-1]=='1')
					b[j]='1';
				else
					b[j]='0',++count;
				if(count==n){
					for(j=0;j<n;j++)
						cout<<0<<" ";
					count1=0;
					break;
				}
			}
			else{
				count=0,count1=10;
				if(b[1]=='1')
					a[0]='1';
				else
					a[0]='0',++count;
				for(j=1;j<n-1;j++){
					if(b[j-1]=='1'&&b[j+1]=='1')
						a[j]='1';
					else
						a[j]='0',++count;
				}
				if(b[j-1]=='1')
					a[j]='1';
				else
					a[j]='0',++count;
				if(count==n){
					for(j=0;j<n;j++)
						cout<<0<<" ";
					count1=0;
					break;
				}
			}
			cout<<"After "<<(i+1)<<"th hour :"<<endl;
			if(i%2==0){
				for(int k=0;k<n;k++){
					cout<<b[k]<<" ";
				}
				cout<<endl;

			}else{
				for(int k=0;k<n;k++){
									cout<<a[k]<<" ";
								}
								cout<<endl;
			}
		}
		if(count1!=0){
			if(m%2==0){
				for(i=0;i<n;i++)
					cout<<a[i]<<" ";
			}
			else{
				for(i=0;i<n;i++)
					cout<<b[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
