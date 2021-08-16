#include <string>
#include <vector>
#include <random>
#include <fstream>
#include <iomanip> 
#include <string.h>
#include <iostream>

using namespace std;


class Question
{
public:
	Question();
	string Guess;
	Question * next;
	string answer_1;
	string answer_2;
	string answer_3;
	string answer_4;
	int Question_Score;
	string Question_Text;
	string Correct_Answer;
	Question(string q, string a1, string a2, string a3, string a4, string ca,int qs);
};

class LinkedList
{
public:
	int size;
	int Money;
	LinkedList();
	Question * head;
	Question * tail;
	void ShowQuestion();
	bool CheckAns(string PlayerAns);
	void Append(string q, string a1, string a2, string a3, string a4, string ca,int qs);
};