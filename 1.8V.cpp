#include<iostream>   //Internet版 
#include<string.h>	 //Core Ultra Max PW---Beta 1.8V
#include<stdio.h>	 //更新说明:插件市场 
#include<time.h>	 
#include<iomanip>	 //设置setw(域宽) 
#include<windows.h>
using namespace std;/*
long long sum_farcs_mu=0,sum_farcs_zi=0;//sum_farcs_zi|sum_farcs_mu
long long a1,b1,c1,d1/*a2,b2,c2,d2;//a1|b1 c1|d1
void DevF_Magcode_X2Int()
{
	long long i;
	for(i=2;i<a1;i++)
	{
		if(a1%i==0)
		{
			a1=a1/i;
			break;
		}
	}
	for(i=2;i<b1;i++)
	{
		if(b1%i==0)
		{
			b1=b1/i;
			break;
		}
	}	
	for(i=2;i<c1;i++)
	{
		if(c1%i==0)
		{
			c1=c1/i;
			break;
		}
	}
	for(i=2;i<d1;i++)
	{
		if(d1%i==0)
		{
			d1=d1/i;
			break;
		}
	}
	sum_farcs_zi=a1+c1;
	sum_farcs_mu=b1+d1;
	for(i=2;i<sum_farcs_zi;i++)
	{
		if(sum_farcs_zi%i==0)
		{
			sum_farcs_zi=sum_farcs_zi/i;
			break;
		}
	}	
	for(i=2;i<sum_farcs_mu;i++)
	{
		if(sum_farcs_mu%i==0)
		{
			sum_farcs_mu=sum_farcs_mu/i;
			break;
		}
	}
}
void DevF_Magcode_X1Int()//Farc_int
{
	system("title 分数整数版计算");
	system("cls");
	long long i,n;
	char e;
	long long a,b,c,d;//a|b c|d
    long long a1,b1,c1,d1;//a1|b1 c1|d1
    long long one_farcs=0,two_farcs=0;//one_farcs|two_farcs
	cout<<"                               分数整数版计算                               "<<endl;
  /*cout<<"                                                                            "<<endl;*/ //比较行	 
	/*
	cout<<"输入使用次数(-1是无限循环):";
	cin>>n;
	system("cls");
	if(n==-1)
	{
	system("cls");
		while(1)
		{
			cout<<"                          分数整数版计算(无限循环)                          "<<endl;
			cout<<"加法(+)Beta        减法(-)DevStop        乘法(*)DevStop       除法(/)DevStop"<<endl;
			cout<<"输入符号:";
			cin>>e;
			switch(e)
			{
				case '+':cout<<"输入第一个分数的分母:";
						 cin>>b;
						 cout<<"输入第一个分数的分子:";
						 cin>>a;
						 cout<<"输入第二个分数的分母:";
						 cin>>d;
						 cout<<"输入第二个分数的分子:";
						 cin>>c;						 
						 cout<<"答案是:"<<endl;	
						 a1=a*c;c1=c*a;
						 b1=b*d;d1=d*b;
						 DevF_Magcode_X2Int();
						 if(a1==b1 && c1==d1)
						 {
							 cout<<setw(10)<<a<<"      "<<setw(10)<<c<<endl;
							 cout<<"----------   +  ----------   =   2"<<endl;
							 cout<<setw(10)<<b<<"      "<<setw(10)<<d<<endl;break;
						 }
						 else
						 {
						 	 cout<<setw(10)<<a<<"      "<<setw(10)<<c<<"       "<<setw(10)<<sum_farcs_zi<<endl;
						 	 cout<<"----------   +  ----------   =   ----------"<<endl;
						 	 cout<<setw(10)<<b<<"      "<<setw(10)<<d<<"       "<<setw(10)<<sum_farcs_mu<<endl;break;
						 }
				case '-':system("color 4E"); 
						 cout<<"System is error!";
						 cout<<"Error code is 0x000C1!";
						 system("color 07");break;
				case '*':system("color 4E"); 
						 cout<<"System is error!";
						 cout<<"Error code is 0x000C1!";
						 system("color 07");break;
				case '/':system("color 4E");
						 cout<<"System is error!";
						 cout<<"Error code is 0x000C1!";
						 system("color 07");break;			
			}
		}
	}
    else
	{
		for(i=1;i<=n;i++)
		{
			cout<<"                          分数整数版计算(有限循环)                          "<<endl;
			cout<<"加法(+)              减法(-)                乘法(*)                  除法(/)"<<endl;
			cout<<"输入符号:";
			cin>>e;
			switch(e)
			{
				case '+':system("color 4E"); 
						 cout<<"System is error!";
						 cout<<"Error code is 0x000C1!";break;
				case '-':system("color 4E"); 
						 cout<<"System is error!";
						 cout<<"Error code is 0x000C1!";break;
				case '*':system("color 4E"); 
						 cout<<"System is error!";
						 cout<<"Error code is 0x000C1!";break;
				case '/':system("color 4E"); 
						 cout<<"System is error!";
						 cout<<"Error code is 0x000C1!";break;				
			}
		}			
	}
}*/
void Tools_Program()
{
	string Downloads_mode;
	system("title 插件市场");
	system("cls");
	cout<<"                                  插件市场                                  "<<endl;
  /*cout<<"                                                                            "<<endl;*/ //比较行	 	
	cout<<"FarcsTools(分数工具)"<<endl;
	cout<<"下载量:"<<endl;
	cout<<"    0次"<<endl;
	cout<<"开发者:"<<endl;
	cout<<"    纸球球"<<endl;
	cout<<"简介:"<<endl;
	cout<<"    没用的东西!"<<endl;	 
	cout<<"下载编号(FT)"<<endl<<endl<<endl<<endl;
	cout<<"输入下载编号:";
	cin>>Downloads_mode;
	if(Downloads_mode=="FT" || Downloads_mode=="ft" || Downloads_mode=="Ft" || Downloads_mode=="fT")
	{
		system("color 4E"); 
		cout<<"System is error!"<<endl;
		cout<<"Error code is 0x00TP3!"<<endl;
	}
}
void float_countF()
{
	system("title 单精度小数计算");
	system("cls");
	long long i,n;
	char e;
	float a,b,c;//a+b=c a-b=c a*b=c a/b=c
	cout<<"                               单精度小数计算                               "<<endl;
  /*cout<<"                                                                            "<<endl;*/ //比较行	 
	cout<<"输入使用次数(-1是无限循环):";
	cin>>n;
	system("cls");
	if(n==-1)
	{	
		while(1)
		{
			cout<<"                          单精度小数计算(无限循环)                          "<<endl;
			cout<<"加法(+)              减法(-)                乘法(*)                  除法(/)"<<endl;
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
						 cout<<"答案(商)是:"<<a/b<<endl;break;				
			}
		}
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			cout<<"                          单精度小数计算(有限循环)                          "<<endl;
			cout<<"加法(+)              减法(-)                乘法(*)                  除法(/)"<<endl;
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
						 cout<<"答案(商)是:"<<a/b<<endl;break;				
			}
		}			
	} 	
}
void double_countF()
{
	system("title 双精度小数计算");
	system("cls");
	long long i,n;
	char e;
	double a,b,c;//a+b=c a-b=c a*b=c a/b=c
	cout<<"                               双精度小数计算                               "<<endl;
  /*cout<<"                                                                            "<<endl;*/ //比较行	 
	cout<<"输入使用次数(-1是无限循环):";
	cin>>n;
	system("cls");
	if(n==-1)
	{	
		while(1)
		{
			cout<<"                          双精度小数计算(无限循环)                          "<<endl;
			cout<<"加法(+)              减法(-)                乘法(*)                  除法(/)"<<endl;
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
						 cout<<"答案(商)是:"<<a/b<<endl;break;				
			}
		}
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			cout<<"                          双精度小数计算(有限循环)                          "<<endl;
			cout<<"加法(+)              减法(-)                乘法(*)                  除法(/)"<<endl;
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
						 cout<<"答案(商)是:"<<a/b<<endl;break;				
			}
		}			
	} 	
}
void FuZhu_F()
{
	system("cls");
	cout<<"                                  辅助名单                                  "<<endl;
  /*cout<<"                                                                            "<<endl;*/ //比较行
    system("title 辅助名单");	 
	cout<<"开发者:"<<endl;
	cout<<"Long MaoShui(CZZD Studio)---------------------------------------------主开发"<<endl;
	cout<<"其他赞助人员:"<<endl;
	cout<<"Yuan WuYi(CZZD Studio)------------------------------------------------100RMB"<<endl;
	cout<<"Huang ZiYan(CZZD Studio)-----------------------------------------------50RMB"<<endl;
	cout<<"GeDa(CZZD Studio)------------------------------------------------------25RMB"<<endl;
	cout<<"Caden(CZZD Studio)-----------------------------------------------------10RMB"<<endl; 
	cout<<"有病名单:"<<endl; 
	cout<<"			Lan MeiJiang(CZZD Studio)--------------------------------------5RMB"<<endl;
}
void exit_code()
{
	system("cls");
	long long rand_b=0,i,a,rand_a;
	cout<<" 写作业计算器(Core Ultra Max PW)关闭中!Welcome To HomeWorkGo(Core Ultra Max PW) "<<endl<<endl<<endl;
	cout<<"                                   关闭中...                                    "<<endl<<endl<<endl;
	cout<<"                                 Release V1.8                                   "<<endl;
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
	system("title 关闭成功!欢迎下次使用!");
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
			cout<<"                             整数计算(有限循环)                             "<<endl;
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
void Homev018(string mode,string FExit,string RExit)
{
	char switch_mode;
	if(mode=="WelcomeHome")
	{
		system("title HomeWorkGo主页");
		cout<<"HomeWorkGo            一个简洁而朴实无华的写作业神器!            (Beta V1.8)"<<endl;
		cout<<"                        海内存知己，天涯若比邻......                        "<<endl;
		cout<<"                        有朋自远方来，不亦乐呼......                        "<<endl;
		cout<<"                          由两位小学生制作的神器!                           "<<endl;
		cout<<"                 Core Ultra Max PW尊贵版(已连接Internet版)                  "<<endl;
		cout<<"                             Release-整数计算(I)                            "<<endl;
		cout<<"        Release-单精度小数计算(F)          Release-双精度小数计算(D)        "<<endl;
		cout<<"                          DevStop-分数整数计算(A)                           "<<endl; 
		cout<<"     DevStop-分数单精度小数计算(B)        DevStop-分数双精度小数计算(C)     "<<endl;
		cout<<"    交流广场(J)    插件市场(T)     辅助名单(Z)    退出(E)    更新记录(V)    "<<endl<<endl<<endl<<endl;
	  /*cout<<"                                                                            "<<endl;*/ //比较行 
		cout<<"输入:";
		cin>>switch_mode;
		switch(switch_mode)																		 	  //启动(模块)索引 
		{
			case 'I':Homev018("int_countF_Start","NotServer","NotServer");
					 int_countF();break;
			case 'i':Homev018("int_countF_Start","NotServer","NotServer");
					 int_countF();break;
			case 'E':exit_code();break;
			case 'e':exit_code();break;	
			case 'Z':Homev018("Zan_Start","NotServer","NotServer");
					 FuZhu_F();break;
			case 'z':Homev018("Zan_Start","NotServer","NotServer");
					 FuZhu_F();break;	
			case 'D':Homev018("double_countF_Start","NotServer","NotServer");
					 double_countF();break;
			case 'd':Homev018("double_countF_Start","NotServer","NotServer");
					 double_countF();break;	
			case 'F':Homev018("float_countF_Start","NotServer","NotServer");
					 float_countF();break;
			case 'f':Homev018("float_countF_Start","NotServer","NotServer");
					 float_countF();break;	
			case 'a':system("cls");
					 system("color 4E");
					 cout<<"System is Error!"<<endl;
					 cout<<"Error code is 0x000F5!"<<endl;break;
			case 'A':system("cls");
					 system("color 4E");
					 cout<<"System is Error!"<<endl;
		 			 cout<<"Error code is 0x000F5!"<<endl;break;
			case 'b':system("cls");
			 		 system("color 4E"); 
					 cout<<"System is Error!"<<endl;
			 		 cout<<"Error code is 0x000F5!"<<endl;break;
			case 'B':system("cls");
					 system("color 4E");
					 cout<<"System is Error!"<<endl;
					 cout<<"Error code is 0x000F5!"<<endl;break;
			case 'J':system("cls");
					 system("color 4E");
				 	 cout<<"System is Error!"<<endl;
					 cout<<"Error code is 0x000F5!"<<endl;break;	
			case 'j':system("cls");
					 system("color 4E");
					 cout<<"System is Error!"<<endl;
					 cout<<"Error code is 0x000F5!"<<endl;break;
			case 'T':Homev018("Tools_Program_Start","NotServer","NotServer");
					 Tools_Program();break;	
			case 't':Homev018("Tools_Program_Start","NotServer","NotServer");
					 Tools_Program();break;		 	 
			case 'V':system("cls");
					 system("color 4E");
					 cout<<"System is Error!"<<endl;
					 cout<<"Error code is 0x000F5!"<<endl;break;
			case 'v':system("cls");
					 system("color 4E");
					 cout<<"System is Error!"<<endl;
					 cout<<"Error code is 0x000F5!"<<endl;break;
		}
	}
	int rand_a,rand_b,i,a;
	if(mode=="Welcome")
	{
		cout<<" 写作业计算器(Core Ultra Max PW)欢迎您!Welcome To HomeWorkGo(Core Ultra Max PW) "<<endl<<endl<<endl;
		cout<<"                                   启动中...                                    "<<endl<<endl<<endl;
		cout<<"                                   Beta V1.8                                    "<<endl;
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
		Homev018("WelcomeHome","NotSevrer","NotSevrer");
	}
	if(mode=="int_countF_Start")
	{
		system("cls");
		system("title HomeWorkGo整数计算程序加载中!");
		cout<<"                            整数计算程序加载中......                            "<<endl<<endl<<endl;
		cout<<"                                   加载中...                                    "<<endl<<endl<<endl;
		cout<<"                                 Release V1.8                                   "<<endl;
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
				case 1:a=50;break;
				case 2:a=75;break;
				case 3:a=100;break;
				case 4:a=125;break;
				case 5:a=150;break;		
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
	if(mode=="Zan_Start")
	{
		system("cls");
		system("title HomeWorkGo赞助名单加载中!");
		cout<<"                              赞助名单加载中......                              "<<endl<<endl<<endl;
		cout<<"                                   加载中...                                    "<<endl<<endl<<endl;
		cout<<"                                   Beta V1.8                                    "<<endl;
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
	if(mode=="double_countF_Start")
	{
		system("cls");
		system("title HomeWorkGo双精度小数加载中!");
		cout<<"                         双精度小数计算程序加载中......                         "<<endl<<endl<<endl;
		cout<<"                                   加载中...                                    "<<endl<<endl<<endl;
		cout<<"                                 Release V1.8                                   "<<endl;
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
	if(mode=="flaot_countF_Start")
	{
		system("cls");
		system("title HomeWorkGo单精度小数加载中!");
		cout<<"                         单精度小数计算程序加载中......                         "<<endl<<endl<<endl;
		cout<<"                                   加载中...                                    "<<endl<<endl<<endl;
		cout<<"                                 Release V1.8                                   "<<endl;
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
	if(mode=="Tools_Program_Start")
	{
		system("cls");
		system("title HomeWorkGo插件市场加载中!");
		cout<<"                            插件市场程序加载中......                            "<<endl<<endl<<endl;
		cout<<"                                   加载中...                                    "<<endl<<endl<<endl;
		cout<<"                                 Release V1.8                                   "<<endl;
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
	Homev018("Welcome","NotSevrer","NotSevrer");
	return 0;
}
