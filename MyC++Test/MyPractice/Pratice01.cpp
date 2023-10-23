
# include <format>
# include <iostream>


using namespace std;

class OrangeBox
{
public:

	OrangeBox();
	~OrangeBox();

	int input;

	void Add(int AddOrange);
	void del(int delOrange);
	void mul(int multiOrange);
	void div(int divOrange);
	void Empty();
	int GetTotal()
	{
		return total;
	}
	

private:

	int total;
	

};



void OrangeBox::Add(int AddOrange)
{
	total += AddOrange;
	if (AddOrange > 100) total = 100;
}

void OrangeBox::del(int delOrange)
{
	total -= delOrange;
	if (total < 0) Empty();
	
}

void OrangeBox::mul(int multiOrange)
{
	total = multiOrange*50;
	if (multiOrange > 100) total = 500;
}

void OrangeBox::div(int divOrange)
{
	total = divOrange / 50;
	if (total < 0) Empty();
}

void OrangeBox::Empty()
{
	total = 0;
	
}

int main()
{
	cout << "1. Practice01"
		<< "2. Example02"
		<< "3. Example03"
		<< "4. div" << endl;



	OrangeBox myOrageBox;
	
	std::cin >> myOrageBox.input;


	myOrageBox.Empty();

	cout << ("���� ���� ������ : %d��\n", myOrageBox.GetTotal()) << endl;
	
	myOrageBox.Add(5);//���ϱ�

	cout << ("���� ���� ������ : %d��\n", myOrageBox.GetTotal()) << endl;
	myOrageBox.del(2);//����

	cout << ("���� ���� ������ : %d��\n", myOrageBox.GetTotal()) << endl;
	myOrageBox.mul(2);

	cout << ("���� ���� ������ : %d��\n", myOrageBox.GetTotal()) << endl;

	myOrageBox.div(1);
	
	cout << ("���� ���� ������ : %d��\n",myOrageBox.GetTotal()) << endl;
	
	return 0;

}

OrangeBox::OrangeBox()
{
	total = 0;
	input = 0;
}

OrangeBox::~OrangeBox()
{
	cout << "������ ���� ������Ʈ �ӹ��Ϸ�\n" << endl;

}