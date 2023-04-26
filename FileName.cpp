#include <iostream>
#include <string>
using namespace std;

class People//�����ۺ��ຯ�����
{
public:
	People();//������ʼ��ɫ
	
	void setName(string name);//���ó�ʼ����
	string getName();//������������

	float getHealth();//���س�ʼ����ֵ100

	void setAttack(float attack);//���ó�ʼ������
	float getAttack();//���س�ʼ������

	void getPeopleID(string name,float attack);//���������������ʼ����ֵ����ʼ��������

	void TakeDamage(float damage);//����ָ����HealthΪ0ʱ��ʾ����

private:
	string Name;
    float Health;

protected:
	float Attack;//���﹥����

};

class Caday :public People//����1��Caday
{
public:
	Caday(string name, float attack);
	
};

class Heavenly_Dream :public People//���������������
{
public:
	Heavenly_Dream(string name, float attack);
};

class Call_me_Ji_Bochang :public People//�����������Ҽ�����
{
public:
	Call_me_Ji_Bochang(string name, float attack);
};

//main function

int main()
{
	/*string PlayerName;
	float PlayerAttack;*/

	/*cout << "������Ľ�ɫ����";
	cin >> PlayerName;
	cout << "������Ĺ�������";
	cin >> PlayerAttack;*/

	/*People people;
	people.getPeopleID(PlayerName,PlayerAttack);
	cout << endl;*/

	Caday caday("Caday", 190.f);
	cout << "-----------------------" << endl;
	Heavenly_Dream("��������",180.f);
	cout << "-----------------------" << endl;
	Call_me_Ji_Bochang("���Ҽ�����",190.f);

}

//People �ຯ��

People::People()
{
	Health = 100.f;
	cout << "You created a role!" << endl;
}

void People::setName(string name)
{
	Name=name;
}

string People::getName()
{
	return Name;
}

float People::getHealth()
{
	return Health;
}

void People::setAttack(float attack)
{
	Attack = attack;
}

float People::getAttack()
{
	return Attack;
}

void People::getPeopleID(string name,float attack)
{
	setName(name);
	setAttack(attack);
	cout << "Name:" << getName() << endl;
	cout << "Health:" << getHealth() << endl;
	cout << "Attack:" << getAttack() << endl;
}

void People::TakeDamage(float damage)
{
	float Total;
	Total = Health - damage;
	if (Total <= 0)
	{
		cout << getName() << "has died!" << endl;
	}
	else
	{
		Health -= damage;
		cout << "Health:" << getHealth() << endl;
	}
}

//class Caday����

Caday::Caday(string name, float attack)
{
	getPeopleID(name, attack);
}

//class  Heavenly_Dream����

Heavenly_Dream::Heavenly_Dream(string name, float attack)
{
	getPeopleID(name, attack);
}

//class Call_me_Ji_Bochang����

Call_me_Ji_Bochang::Call_me_Ji_Bochang(string name, float attack)
{
	getPeopleID(name, attack);
}