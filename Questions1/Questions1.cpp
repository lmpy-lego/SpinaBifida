// Questions1.cpp : The application, the whole application, and nothing but the application.
//

#include "stdafx.h"
using namespace std;

bool query(int numofoptions, int right)
{
	int entry;
	try
	{
	beginning:
		cout << "Enter 1-" << numofoptions << " below." << endl;
		cout << "|:";
		cin >> entry;
		if (entry <= numofoptions && entry > 0)
		{
			if (entry == right)
			{
				cout << "Correct." << endl;
				return true;
			}
			else
			{
				cout << "Sorry, but that wasn't right.  The correct option was: " << right << endl;
				return false;
			}
		}
		else
		{
			cout << "That isn't a valid option.  Try again." << endl;
			goto beginning;
		}
	}
	catch (exception& e)
	{
		cout << "An exception occurred. >> " << e.what() << endl;
	}
}



int _tmain(int argc, _TCHAR* argv[])
{
	char something;
	int counter = 1;
	while (counter <10)
	{
		int opt = 0;
		switch (counter)
		{
		case 1:
			opt = 3;
			cout << "What is the worst type of Spina Bifida?" << endl << "1. Occulta" << endl << "2. Myelomeningocele" << endl << "3. Meningocele" << endl;
			query(opt, opt - 1);
			break;
		case 2:
			opt = 2;
			cout << "People with Spina Bifida rarely live beyond 2 years of age." << endl << "1. True" << endl << "2. False" << endl;
			query(opt, opt);
			break;
		case 3:
			opt = 2;
			cout << "Spina Bifida is somewhat preventable." << endl << "1. True" << endl << "2. False" << endl;
			query(opt, opt - 1);
			break;
		case 4:
			opt = 4;
			cout << "Which type of Spina Bifida is hidden?" << endl << "1. Meningocele" << endl << "2. Myelomeningocele" << endl << "3. Occulta" << endl << "4. Closed Neural Tube Defects" << endl;
			query(opt, opt - 1);
			break;
		case 5:
			opt = 2;
			cout << "Spina Bifida has a connection to the gene MTHFR." << endl << "1. True" << endl << "2. False" << endl;
			query(opt, opt - 1);
			break;
		case 6:
			opt = 2;
			cout << "Spina Bifida is only influenced by one gene." << endl << "1. True" << endl << "2. False" << endl;
			query(opt, opt);
			break;
		case 7:
			opt = 2;
			cout << "A cure for Spina Bifida has been developed in the last few years." << endl << "1. True" << endl << "2. False" << endl;
			query(opt, opt);
			break;
		case 8:
			opt = 2;
			cout << "Most cases of Spina Bifida can be surgically fixed." << endl << "1. True" << endl << "2. False" << endl;
			query(opt, opt - 1);
			break;
		case 9:
			opt = 2;
			cout << "Folic acid supplements can help prevent Spina Bifida." << endl << "1. True" << endl << "2. False" << endl;
			query(opt, opt - 1);
			break;
		case 10:
			opt = 2;
			cout << "Symptoms of Spina Bifida vary widely from case to case." << endl << "1. True" << endl << "2. False" << endl;
			query(opt, opt - 1);
			break;
		default:
			cout << "Oops.  Something broke.  Oh well." << endl;
			break;
		}
		counter = counter + 1;
	}
	cout << "Press any key and then RETURN to continue." << endl;
	cin >> something;
	return 0;
}



