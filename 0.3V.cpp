#include<iostream>   //Internet版 
#include<string.h>	 //Core Ultra---Dev 0.3V
#include<stdio.h>	 //更新说明:加载时间缩短，其他就没了。 
#include<time.h>
#include<windows.h>
using namespace std;
void int_countF()
{
	
}
void double_countF()
{
	
}
void ZanMD()
{
	
}
void ExitZCode()
{
	
}
void Homev03(string mode,string FExit,string RJExit)
{
	char switch_mode;
	if(mode=="Welcome")
	{
		cout<<"HomeWorkGo            一个简洁而朴实无华的写作业神器!             (Dev V0.3)"<<endl;
		cout<<"                        海内存知己，天涯若比邻......                        "<<endl;
		cout<<"                          由两位小学生制作的神器!                           "<<endl;
		cout<<"                     Core Ultra尊贵版(已连接Internet版)                     "<<endl;
		cout<<" Canny-整数计算(I) DevSotpSevrer-小数计算(D) Dev-赞助名单(Z) Canny-退出(E)  "<<endl;
		cin>>switch_mode;
		switch(switch_mode)
		{
			case 'I':int_countF();break;
			case 'D':double_countF();break;
			case 'Z':ZanMD();break;
			case 'E':ExitZCode();break; 
		}
	}
}
void welcome()
{
	int rand_a,rand_b,i,a;
	cout<<"        写作业计算器(Core Ultra)欢迎您!Welcome To HomeWorkGo(Core Ultra)        "<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                   启动中...                                    "<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                   Dev V0.3                                     "<<endl;
	system("title 写作业计算器(Core Ultra)欢迎您!Welcome To HomeWorkGo(Core Ultra)");
	srand(time(0));
	rand_b=rand()%1+5;
	switch(rand_b)
	{
		case 1:Sleep(500);break;
		case 2:Sleep(1000);break;
		case 3:Sleep(1500);break;
		case 4:Sleep(2000);break;
		case 5:Sleep(2500);break;		
	}
	Sleep(rand_b);	
	for(i=1;i<=rand_a;i++)
	{
		srand(time(0));
		rand_a=rand()%1+5; 
		switch(rand_a)
		{
			case 1:a=250;break;
			case 2:a=300;break;
			case 3:a=350;break;
			case 4:a=400;break;
			case 5:a=450;break;		
		}
		system("cls");
		cout<<"                             加载系统与文件中..                             "<<endl;
		Sleep(a);
		system("cls");
		cout<<"                            加载系统与文件中....                            "<<endl;
		Sleep(a);
		system("cls");
		cout<<"                          加载系统与文件中.......                           "<<endl;
		Sleep(a);
		system("cls");
		cout<<"                         加载系统与文件中..........                         "<<endl;	
		Sleep(a);
	}
	Homev03("Welcome","NoTHave","NoTHave");
}
int main()
{
	welcome();
	return 0;
}
