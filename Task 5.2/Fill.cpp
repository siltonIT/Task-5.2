#include "Fill.h"

template<class Type>
Type fill_seq_rand(Type seq, const int SIZE)
{
	const int BASE = 100;

	for (int i = 0; i < SIZE; ++i)
	{
		seq[i] = rand() % 100;
	}

	return seq;
}

template<class Type>
Type fill_seq_upward(Type seq, const int SIZE)
{
	const int BASE = 100;

	for (int i = 0; i < SIZE; ++i)
	{
		seq[i] = i;
	}

	return seq;
}

template<class Type>
Type fill_seq_downward(Type seq, const int SIZE)
{
	const int BASE = 100;
	int counter = SIZE;

	for (int i = 0; i < SIZE; ++i)
	{
		seq[i] = counter;
		--counter;
	}

	return seq;
}