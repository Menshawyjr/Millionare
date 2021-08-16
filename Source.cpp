#include <ctime>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string.h>
#include"Question.h"

void play()
{
	vector<int> ChosenNums;
	Question Ques;
	LinkedList l;
	int RandomNum;
	bool NumChosen = false;
	int i = 1;
	srand(time(NULL));
	while (i <= 5)
	{
		RandomNum = (rand() % 5) + 1;
		if (i == 1)
		{
			ChosenNums.push_back(RandomNum);
			NumChosen = false;
		}
		else
		{
			for (int j = 0; j < ChosenNums.size(); j++)
			{
				if (RandomNum == ChosenNums[j])
				{
					NumChosen = true;
					break;
				}
			}
		}
		if (NumChosen) { NumChosen = false; }
		else
		{
			ChosenNums.push_back(RandomNum);
			i++;
		}
	}
	string temp1, temp2, temp3, temp4, temp5, temp6, num, playerAns;
	int quesnum;
	ifstream Fin;
	int counter = 0;
	bool DidHeAnsCorrect = true;
	while (counter < 5 && DidHeAnsCorrect == true)
	{
		Fin.open("Text1.txt", ios::app);
		if (Fin.is_open())
		{

			for (int i = 0; i < 35; i++)
			{
				getline(Fin, num);
				std::istringstream iss(num);
				iss >> quesnum;
				if (quesnum == ChosenNums.back())
				{
					getline(Fin, temp1);
					getline(Fin, temp2);
					getline(Fin, temp3);
					getline(Fin, temp4);
					getline(Fin, temp5);
					getline(Fin, temp6);
					l.Append(temp1, temp2, temp3, temp4, temp5, temp6);
					cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
					cout << "Question Number " << counter + 1 << ":" << endl;
					cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
					l.ShowQuestion();
					cin >> playerAns;
					if (l.CheckAns(playerAns) == true)
					{
						ChosenNums.pop_back();
						counter++;
						DidHeAnsCorrect = true;
					}
					else
					{
						DidHeAnsCorrect = false;
					}
					break;
				}
				else
					continue;
			}

		}
		else
		{
			cout << "Error" << endl;
		}
		Fin.close();
	}
	while (((counter == 5) || (counter == 6) || (counter == 7) || (counter == 8) || (counter == 9)) && DidHeAnsCorrect == true)
	{
		Fin.open("Text2.txt", ios::app);
		if (Fin.is_open())
		{

			for (int i = 0; i < 35; i++)
			{
				getline(Fin, num);
				std::istringstream iss(num);
				iss >> quesnum;
				if (quesnum == ChosenNums.back())
				{
					getline(Fin, temp1);
					getline(Fin, temp2);
					getline(Fin, temp3);
					getline(Fin, temp4);
					getline(Fin, temp5);
					getline(Fin, temp6);
					l.Append(temp1, temp2, temp3, temp4, temp5, temp6);
					cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
					cout << "Question Number " << counter + 1 << ":" << endl;
					cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
					l.ShowQuestion();
					cin >> playerAns;
					if (l.CheckAns(playerAns) == true)
					{
						ChosenNums.pop_back();
						counter++;
						DidHeAnsCorrect = true;
					}
					else
					{
						DidHeAnsCorrect = false;
					}
					break;
				}
				else
					continue;
			}

		}
		else
		{
			cout << "Error" << endl;
		}
		Fin.close();
	}
	while (((counter == 10) || (counter == 11) || (counter == 12) || (counter == 13) || (counter == 14)) && DidHeAnsCorrect == true)
	{
		Fin.open("Text3.txt", ios::app);
		if (Fin.is_open())
		{

			for (int i = 0; i < 35; i++)
			{
				getline(Fin, num);
				std::istringstream iss(num);
				iss >> quesnum;
				if (quesnum == ChosenNums.back())
				{
					getline(Fin, temp1);
					getline(Fin, temp2);
					getline(Fin, temp3);
					getline(Fin, temp4);
					getline(Fin, temp5);
					getline(Fin, temp6);
					l.Append(temp1, temp2, temp3, temp4, temp5, temp6);
					cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
					cout << "Question Number " << counter + 1 << ":" << endl;
					cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
					l.ShowQuestion();
					cin >> playerAns;
					if (l.CheckAns(playerAns) == true)
					{
						ChosenNums.pop_back();
						counter++;
						DidHeAnsCorrect = true;
					}
					else
					{
						DidHeAnsCorrect = false;
					}
					break;
				}
				else
					continue;
			}

		}
		else
		{
			cout << "Error" << endl;
		}
		Fin.close();
	}
}
void main()
{
	cout << "Welcome To The Game" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	play();
	system("pause");
}