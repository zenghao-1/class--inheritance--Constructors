#include <iostream>
#include <string>
using namespace std;

class People//人物综合类函数输出
{
public:
	People();//创建初始角色
	
	void setName(string name);//设置初始姓名
	string getName();//返回人物姓名

	float getHealth();//返回初始生命值100

	void setAttack(float attack);//设置初始攻击力
	float getAttack();//返回初始攻击力

	void getPeopleID(string name,float attack);//输出人物姓名，初始生命值，初始攻击力。

	void TakeDamage(float damage);//受伤指数，Health为0时显示死亡

private:
	string Name;
    float Health;

protected:
	float Attack;//人物攻击力

};

class Caday :public People//人物1：Caday
{
public:
	Caday(string name, float attack);
	
};

class Heavenly_Dream :public People//人物二：天幽梦琴
{
public:
	Heavenly_Dream(string name, float attack);
};

class Call_me_Ji_Bochang :public People//人物三：叫我季伯常
{
public:
	Call_me_Ji_Bochang(string name, float attack);
};

//main function

int main()
{
	/*string PlayerName;
	float PlayerAttack;*/

	/*cout << "设置你的角色名：";
	cin >> PlayerName;
	cout << "设置你的攻击力：";
	cin >> PlayerAttack;*/

	/*People people;
	people.getPeopleID(PlayerName,PlayerAttack);
	cout << endl;*/

	Caday caday("Caday", 190.f);
	cout << "-----------------------" << endl;
	Heavenly_Dream("天梦幽琴",180.f);
	cout << "-----------------------" << endl;
	Call_me_Ji_Bochang("叫我季伯常",190.f);

}

//People 类函数

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

//class Caday设置

Caday::Caday(string name, float attack)
{
	getPeopleID(name, attack);
}

//class  Heavenly_Dream设置

Heavenly_Dream::Heavenly_Dream(string name, float attack)
{
	getPeopleID(name, attack);
}

//class Call_me_Ji_Bochang设置

Call_me_Ji_Bochang::Call_me_Ji_Bochang(string name, float attack)
{
	getPeopleID(name, attack);
}