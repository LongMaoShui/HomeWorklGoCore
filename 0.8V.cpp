#include<iostream>   //Internet版 
#include<string.h>	 //Core Ultra Max PW---Canny 0.8V
#include<stdio.h>	 //更新说明:水一版 
#include<time.h>	 
#include<iomanip>	 //设置setw(域宽) 
#include<windows.h>
using namespace std;
void exit_code()
{
	system("cls");
	long long rand_b=0,i,a,rand_a;
	cout<<" 写作业计算器(Core Ultra Max PW)关闭中!Welcome To HomeWorkGo(Core Ultra Max PW) "<<endl<<endl<<endl;
	cout<<"                                   关闭中...                                    "<<endl<<endl<<endl;
	cout<<"                                  Canny V0.8                                    "<<endl;
	system("title 写作业计算器(Core Ultra Max PW)关闭中!Welcome To HomeWorkGo(Core Ultra Max PW)");
	srand(time(0));
	rand_b=rand()%1+5;
	switch(rand_b)
	{
		case 1:Sleep(1500);break;
		case 2:Sleep(1750);break;
		case 3:Sleep(2000);break;
		case 4:Sleep(2250);break;
		case 5:Sleep(2500);break;
	}
	Sleep(rand_b);	
	system("cls");
	system("title HomeWorkGo停止服务中(HmtlServer)!");
	for(i=1;i<=rand_a;i++)
	{
		srand(time(0));
		rand_a=rand()%1+5; 
		switch(rand_a)
		{
			case 1:a=50;break;
			case 2:a=75;break;
			case 3:a=100;break;
			case 4:a=125;break;
			case 5:a=150;break;		
		}
		system("cls");
		cout<<"                          停止服务中(HmtlServer)..                          "<<endl;
		Sleep(a);
		system("cls");
		cout<<"                        停止服务中(HmtlServer)....                          "<<endl;
		Sleep(a);
		system("cls");
		cout<<"                      停止服务中(HmtlServer).......                         "<<endl;
		Sleep(a);
		system("cls");
		cout<<"                     停止服务中(HmtlServer)..........                       "<<endl;	
		Sleep(a);
	}
	system("cls");
	system("title HomeWorkGo停止服务中(HomeServer)!");
	for(i=1;i<=rand_a;i++)
	{
		srand(time(0));
		rand_a=rand()%1+5; 
		switch(rand_a)
		{
			case 1:a=50;break;
			case 2:a=75;break;
			case 3:a=100;break;
			case 4:a=125;break;
			case 5:a=150;break;		
		}
		system("cls");
		cout<<"                          停止服务中(HomeServer)..                          "<<endl;
		Sleep(a);
		system("cls");
		cout<<"                        停止服务中(HomeServer)....                          "<<endl;
		Sleep(a);
		system("cls");
		cout<<"                      停止服务中(HomeServer).......                         "<<endl;
		Sleep(a);
		system("cls");
		cout<<"                     停止服务中(HomeServer)..........                       "<<endl;	
		Sleep(a);
	}
	system("cls");
	cout<<"                           关闭成功!欢迎下次使用!                           "<<endl;
  /*cout<<"                                                                            "<<endl;*/ //比较行 
}
void int_countF()
{
	system("title 整数计算");
	system("cls");
	long long i,n;
	char e;
	long long a,b,c,d;//a+b=c a-b=c a*b=c a/b=c......d
	cout<<"                                  整数计算                                  "<<endl;
	cout<<"输入使用次数(-1是无限循环):";
	cin>>n;
	system("cls");
	if(n==-1)
	{	
		while(1)
		{
			cout<<"                             整数计算(无限循环)                             "<<endl;
			cout<<"加法(+)              减法(-)                乘法(*)              有余除法(/)"<<endl;
			cout<<"输入符号:";
			cin>>e;
			switch(e)
			{
				case '+':cout<<"输入第一个加数:";
						 cin>>a;
						 cout<<"输入第二个加数:";
						 cin>>b;
						 cout<<"答案是:"<<a+b<<endl<<endl<<endl<<endl;break;
				case '-':cout<<"输入被减数:";
						 cin>>a;
						 cout<<"输入减数:";
						 cin>>b;
						 cout<<"答案是:"<<a-b<<endl<<endl<<endl<<endl;break;
				case '*':cout<<"输入第一个因数:";
						 cin>>a;
						 cout<<"输入第二个因数:";
						 cin>>b;
						 cout<<"答案是:"<<a*b<<endl<<endl<<endl<<endl;break;
				case '/':cout<<"输入被除数:";
						 cin>>a;
						 cout<<"输入除数:"; 
						 cin>>b;
						 cout<<"答案(商)是:"<<a/b<<endl;
						 if(a%b>0)
						 	cout<<"答案(余)是:"<<a%b<<endl<<endl<<endl<<endl;
						 break;				
			}
		}
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			cout<<"                             整数计算(无限循环)                             "<<endl;
			cout<<"加法(+)              减法(-)                乘法(*)              有余除法(/)"<<endl;
			cout<<"输入符号:";
			cin>>e;
			switch(e)
			{
				case '+':cout<<"输入第一个加数:";
						 cin>>a;
						 cout<<"输入第二个加数:";
						 cin>>b;
						 cout<<"答案是:"<<a+b<<endl<<endl<<endl<<endl;break;
				case '-':cout<<"输入被减数:";
						 cin>>a;
						 cout<<"输入减数:";
						 cin>>b;
						 cout<<"答案是:"<<a-b<<endl<<endl<<endl<<endl;break;
				case '*':cout<<"输入第一个因数:";
						 cin>>a;
						 cout<<"输入第二个因数:";
						 cin>>b;
						 cout<<"答案是:"<<a*b<<endl<<endl<<endl<<endl;break;
				case '/':cout<<"输入被除数:";
						 cin>>a;
						 cout<<"输入除数:"; 
						 cin>>b;
						 cout<<"答案(商)是:"<<a/b<<endl;
						 if(a%b>0)
						 	cout<<"答案(余)是:"<<a%b<<endl<<endl<<endl<<endl;
						 break;				
			}
		}			
	} 
}
void Homev08(string mode,string FExit,string RExit)
{
	char switch_mode;
	if(mode=="WelcomeHome")
	{
		system("title HomeWorkGo主页");
		cout<<"HomeWorkGo            一个简洁而朴实无华的写作业神器!           (Canny V0.8)"<<endl;
		cout<<"                        海内存知己，天涯若比邻......                        "<<endl;
		cout<<"                          由两位小学生制作的神器!                           "<<endl;
		cout<<"                 Core Ultra Max PW尊贵版(已连接Internet版)                  "<<endl;
		cout<<" Release-整数计算(I) DevSotpSevrer-小数计算(D) Dev-赞助名单(Z) Canny-退出(E)"<<endl;
	  /*cout<<"                                                                            "<<endl;*/ //比较行 
		cout<<"输入:";
		cin>>switch_mode;
		switch(switch_mode)
		{
			case 'I':Homev08("FJZ_I","NotServer","NotServer");
					 int_countF();break;
			case 'i':Homev08("FJZ_I","NotServer","NotServer");
					 int_countF();break;
			case 'E':Homev08("ExitF","NotServer","NotServer");
					 exit_code();break;
			case 'e':Homev08("ExitF","NotServer","NotServer");
					 exit_code();break;					 
		}
	}
	int rand_a,rand_b,i,a;
	if(mode=="Welcome")
	{
		cout<<" 写作业计算器(Core Ultra Max PW)欢迎您!Welcome To HomeWorkGo(Core Ultra Max PW) "<<endl<<endl<<endl;
		cout<<"                                   启动中...                                    "<<endl<<endl<<endl;
		cout<<"                                  Canny V0.8                                    "<<endl;
		system("title 写作业计算器(Core Ultra Max PW)欢迎您!Welcome To HomeWorkGo(Core Ultra Max PW)");
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
		system("cls");
		system("title HomeWorkGo加载系统与文件中!");
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
		system("cls");
		Homev08("WelcomeHome","NotSevrer","NotSevrer");
	}
	if(mode=="FJZ_I")
	{
		system("title HomeWorkGo整数计算程序加载中!");
		cout<<"                            整数计算程序加载中......                            "<<endl<<endl<<endl;
		cout<<"                                   加载中...                                    "<<endl<<endl<<endl;
		cout<<"                                   Beta V0.8                                    "<<endl;
	  /*cout<<"                                                                                "<<endl;*/ //比较行 
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
		system("cls");
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
			cout<<"                              加载程序中..                              "<<endl;
			Sleep(a);
			system("cls");
			cout<<"                             加载程序中....                             "<<endl;
			Sleep(a);
			system("cls");
			cout<<"                           加载程序中.......                            "<<endl;
			Sleep(a);
			system("cls");
			cout<<"                          加载程序中..........                          "<<endl;	
			Sleep(a);
		}
	}
}
int main()
{
	Homev08("Welcome","NotSevrer","NotSevrer");
	return 0;
}
