#include<iostream>   //Internet版 
#include<string.h>	 //Core Ultra PW---Beta 2.2V
#include<stdio.h>	 //更新说明:不告诉你 
#include<time.h>	 
#include<iomanip>	 //设置setw(域宽) 
#include<windows.h>
using namespace std;
void exit_code()
{
	system("cls");
	long long rand_b=0,i,a,rand_a;
	cout<<"   写作业计算器(Core Ultra PW)关闭中!    Welcome To HomeWorkGo(Core Ultra PW)   "<<endl<<endl<<endl;
	cout<<"                                   关闭中...                                    "<<endl<<endl<<endl;
	cout<<"                                 Release V2.2                                   "<<endl;
	system("title 写作业计算器(Core Ultra PW)关闭中!Welcome To HomeWorkGo(Core Ultra PW)");
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
/*
int txtymd[11][8]={0};
void print_txtymd()
{
	txtymd[1][1]=27;
	txtymd[1][2]=28;
	txtymd[1][3]=29;
	txtymd[1][4]=30;
	txtymd[1][5]=1;
	txtymd[1][6]=2;
	txtymd[1][7]=3;	
	txtymd[2][1]=4;
	txtymd[2][2]=5;
	txtymd[2][3]=6;
	txtymd[2][4]=7;
	txtymd[2][5]=8;
	txtymd[2][6]=9;
	txtymd[2][7]=10;	
	txtymd[3][1]=11;
	txtymd[3][2]=12;
	txtymd[3][3]=13;
	txtymd[3][4]=14;
	txtymd[3][5]=15;
	txtymd[3][6]=16;
	txtymd[3][7]=17;	
	txtymd[4][1]=18;
	txtymd[4][2]=19;
	txtymd[4][3]=20;
	txtymd[4][4]=21;
	txtymd[4][5]=22;
	txtymd[4][6]=23;
	txtymd[4][7]=24;	
	txtymd[5][1]=25;
	txtymd[5][2]=26;
	txtymd[5][3]=27;
	txtymd[5][4]=28;
	txtymd[5][5]=29;
	txtymd[5][6]=30;
	txtymd[5][7]=31;	
	txtymd[6][1]=1;
	txtymd[6][2]=2;
	txtymd[6][3]=3;
	txtymd[6][4]=4;
	txtymd[6][5]=5;
	txtymd[6][6]=6;
	txtymd[6][7]=7;	
	txtymd[7][1]=8;
	txtymd[7][2]=9;
	txtymd[7][3]=10;
	txtymd[7][4]=11;
	txtymd[7][5]=12;
	txtymd[7][6]=13;
	txtymd[7][7]=14;	
	txtymd[8][1]=15;
	txtymd[8][2]=16;
	txtymd[8][3]=17;
	txtymd[8][4]=18;
	txtymd[8][5]=19;
	txtymd[8][6]=20;
	txtymd[8][7]=21;	
	txtymd[9][1]=22;
	txtymd[9][2]=23;
	txtymd[9][3]=24;
	txtymd[9][4]=25;
	txtymd[9][5]=26;
	txtymd[9][6]=27;
	txtymd[9][7]=28;	
	txtymd[10][1]=29;
	txtymd[10][2]=30;
	txtymd[10][3]=31;
	txtymd[10][4]=1;
	txtymd[10][5]=2;
	txtymd[10][6]=3;
	txtymd[10][7]=1;		
}
void Sunday_Book(string nymd)
{
	system("title 日历");
	system("cls");
	cout<<"                                     日历                                    "<<endl;
  /*cout<<"                                                                             "<<endl;*/ //比较行	
  /*cout<<"2023年11月                                     12月                          "<<endl;*/ //未开发 
  /*cout<<"        一        二        三        四        五        六        日       "<<endl;
	cout<<"        27        28        29        30         1         2         3       "<<endl;
	cout<<"         4         5         6         7         8         9        10       "<<endl;
	cout<<"        11        12        13        14        15        16        17       "<<endl;
	cout<<"        18        19        20        21        22        23        24       "<<endl;
	cout<<"        25        26        27        28        29        30        31       "<<endl<<endl<<endl<<endl;	
	cout<<"今天是:"<<nymd<<endl<<endl<<endl;
	char way;
	while(1)
	{
		cout<<"输入上(O)下(U)页:";
		cin>>way;
		long snymd_h=1,snymd_l=1,i;
		switch(way)
		{
			case 'O':snymd_h-=1;break;
			case 'o':snymd_h-=1;break;	
			case 'U':snymd_h+=1;break;
			case 'u':snymd_h+=1;break;		
		}
		for(i=1;i<=5;i++)
		{
			if(snymd_h<=0)
				cout<<"System is Error!The txtymd not have data!"<<endl;
			else
			{
				cout<<setw(10)<<txtymd[snymd_h][snymd_l];
				cout<<setw(10)<<txtymd[snymd_h][snymd_l+1];
				cout<<setw(10)<<txtymd[snymd_h][snymd_l+2];
				cout<<setw(10)<<txtymd[snymd_h][snymd_l+3];
				cout<<setw(10)<<txtymd[snymd_h][snymd_l+4];
				cout<<setw(10)<<txtymd[snymd_h][snymd_l+5];
				cout<<setw(10)<<txtymd[snymd_h][snymd_l+6]<<endl;	
			}
			snymd_h+=1;
			snymd_l=1;
		}
		char mode;
		cout<<"是否退出:";
		cin>>mode;
		if(mode=='y' || mode=='Y')
			exit_code();
		else
			cout<<"不退出?OC!"<<endl;
	}
}
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
void hapyy_const()
{
	system("cls");
	system("title 趣味计算");
	cout<<"                                  趣味计算                                  "<<endl;
  /*cout<<"                                                                            "<<endl;*/ //比较行	
	cout<<"你有50次机会，随机抽到10000~1的a和b的数。"<<endl<<endl<<endl<<endl;
	long long a,b,c,ans,sum;	
}
void Update_records()
{
	long long version;
	system("cls");
	system("title 更新记录");
	cout<<"                                  更新记录                                  "<<endl;
  /*cout<<"                                                                            "<<endl;*/ //比较行	 
	cout<<"输入版本号(示例:2.2V输22):";
	cin>>version;
	switch(version)
	{
		default:system("color 4E"); 
				cout<<"System is error!"<<endl;
				cout<<"Error code is 0x00UR1!"<<endl;break;
	}	 
}
void JiaoLiu_F()
{
	string mode;
	system("title 交流平台");
	system("cls");
	cout<<"                                  交流平台                                  "<<endl;
  /*cout<<"                                                                            "<<endl;*/ //比较行	 
	cout<<"热帖:"<<endl<<endl;
	cout<<"恭喜代码破千!(cpq)                                         用户:Long MaoShui"<<endl;
	cout<<"1.9V更新的东西!(19vu)                                      用户:Long MaoShui"<<endl<<endl<<endl<<endl;
	cout<<"注意事项:"<<endl<<endl;
	cout<<"新手使用规则(xsbc^_^)                                  管理员:Long MS(Admin)"<<endl;
	cout<<"赞助规则(zanbc^_^)                                     管理员:Long MS(Admin)"<<endl<<endl<<endl<<endl;
	cout<<"输入帖子编号(只有括号中的字符输进去才可以)";/*(还可以输入你想知道的内容的字符):";*/
	cin>>mode;
	if(mode=="19vu")
	{
		system("color 4E"); 
		cout<<"System is error!"<<endl;
		cout<<"Error code is 0x00JF1!"<<endl;		
	} 
	if(mode=="xsbc^_^")
	{
		system("color 4E"); 
		cout<<"System is error!"<<endl;
		cout<<"Error code is 0x00JF1!"<<endl;				
	}
	if(mode=="zanbc^_^")
	{
		system("color 4E"); 
		cout<<"System is error!"<<endl;
		cout<<"Error code is 0x00JF1!"<<endl;		
	}
	if(mode=="cpq")
	{
		system("color 4E"); 
		cout<<"System is error!"<<endl;
		cout<<"Error code is 0x00JF1!"<<endl;		
	} 
}
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
	cout<<"输入下载编号(只有括号中的字符输进去才可以):";
	cin>>Downloads_mode;
	if(Downloads_mode=="FT")
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
void Homev022(string mode,string FExit,string RExit)
{
	char switch_mode;
	if(mode=="WelcomeHome")
	{
		system("title HomeWorkGo主页");
		cout<<"HomeWorkGo            一个简洁而朴实无华的写作业神器!            (Beta V2.2)"<<endl;
		cout<<"                        海内存知己，天涯若比邻......                        "<<endl;
		cout<<"                        有朋自远方来，不亦乐呼......                        "<<endl;
		cout<<"                          由两位小学生制作的神器!                           "<<endl;
		cout<<"                  恭喜代码破千(行数:1028   长度:33397)!!!                   "<<endl;
		cout<<"                              广告招商位(doge)                              "<<endl; 
		cout<<"                              广告招商位(doge)                              "<<endl; 		
		cout<<"                              广告招商位(doge)                              "<<endl; 
		cout<<"                   Core Ultra PW尊贵版(已连接Internet版)                    "<<endl;
		cout<<"                             Release-整数计算(I)                            "<<endl;
		cout<<"        Release-单精度小数计算(F)          Release-双精度小数计算(D)        "<<endl;
		cout<<"                          DevStop-分数整数计算(A)                           "<<endl; 
		cout<<"     DevStop-分数单精度小数计算(B)        DevStop-分数双精度小数计算(E)     "<<endl;
		cout<<"                               好玩的东西(W)                                "<<endl;
		cout<<"    交流广场(J)    插件市场(T)     辅助名单(Z)    退出(E)    更新记录(V)    "<<endl<<endl<<endl<<endl;
	  /*cout<<"                                                                            "<<endl;*/ //比较行 
		cout<<"输入:";
		cin>>switch_mode;
		switch(switch_mode)																		 	  //启动(模块)索引 
		{
			case 'I':Homev022("int_countF_Start","NotServer","NotServer");
					 int_countF();break;
			case 'i':Homev022("int_countF_Start","NotServer","NotServer");
					 int_countF();break;
			case 'E':exit_code();break;
			case 'e':exit_code();break;	
			case 'Z':Homev022("Zan_Start","NotServer","NotServer");
					 FuZhu_F();break;
			case 'z':Homev022("Zan_Start","NotServer","NotServer");
					 FuZhu_F();break;	
			case 'D':Homev022("double_countF_Start","NotServer","NotServer");
					 double_countF();break;
			case 'd':Homev022("double_countF_Start","NotServer","NotServer");
					 double_countF();break;	
			case 'F':Homev022("float_countF_Start","NotServer","NotServer");
					 float_countF();break;
			case 'f':Homev022("float_countF_Start","NotServer","NotServer");
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
			case 'J':Homev022("JiaoLiuF_Start","NotServer","NotServer");
					 JiaoLiu_F();break;	
			case 'j':Homev022("JiaoLiuF_Start","NotServer","NotServer");
					 JiaoLiu_F();break;
			case 'T':Homev022("Tools_Program_Start","NotServer","NotServer");
					 Tools_Program();break;	
			case 't':Homev022("Tools_Program_Start","NotServer","NotServer");
					 Tools_Program();break;		 	 
			case 'V':Homev022("Update_records_Start","NotServer","NotServer");
					 Update_records();break;
			case 'v':Homev022("Update_records_Start","NotServer","NotServer");
					 Update_records();break;
			case 'C':hapyy_const();break;
			case 'c':hapyy_const();break;			
			case 'w':system("cls");
			 		 system("color 4E"); 
					 cout<<"System is Error!"<<endl;
			 		 cout<<"Error code is 0x000F5!"<<endl;break;
			case 'W':system("cls");
					 system("color 4E");
					 cout<<"System is Error!"<<endl;
					 cout<<"Error code is 0x000F5!"<<endl;break;	
		}
	}
	int rand_a,rand_b,i,a;
	if(mode=="Welcome")
	{
		cout<<"   写作业计算器(Core Ultra PW)启动中!    Welcome To HomeWorkGo(Core Ultra PW)   "<<endl<<endl<<endl;
		cout<<"                                   启动中...                                    "<<endl<<endl<<endl;
		cout<<"                                 Release V2.2                                   "<<endl;
		system("title 写作业计算器(Core Ultra PW)启动中!Welcome To HomeWorkGo(Core Ultra PW)");
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
		Homev022("WelcomeHome","NotSevrer","NotSevrer");
	}
	if(mode=="int_countF_Start")
	{
		system("cls");
		system("title HomeWorkGo整数计算程序加载中!");
		cout<<"                            整数计算程序加载中......                            "<<endl<<endl<<endl;
		cout<<"                                   加载中...                                    "<<endl<<endl<<endl;
		cout<<"                                 Release V2.2                                   "<<endl;
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
		cout<<"                                   Beta V2.2                                    "<<endl;
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
		cout<<"                                 Release V2.2                                   "<<endl;
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
		cout<<"                                 Release V2.2                                   "<<endl;
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
		cout<<"                                 Release V2.2                                   "<<endl;
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
	if(mode=="JiaoLiuF_Start")
	{
		system("cls");
		system("title HomeWorkGo交流平台加载中!");
		cout<<"                              交流平台加载中......                              "<<endl<<endl<<endl;
		cout<<"                                   加载中...                                    "<<endl<<endl<<endl;
		cout<<"                                   Beta V2.2                                    "<<endl;
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
	if(mode=="Update_records_Start")
	{
		system("cls");
		system("title HomeWorkGo更新记录加载中!");
		cout<<"                              更新记录加载中......                              "<<endl<<endl<<endl;
		cout<<"                                   加载中...                                    "<<endl<<endl<<endl;
		cout<<"                                   Beta V2.2                                    "<<endl;
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
	if(mode=="Update_records_Start")
	{
		system("cls");
		system("title HomeWorkGo更新记录加载中!");
		cout<<"                              更新记录加载中......                              "<<endl<<endl<<endl;
		cout<<"                                   加载中...                                    "<<endl<<endl<<endl;
		cout<<"                                   Beta V2.2                                    "<<endl;
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
	Homev022("WelcomeHome","NotSevrer","NotSevrer");
	return 0;
}
