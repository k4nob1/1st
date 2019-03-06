#include <string>
using namespace std;

string string_from_int(int n)
{
	string answer;
	switch(n)
	{
	case 0:
		answer = "����";
		break;
	case 1:
		answer = "����";
		break;
	case 2:
		answer = "���";
	break;
	case 3:
		answer = "���";
	break;
	case 4:
		answer = "������";
	break;
	case 5:
		answer = "����";
	break;
	case 6:
		answer = "�����";
	break;
	case 7:
		answer = "����";
	break;
	case 8:
		answer = "������";
	break;
	case 9:
		answer = "������";
	break;
	case 10:
		answer = "������";
	break;
	case 11:
		answer = "����������";
	break;
	case 12:
		answer = "����������";
	break;
	case 13:
		answer = "����������";
	break;
	case 14:
		answer = "������������";
	break;
	case 15:
		answer = "�����������";
	break;
	case 16:
		answer = "������������";
	break;
	case 17:
		answer = "�����������";
	break;
	case 18:
		answer = "�������������";
	break;
	case 19:
		answer = "�������������";
	break;

	}

	return answer;
}

string int_to_sto(int n)
{
	string ans;
	if(n<20)
	{
		ans = string_from_int(n);
	}
	else
	if (n/10 == 2)
	{
		int a = n%10;
		if (a==0) ans = "��������";
		else
		ans = "�������� "+string_from_int(a);
	}
	else
	if (n/10 == 3)
	{
		int a = n%10;
		if (a==0) ans = "��������";
		else
		ans = "�������� "+string_from_int(a);
	}
	else
	if (n/10 == 4)
	{
		int a = n%10;
		if (a==0) ans = "�����";
		else
		ans = "����� "+string_from_int(a);
	}
	else
	if (n/10 == 5)
	{
		int a = n%10;
		if (a==0) ans = "���������";
		else
		ans = "��������� "+string_from_int(a);
	}
	else
	if (n/10 == 6)
	{
		int a = n%10;
		if (a==0) ans = "����������";
		else
		ans = "���������� "+string_from_int(a);
	}
	else
	if (n/10 == 7)
	{
		int a = n%10;
		if (a==0) ans = "���������";
		else
		ans = "��������� "+string_from_int(a);
	}
	else
	if (n/10 == 8)
	{
		int a = n%10;
		if (a==0) ans = "�����������";
		else
		ans = "����������� "+string_from_int(a);
	}
	else
	if (n/10 == 9)
	{
		int a = n%10;
		if (a==0) ans = "���������";
		else
		ans = "��������� "+string_from_int(a);
	}

	return ans;
}

string kilo(int n)
{
	string ans;
	int a;
	if (n<100)
	{ans = int_to_sto(n);}
	if (n/100 == 1)
	{
		a=n%100;
		if (a==0) ans="���";
		else
		ans = "��� "+int_to_sto(a);
	}
	else
	if (n/100 == 2)
	{
		a=n%100;
		if (a==0) ans="������";
		else
		ans = "������ "+int_to_sto(a);
	}
	else
	if (n/100 == 3)
	{
		a=n%100;
		if (a==0) ans="������";
		else
		ans = "������ "+int_to_sto(a);
	}
	else
	if (n/100 == 4)
	{
		a=n%100;
		if (a==0) ans="���������";
		else
		ans = "��������� "+int_to_sto(a);
	}
	else
	if (n/100 == 5)
	{
		a=n%100;
		if (a==0) ans="�������";
		else
		ans = "������� "+int_to_sto(a);
	}
	else	
	if (n/100 == 6)
	{
		a=n%100;
		if (a==0) ans="��������";
		else
		ans = "�������� "+int_to_sto(a);
	}
	else
	if (n/100 == 7)
	{
		a=n%100;
		if (a==0) ans="�������";
		else
		ans = "������� "+int_to_sto(a);
	}
	else
	if (n/100 == 8)
	{
		a=n%100;
		if (a==0) ans="���������";
		else
		ans = "��������� "+int_to_sto(a);
	}
	else
	if (n/100 == 9)
	{
		a=n%100;
		if (a==0) ans="���������";
		else
		ans = "��������� "+int_to_sto(a);
	}

	return ans;
}

string sch(int n, string s1,string s2,string s3)
{
	string ans;
	if (n/100==11||n/100==12||n/100==13||n/100==14) ans = kilo(n)+" "+s3;
	else
	if (n%10==1) ans = kilo(n)+" "+s1;
	else
	if (n%10>1&&n%10<5) ans = kilo(n)+" "+s2;
	else
	ans = kilo(n)+" "+s3;
	return ans;
}

string last(int r, string r1,string r2,string r3,int k, string k1,string k2,string k3)
{
	string ans;
	int a=r%100;
	int b=k%100;
	if (a==11||a==12||a==13||a==14) ans = kilo(r)+" "+r3;
	else
	if (r%10==1) ans = kilo(r)+" "+r1;
	else
	if (r%10>1&&r%10<5) ans = kilo(r)+" "+r2;
	else
	ans = kilo(r)+" "+r3;
	if (k==0) ans=ans;
	else
	if (b==11||b==12||b==13||b==14) ans = ans+", "+kilo(k)+" "+k3;
	else
	if (k%10==1) ans = ans+", "+kilo(k)+" "+k1;
	else
	if (k%10>1&&k%10<5) ans = ans+", "+kilo(k)+" "+k2;
	else
	ans = ans+", "+kilo(k)+" "+k3;
	return ans;
}
