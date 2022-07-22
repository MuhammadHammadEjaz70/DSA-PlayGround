#include<iostream>
#include<string>
using namespace std;

void reverse(int s, string &str){
//basecase
if(s>(str.length()-s-1))
return;

swap(str[s],str[(str.length()-s-1)]);
s++;
reverse(s,str);

}

int main(){
string name="Gujjar";

reverse( 0, name );
cout<<name<<endl;
 return 0;
}