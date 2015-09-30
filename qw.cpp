#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
#include<functional>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		vector<pair<string,string>>names(n);
		getchar();
		for(int i=0;i<n;i++)
		{
			string s;
			getline(cin,s);
			names[i].first=s.substr(s.length()-4);
			names[i].second=s.substr(0,s.length()-5);
		}
		sort(names.begin(),names.end(),greater<pair<string,string>>());
		for(int i=0;i<n;i++)cout<<names[i].second<<endl;
	}
	return 0;
}
