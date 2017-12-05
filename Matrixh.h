#pragma once
#include <iostream>
using namespace std;
//

class Matrixh
{
private :
	int ** matrix;
	int width;
	int lenght;

	void setwidth(int);        
	void setlenght(int);       

public:
	Matrixh();
	Matrixh(int  ,int );
	Matrixh(const Matrixh&);        //copy constractor
	~Matrixh(void);

	int getwidth()const{return width;}
	int getlenght()const{return lenght;}

	

	Matrixh operator + (const Matrixh&)const;
	Matrixh& operator - (const Matrixh&)const;
	Matrixh& operator * (const Matrixh&)const;
	Matrixh& operator * (const int&)const;
	void operator =(const Matrixh&);
	int* operator [](const int)const;

	friend ostream& operator << (ostream &out,const Matrixh&);
	friend Matrixh& operator * (const int & B,const Matrixh & mul);
	friend Matrixh& operator - (const Matrixh & neg);




};

