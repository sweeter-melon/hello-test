

#include<iostream>
#include<fstream>

using namespace std;

void main() {
ofstream myfile;
myfile.open("filename1.txt");
myfile<<" aaaaaaaa\n bbbbbbbb\n cccccccc\n dddddddd";
myfile.close();

ifstream filei("filename1.txt");
ofstream fileo;
fileo.open("filename2.txt");

char c;
filei>>noskipws;  //noskipws意思是cin时不跳过空格和换行
int i=1;
fileo<<i<<".";
cout<<i<<".";
while(filei>>c) {
if(c=='\n') 
{
i++;
fileo<<"\n";
cout<<"\n";
fileo<<i<<".";
cout<<i<<".";
} 
else {
fileo<<c;
cout<<c;
}
}
filei.close();
fileo.close();
}



