// aned.
// �������: ���� ���������� ������������ ABC � ����� P
// ���������� ��������� �� ����� ������ ������������
// ��������: 1.������ ������������ � �������� P
// 2.������� ����� ���� ��������
// 3.������� ���� � �������� P
// 4.����� ����� ������ ��������� 2��  ��� 360 ��������
//#include <vector>
//#include <iostream>
//#include <math.h>
//#include <random> 
//#include <iomanip>
//using namespace std;
//
//struct Point
//{
//	double x,y;
//};
//
//double fRand(double fMin, double fMax)
//{
//	random_device rd; 
//    mt19937 gen(rd());  
//    uniform_real_distribution<> uid(fMin, fMax); 
//	return uid(gen);
//}
// 
//int main()
//{
//	double X1,X2,X3,Y1,Y2,Y3; // ���������� ������������ ABC
//	double point[i].x,point[i].y; // ���������� ����� P
//	double AB,AC,BC; // ����� �������� ������������ ABC
//	double PA,PB,PC; // ����� �������� �� ����� P
//	double APB,APC,BPC; // ���� � ������� P
//
//    setlocale(0,"");
//	X1=0;
//    Y1=0;
//    cout<<"������� a: ";
//    cin>>X2;
//	Y2=0;
//    X3=0;    
//    cout<<"������� b: ";
//    cin>>Y3;
//	int n=5;
//	Point *points = new Point[n];
//	for (int i=0; i<n; i++)
//	{
//		points[i].x = fRand(0, X2)/2;
//		points[i].y = fRand(0, Y3)/2;
//	}
//		for (int i=0; i<n; i++)
//		{
//    AB=sqrt(pow((X1-X2),2)+pow((Y1-Y2),2));
//    AC=sqrt(pow((X1-X3),2)+pow((Y1-Y3),2));
//    BC=sqrt(pow((X2-X3),2)+pow((Y2-Y3),2));
//     ----------------------------------------
//    PA=sqrt(pow((points[i].x-X1),2)+pow((points[i].y-Y1),2));
//    PB=sqrt(pow((points[i].x-X2),2)+pow((points[i].y-Y2),2));
//    PC=sqrt(pow((points[i].x-X3),2)+pow((points[i].y-Y3),2));
// 
//    cout<<endl<<AB<<endl<<AC<<endl<<BC<<endl;
//    cout<<endl<<PA<<endl<<PB<<endl<<PC<<endl;
//     ----------------------------------------------
//    APB=acos((pow(PB,2)+pow(PA,2)-pow(AB,2))/(2*PA*PB));
//    APC=acos((pow(PC,2)+pow(PA,2)-pow(AC,2))/(2*PA*PC));
//    BPC=acos((pow(PB,2)+pow(PC,2)-pow(BC,2))/(2*PC*PB));
// 
//    cout<<endl<<APB<<endl<<APC<<endl<<BPC<<endl;
//     ----------------------------------------
//    double Summ=(APB+APC+BPC);// ����� ����� � ������� P
//    cout<<endl<<Summ<<endl;
// 
//    cout<<fixed;               // ��������� ��� ����� ����� �������
//    cout<<setprecision(2);
//    cout<<endl<<Summ<<endl;
//    int Summ1=(Summ/2)*100; // �������� � int
// 
//    cout<<endl<<Summ1<<endl;
// 
//     -----------------------------------
//    switch(Summ1)
//    {
//        case 314:
// 
//            cout<<endl<<"YES!"<<endl;
//        break;
// 
//        default :
//            cout<<endl<<"NO!"<<endl;
//    }
//		
//	}
//	bool p=false;
//	for (int i=0; i<n; i++)
//	{
//		for(int j=0; j<n; j++)
//		{
//			if(i!=j)
//			{
//			if ((points[i].x==points[j].x)&&(points[i].y==points[j].y))
//			p=true;
//			cout<<i<<" "<<j<<endl;
//			}
//		}
//	}
//	
//	return p;
//}