#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
void checkString(string s, int flag){
 string str1("aa");
 string str2("aaa");
 string str3("bb");
 string str4("bbb");
 string str5("aabb");
 string str6("aabbb");
 string str7("aaabb");
 string str8("aaabbb");
 int length=s.size();

 if(flag==0){
 	
 
 if(s==str1||s==str2||s==str3||s==str4||s==str5||s==str6||s==str7||s==str8){
 	cout<<"YES"<<endl;
 }else{
 
 char fg1='a';
	 char fg2='b';
 for(int i=0; i<length;i++){
// 	checking the first part of the string
 	while(i<3){
 		if(s.at(i)!=fg1||s.at(i)!=fg2){
 			cout<<"NO"<<endl;
 			break;
		 }else{
        continue;
		 }
		 i++;
		 
	 }
	 i=3;
	 	while(i<6){
 		if(s.at(i)!=fg1||s.at(i)!=fg2){
        cout<<"NO"<<endl;
		 }else{
	 	continue;
		 }
		 i++;
	 }
	 i=6;
	 	while(i<10){
 		if(s.at(i)==fg1||s.at(i)==fg2){
 			continue;
		 }else{
		 	cout<<"NO"<<endl;
		 }
		 i++;
	 }
	 i=10;
	 
	 	while(i<14){
 		if(s.at(i)==fg1||s.at(i)==fg2){
 			continue;
		 }else{
		 	cout<<"No"<<endl;
		 }
		 i++;
	 }
 	i=14;
 	
 		while(i<17){
 		if(s.at(i)==fg1||s.at(i)==fg2){
 			continue;
		 }else{
		 	cout<<"NO"<<endl;
		 }
		 i++;
	 }
	 i=17;
//	 end checking the first part;
//checking the other

		 }
	}
	
}
	 
	 
 }
 


int main(){
	
	int N;
	cin>>N;
	while(N--){
	
	char fg1='a';
	 char fg2='b';
	  string s;
	  cin>>s;
	  int flag = 0;
	  int length=s.size();
	  for(int i=0;i<length;i++){
	  	if(s.at(i)!=fg1 && s.at(i)!=fg2){
	  	cout<<"NO"<<endl;
	  	flag = 1;
		  break;	
		  }
	  }
	  
	  if(flag==0)
	     checkString(s,flag);
	 }
    
	return 0;
}
	






