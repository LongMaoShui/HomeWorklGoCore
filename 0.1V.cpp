#include<iostream>   //Internet�� 
#include<string.h>	 //Core Ultra---Dev 0.1V
#include<stdio.h>	 //����˵��:�Ÿո�д�ģ�������˵����! 
#include<time.h>
#include<windows.h>
using namespace std;
void Homev01(string mode)
{
	system("cls");
	if(mode=="Welcome")
	{
		cout<<"HomeWorkGo            һ��������ʵ�޻���д��ҵ����!             (Dev V0.1)"<<endl;
		cout<<"                        ���ڴ�֪��������������......                        "<<endl;
		cout<<"                          ����λСѧ������������!                           "<<endl;
		cout<<"                     Core Ultra����(������Internet��)                     "<<endl;
		cout<<" Canny-��������(I) DevSotpSevrer-С������(D) Dev-��������(Z) Canny-�˳�(E)  "<<endl;
	}
}
void welcome()
{
	int rand_a,i;
	cout<<"        д��ҵ������(Core Ultra)��ӭ��!Welcome To HomeWorkGo(Core Ultra)        "<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                   ������...                                    "<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                   Dev V0.1                                     "<<endl;
	system("title д��ҵ������(Core Ultra)��ӭ��!Welcome To HomeWorkGo(Core Ultra)");
	Sleep(2500);
	srand(time(0));
	rand_a=rand()%1+5;
	for(i=1;i<=rand_a;i++)
	{
		system("cls");
		cout<<"                                  ������...                                 "<<endl;
		Sleep(1000); 
		system("cls");
		cout<<"                               	������....                                 "<<endl;
		Sleep(1000);		
		system("cls");
		cout<<"                                ������.....                                 "<<endl;
		Sleep(1000);	
		system("cls");
		cout<<"                                ������......                                "<<endl;
		Sleep(1000);
	}
	Homev01("Welcome");
}
int main()
{
	welcome();
	return 0;
}
