#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	std::cout << "Hello Controls!" << endl;

	/*
	 If/else.

	Конструкция выполняет один из двух вариантов кода, в зависимости от условия.

	if(condition)
	{
	....;
	code1;
	....;
	}
	else
	{
	....;
	code2;
	....;
	}
	Condition - условие, по которому делается выбор.

	УСЛОВИЕ - СРАВНЕНИЕ.
	Может быть простым (из одной операции);
	Приостые условия объединяются в ложные, при помощи логических операторов && и ||.

	Если условие вернуло 'true' - то выполняется блок code1, блок code2 игнорируется.
	Если условие вернуло 'false' - то выполняется блок code2 и code1 игнорируется, выполнение переходит сразу к else.

	Блок else и block2 вляются не обязательным элементами конструкции if.
	if(condition)
	{
	 ....;
	 code;
	 ....;
	 }
	 В таком случае код либо выполнится при true, либо не выполнится, при false.

	 Конструцкии if/else можно объединять в цепочку
	 if(condition1)
	 {
	  code1;
	 }
	 else if(condition2)
	 {
	  code2;
	 }
	 else if(conditionN)
	 {
	  codeN;
	 }
	 else ()
	 {
	  Default code;
	 }
	  
	  В такой конструкции, если условие вернуло true, то выполняется часть сответствующая условию. 
	  После чего происходит выход за пределы всей цепочки.
	  Последующее условие даже не будет проверено. 
	  В такой цепочке важен порядок написания вариантов, и при его нарушении некоторые условия никогда не будут даже проверены.


	*/

	int t;
	cout << "Enter outside temperature: "; cin >> t;
	if (t > 0)
	{
		cout << "It's warm outside." << endl;
	}
	else
	{
		cout << "It's cold outside." << endl;
	}


}