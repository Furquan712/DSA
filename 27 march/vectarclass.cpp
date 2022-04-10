#include<bits/stdc++.h>
using namespace std;
class Vector{
public:
	int *arr;
	int cs;
	int ms;
Vector(int s=2){
	arr=new int[s];
	cs=0;
	ms=s;
}
void push_back(int d){
	if(cs==ms){
		int *oldarr=arr;
		int oldms=ms;
      arr = new int[2*ms];
      ms*=2;
      for(int i=0;i<oldms;i++){
      	arr[i]=oldarr[i];
      }
      delete []oldarr;
	}
	arr[cs]=d;
	cs++;
}
void pop_back(){
	if(cs<0){
		cs--;
	}
}
int size(){
	return cs;
}
int capacity(){
	return ms;
}

int operator[] (int i)
{
	return i;
}
};
int main(){
	vector <int> v;

for(int i=0;i<5;i++){
v.push_back(5-i);
}
for(int i=1;i<v.size();i++){
	cout<<v[i];
}
cout<<endl;
cout<<"size:"<<v.size()<<endl;
cout<<"capacity:"<<v.capacity()<<endl;
return 0;
}
