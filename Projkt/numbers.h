#include <string>
using namespace std;

string string_from_int(int n)
{
	string answer;
	switch(n)
	{
	case 0:
		answer = "ноль";
		break;
	case 1:
		answer = "один";
		break;
	case 2:
		answer = "два";
	break;
	case 3:
		answer = "три";
	break;
	case 4:
		answer = "четыре";
	break;
	case 5:
		answer = "пять";
	break;
	case 6:
		answer = "шесть";
	break;
	case 7:
		answer = "семь";
	break;
	case 8:
		answer = "восемь";
	break;
	case 9:
		answer = "девять";
	break;
	case 10:
		answer = "десять";
	break;
	case 11:
		answer = "одинадцать";
	break;
	case 12:
		answer = "двенадцать";
	break;
	case 13:
		answer = "тринадцать";
	break;
	case 14:
		answer = "четырнадцать";
	break;
	case 15:
		answer = "пятьнадцать";
	break;
	case 16:
		answer = "шестьнадцать";
	break;
	case 17:
		answer = "семьнадцать";
	break;
	case 18:
		answer = "восемьнадцать";
	break;
	case 19:
		answer = "девятьнадцать";
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
		if (a==0) ans = "двадцать";
		else
		ans = "двадцать "+string_from_int(a);
	}
	else
	if (n/10 == 3)
	{
		int a = n%10;
		if (a==0) ans = "тридцать";
		else
		ans = "тридцать "+string_from_int(a);
	}
	else
	if (n/10 == 4)
	{
		int a = n%10;
		if (a==0) ans = "сорок";
		else
		ans = "сорок "+string_from_int(a);
	}
	else
	if (n/10 == 5)
	{
		int a = n%10;
		if (a==0) ans = "пятьдесят";
		else
		ans = "пятьдесят "+string_from_int(a);
	}
	else
	if (n/10 == 6)
	{
		int a = n%10;
		if (a==0) ans = "шестьдесят";
		else
		ans = "шестьдесят "+string_from_int(a);
	}
	else
	if (n/10 == 7)
	{
		int a = n%10;
		if (a==0) ans = "семьдесят";
		else
		ans = "семьдесят "+string_from_int(a);
	}
	else
	if (n/10 == 8)
	{
		int a = n%10;
		if (a==0) ans = "восемьдесят";
		else
		ans = "восемьдесят "+string_from_int(a);
	}
	else
	if (n/10 == 9)
	{
		int a = n%10;
		if (a==0) ans = "девяносто";
		else
		ans = "девяносто "+string_from_int(a);
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
		if (a==0) ans="сто";
		else
		ans = "сто "+int_to_sto(a);
	}
	else
	if (n/100 == 2)
	{
		a=n%100;
		if (a==0) ans="двести";
		else
		ans = "двести "+int_to_sto(a);
	}
	else
	if (n/100 == 3)
	{
		a=n%100;
		if (a==0) ans="триста";
		else
		ans = "триста "+int_to_sto(a);
	}
	else
	if (n/100 == 4)
	{
		a=n%100;
		if (a==0) ans="четыреста";
		else
		ans = "четыреста "+int_to_sto(a);
	}
	else
	if (n/100 == 5)
	{
		a=n%100;
		if (a==0) ans="пятьсот";
		else
		ans = "пятьсот "+int_to_sto(a);
	}
	else	
	if (n/100 == 6)
	{
		a=n%100;
		if (a==0) ans="шестьсот";
		else
		ans = "шестьсот "+int_to_sto(a);
	}
	else
	if (n/100 == 7)
	{
		a=n%100;
		if (a==0) ans="семьсот";
		else
		ans = "семьсот "+int_to_sto(a);
	}
	else
	if (n/100 == 8)
	{
		a=n%100;
		if (a==0) ans="восемьсот";
		else
		ans = "восемьсот "+int_to_sto(a);
	}
	else
	if (n/100 == 9)
	{
		a=n%100;
		if (a==0) ans="девятьсот";
		else
		ans = "девятьсот "+int_to_sto(a);
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
