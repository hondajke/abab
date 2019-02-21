#include<string>
using namespace std;
string numbers_lt_20_to_string(int number){
	string answer;
	switch (number)
	{
	case 0:answer = "ноль"; break;
	case 1:answer = "один";break;
	case 2:answer = "два";break;
	case 3:answer = "три";break;
	case 4:answer = "четыре";break;
	case 5:answer = "пять";break;
	case 6:answer = "шесть";break;
	case 7:answer = "семь";break;
	case 8:answer = "восемь";break;
	case 9:answer = "девять";break;
	case 10:answer = "десять";break;
	case 11:answer = "одиннадцать";break;
	case 12:answer = "двенадцать";break;
	case 13:answer = "тринадцать";break;
	case 14:answer = "четырнадцать";break;
	case 15:answer = "пятьнадцать";break;
	case 16:answer = "шестьнадцать";break;
	case 17:answer = "семьнадцать";break;
	case 18:answer = "восемьнадцать";break;
	case 19:answer = "девятьнадцать";break;
	case 20:answer = "двадцать";break;
	case 30:answer = "тридцать";break;
	case 41:answer = "сорок один";break;
	case 52:answer = "пятьдесять два";break;
	case 63:answer = "шестьдесять три";break;
	case 74:answer = "семьдесять четыре";break;
	case 85:answer = "восемьдесять пять";break;
	case 96:answer = "девяносто шесть";break;
	default:
		break;
	}
	return answer;
}