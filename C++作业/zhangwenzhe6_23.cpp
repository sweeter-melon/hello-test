#include<iostream>

using namespace std;

class Mark
{
public:
	float sum();
private:
	float h[8];

};
float Mark::sum()
{
	float sum=0.0;
    for(int i=0;i<8;i++)
	{
		cout<<"请输入第"<<i+1<<"个人考试成绩：";
		cin>>h[i];
		sum+=h[i];
	}
	return sum;
}

	int  main()

	{
		float sum=0.0;

		float average;
		Mark a;

		sum=a.sum();

		average=(1.0/8.0)*sum;

		cout<<"平均成绩为：";

		cout<<average<<endl;

		return 0;

	}




