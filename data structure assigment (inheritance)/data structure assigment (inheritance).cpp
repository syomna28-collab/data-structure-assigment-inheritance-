#include <iostream>
#include <string> 
using namespace std;
class creature    // el parent class
{
private:
	string category;
	int age;
public:
	creature(string c, int a)    // el constructor
	{
		category = c;
		age = a;
	}
	void getcategory()
	{
		cout<<"category :"<<category<<endl;
	}
	void getage()
	{
		cout << "age :" << age << endl;;
	}

};
// el child class human elle by inherit mn el creature

class human : public creature  
{
private :
	string gender;
public :
	human(string g , int a) :creature ("human" ,a)
	{
		gender = g;
	}
	void getgender()
	{
		cout << "gender :" << gender<<endl;
	}
	void think()
	{
		cout << "human is thinking" << endl;
	}
};

// el child class animal elle by inherit mn el creature 

class animal : public creature   //el inheritance 
{
private :
	bool tame;
public:
	animal(int a, bool t) : creature("animal", a)
	{
		tame = t;
	}
	void settame(bool t)
	{
		tame = t;
	}
	bool istame()
	{
		return tame;
	}
};

// el policman elle by inherit mn el human 

class policman : public human
{
private :
	string rank;
public :
	policman(int a, string g ,string r) : human(g, a)
	{
		rank = r;
	}
	void getrank()
	{
		cout << "rank :" << rank << endl;
	}
	void servecitizen()
	{
		cout << "policman serve citizen" << endl;
	}

};
//citizen inherit mn el human class
class citizen :public human
{
public :
	citizen(string g ,int a) :human(g,a)
	{

	}
	void helppoliceman()
	{
		cout << "citizen help policeman" << endl;
	}
};
// lion inherit mn el animal 
class lion : public animal
{
public :
	lion(int a ,bool t) :animal (a,t)
	{
	}
	void eat()
	{
		cout << "lion is eating" << endl;
	}
	
};
// horse inherit mn el animal bardo 
class horse :public animal
{
private :
	double height;
public:
	horse(int a ,bool t ,double h) :animal(a,t)
	{
		height = h;
	}
	double setheight(double h)
	{
		height = h;
	}
	void getheight()
	{
		cout << "heght :" << height << endl;
	}
	void race()
	{
		cout << "horse is racing " << endl;
	}

};

int main()
{
	human h("male", 10);
	h.getcategory();
	h.getage();
	h.getgender();
	h.think();

}

