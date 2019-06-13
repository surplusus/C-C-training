#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int Phase1(int n1, int n2)
{
	int sum = n1 + n2;
	if (2 == sum || 3 == sum || 12 == sum)
	{
		cout << "Crab!!" << "\t You Lose!" << endl;
		return 0;
	}
	else if (7 == sum || 11 == sum)
	{
		cout << "Natural!!" << "\t You Win!" << endl;
		return 0;
	}
	else
	{
		cout << "다시 게임 시작합니다." << endl;
		return sum;
	}
}
int Phase2(int n1, int n2, int numBuffer)
{
	int sum = n1 + n2;
	if (7 == sum)
	{
		cout << "Again7?!?!" << "\t You Lose!" << endl;
		return 0;
	}
	else if (numBuffer == sum)
	{
		cout << "WOWl!!" << "\t You Win!" << endl;
		return 0;
	}
	else
	{
		cout << "다시 게임 시작합니다." << endl;
		return sum;
	}
}
void Simulate1000time()
{
	// write down count
	float cntSimul = 0;
	int numBuffer = 0;
	srand((unsigned int)time(NULL));
	// roll the dices
	for (int i = 0; i < 1000; i++)
	{
		int dice1 = rand() % 6 + 1;
		int dice2 = rand() % 6 + 1;
		int sum = dice1 + dice2;
		if (7 == sum || 11 == sum)
		{
			cntSimul++;
			cout << "Win!  ";
			numBuffer = 0;
		}
		else if (2 == sum || 3 == sum || 12 == sum)
		{
			cout << "Lose!  ";
			numBuffer = 0;
		}
		else
			numBuffer = sum;
		while (numBuffer) // 수가 있으면 계속
		{
			// roll the dices
			dice1 = rand() % 6 + 1;
			dice2 = rand() % 6 + 1;
			sum = dice1 + dice2;
			//play
			if (numBuffer == sum)
			{
				cntSimul++;
				cout << "Win!  ";
				break;
			}
			else if (7 == sum)
			{
				cout << "Lose!  ";

				break;
			}
			else
				numBuffer = sum;
		}

	}
	float nPro = cntSimul / 10;
	printf("확률 : %.5f%%\n", nPro);
}
int main()
{

	srand((unsigned int)time(NULL));
	// roll the dices
	cout << "주사위를 굴리세요(Enter)";
	cin.get();
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	cout << "1st Dice : " << dice1 << "\t" << "2nd Dice : " << dice2 << endl<<endl;
	
	//play
	int numBuffer = Phase1(dice1, dice2);
	while (numBuffer) // 수가 있으면 계속
	{
		// roll the dices
		cout << "주사위를 굴리세요(Enter)";
		cin.get();
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		cout << "1st Dice : " << dice1 << "\t" << "2nd Dice : " << dice2 << endl<<endl;
		//play
		numBuffer = Phase2(dice1, dice2, numBuffer);
	}
	//1000번 돌려서 확률 계산
	Simulate1000time();
	return 0;
}