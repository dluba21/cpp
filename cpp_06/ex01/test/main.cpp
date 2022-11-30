#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;

class Cat
{
public:
	virtual ~Cat() { sayGoodbye(); }
	void askForFood() const
	{
		speak();
		eat();
	}
	virtual void speak() const { cout << "Meow! "; }
	virtual void eat() const { cout << "*champing*" << endl; }
	virtual void sayGoodbye() const { cout << "Meow-meow!" << endl; }
};

class CheshireCat : public Cat
{
public:
	virtual void speak() const { cout << "WTF?! Where\'s my milk? =) "; }
	virtual void sayGoodbye() const { cout << "Bye-bye! (:" << endl; }
};

int main()
{
	Cat * cats[] = { new Cat, new CheshireCat };

	cout << "Ordinary Cat: "; cats[0]->askForFood();
	cout << "Cheshire Cat: "; cats[1]->askForFood();

	delete cats[1];
	delete cats[0]; 
	return EXIT_SUCCESS;
}

//#include <iostream>
//
//struct A
//{
//	A():a(0), b(0){}
//  int a;
//  int b;
//};
//struct B : A
//{
//	B():g(0){}
//	int g;
//};
//struct D{
//	D():f(0){}
//	float f;
//};
//struct C : A, D{
//	C():d(0){}
//	double d;
//};
//
////int main(){
//////	C* pC = new C;
//////	A* pA = pC;
//////	D* pD = static_cast<D*> (pC);
//////	std::cout << pC << " " << pD << " " << pA << std::endl;
////////	void *kek;
//////////	std::cout << kek << kek + 1 <<std::endl;
////	///int main(){
////	C* pC = new C;
////	 A* pA = static_cast<A*>(pC);
////	 D* pD = static_cast<D*> (pC);
////	 B* pB = static_cast<B*> (pA);
////	 std::cout << &(pB->g) << " " << pD << " " << pA << std::endl;
////	 pB->g = 12312421512512412;
////	 std::cout << pC->a << " " << pC->b << " " << pC->f << std::endl;
////	return 0;
////
////	return 0;
////}
//
//int main(){
//	using namespace std;
//	unsigned short num = numeric_limits<unsigned short>::max(); // #include <limits>
//	short num2 = num;
//	cout << "unsigned val = " << num << " signed val = " << num2 << endl;
//	// Prints: "unsigned val = 65535 signed val = -1"
//
//	// Go the other way.
//	num2 = -1;
//	num = num2;
//	cout << "unsigned val = " << num << " signed val = " << num2 << endl;
//	// Prints: "unsigned val = 65535 signed val = -1"}
//}
