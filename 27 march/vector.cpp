#include<bits/stdc++.h>
using namespace std;
int main(){
vector <int> v;

for(int i=0;i<5;i++){
v.push_back(5-i);
}
for(int i=1;i<v.size();i++){
	cout<<v[i];
}
cout<<endl;
sort(v.begin(),v.end());
for(int i=1;i<v.size();i++){
	cout<<v[i];
}
cout<<endl;
cout<<"size:"<<v.size()<<endl;
cout<<"capacity:"<<v.capacity()<<endl;
return 0;
}