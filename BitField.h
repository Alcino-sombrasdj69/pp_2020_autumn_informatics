#ifndef BITFIELD_H
#define BITFIELD_H
#include <iostream>
using namespace std;
typedef unsigned int TELEM;

class BitField
{
private:
	int BitLen;
	TELEM* pMem;
	int MemLen;
	// realizacao
	int GetMemindex(const int n) const;
	TELEM GetMemMask(const int n) const;

public:
	BitField(int n);
	BitField(const BitField& bf);
	~BitField();
	// entrando no bit 
	int GetLength(void)const;
	void SetBit(const int n);
	void clearBit(const int n);
	int GetBit(const int n)const;
	// operacao de bits 
	int operator ==(const BitField& bf);
	BitField& operator=(const BitField& bf);
	BitField operator |(const BitField& bf);
	BitField operator &(const BitField& bf);
	BitField operator ~(void);
	friend ostream& operator<<(ostream& ostr, const BitField& bf);
	friend istream& operator>>(istream& istr, BitField& bf);
};
#endif
