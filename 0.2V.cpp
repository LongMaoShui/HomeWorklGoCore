#include<iostream>   //Internet版 
#include<string.h>	 //Core Ultra---Dev 0.2V
#include<stdio.h>	 //更新说明:加了亿点点函数啦！等Dev0.5V再写！  
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
void Homev02(string mode,string FExit,string RJExit)
{
	char switch_mode;
	if(mode=="Welcome")
	{
		cout<<"HomeWorkGo            一个简洁而朴实无华的写作业神器!             (Dev V0.2)"<<endl;
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
	int rand_a,i;
	cout<<"        写作业计算器(Core Ultra)欢迎您!Welcome To HomeWorkGo(Core Ultra)        "<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                   启动中...                                    "<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                   Dev V0.2                                     "<<endl;
	system("title 写作业计算器(Core Ultra)欢迎您!Welcome To HomeWorkGo(Core Ultra)");
	Sleep(2500);
	srand(time(0));
	rand_a=rand()%1+5;
	for(i=1;i<=rand_a;i++)
	{
		system("cls");
		cout<<"                             加载系统与文件中..                             "<<endl;
		Sleep(1000); 
		system("cls");
		cout<<"                            加载系统与文件中....                            "<<endl;
		Sleep(1000);		
		system("cls");
		cout<<"                          加载系统与文件中.......                           "<<endl;
		Sleep(1000);	
		system("cls");
		cout<<"                         加载系统与文件中..........                         "<<endl;
		Sleep(1000);
	}
	Homev02("Welcome","NoTHave","NoTHave");
}
int main()
{
	welcome();
	return 0;
}
