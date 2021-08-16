#include "Question.h"

Question::Question()
{
	Question_Text = answer_1 = answer_2 = answer_3 = answer_4 = Correct_Answer = "";
	Question_Score = 0;
	next = NULL;
}

Question::Question(string q, string a1, string a2, string a3, string a4, string ca,int t)
{
	Question_Text = q;
	answer_1 = a1;
	answer_2 = a2;
	answer_3 = a3;
	answer_4 = a4;
	Correct_Answer = ca;
	Question_Score = t;
}

LinkedList::LinkedList()
{
	head = tail = NULL;
	size = 0;
	Money = 0;
}

void LinkedList::Append(string q, string a1, string a2, string a3, string a4, string ca,int t)
{
	Question * temp = new Question(q, a1, a2, a3, a4, ca,t);
	if (head == NULL)
	{
		if (size == 0)
		{
			head = tail = temp;
		}
	}
	else
	{
		tail->next = temp;
		tail = tail->next;
	}
	size++;
}

void LinkedList::ShowQuestion()
{
	cout << tail->Question_Text << endl;
	cout << tail->answer_1 << endl;
	cout << tail->answer_2 << endl;
	cout << tail->answer_3 << endl;
	cout << tail->answer_4 << endl;
}

bool LinkedList::CheckAns(string PlayerAns)
{
	if (PlayerAns == tail->Correct_Answer)
	{
		cout << "Correct Answer , Good Job" << endl;//put the counter of the money here 
		Money = Money + Question_Score;
		cout << "Your Balance Is   "<< Money <<"  Thousand"<< endl;
		return true;
	}
	else
	{
		cout << "Sorry , Wrong Answer . The Correct Answer Is  -" << tail->Correct_Answer << endl;////put the counter of the money here
		Money = Money;
		cout << "Your Balance Is   " << Money << "  Thousand" << endl;
		return false;
	}
}