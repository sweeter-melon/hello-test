

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main() {

ofstream iwrite;
iwrite.open("myfile.txt");
iwrite<<" asAZSADWzxas速度123\n 张文哲asadDSFS1234\n 大神sdkadQWEUSJ12478\n sadaAWDSAF撒谎9457";
iwrite.close();



ifstream filei("myfile.txt");
ofstream fileo;
fileo.open("outmyfile.txt");

char ch;
int i;
int x[256];

for (i=0;i<256;i++) 
{
x[i]=0;

}
while (!filei.eof())
{
ch=filei.get();
x[ch]++;
cout <<ch;
}
cout <<endl;
for (i='0';i<='9';i++) fileo<<(char)i <<" : " <<x[i] <<endl;  


for (i='a';i<='a';i++) fileo<<(char)i <<" : " <<x[i] <<endl; 

 
for (i='A';i<='Z';i++) fileo<<(char)i <<" : " <<x[i] <<endl; 
 



filei.close();
fileo.close();
return 0;
}

