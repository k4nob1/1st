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
		answer = "п€ть";
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
		answer = "дев€ть";
	break;
	case 10:
		answer = "дес€ть";
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
		answer = "п€тьнадцать";
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
		answer = "дев€тьнадцать";
	break;

	}

	return answer;
}
