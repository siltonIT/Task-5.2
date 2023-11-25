#include "Sort.h"

template <class Type>
Type sort_choice(Type seq, const int SIZE)
{
	int delta = 0;
	int subseq_size = SIZE;
	int max_val;
	int ind_max;
	int amount_comp = 0;
	int amount_swaps = 0;

	for (int i = 0; i < subseq_size - delta; ++i)
	{
		max_val = seq[i];

		for (int n = 0; n < subseq_size - delta; ++n)
		{
			if (seq[n] >= max_val)
			{
				max_val = seq[n];
				ind_max = n;
			}
			++amount_comp;
		}

		++delta;
		seq[ind_max] = seq[subseq_size - delta];
		seq[subseq_size - delta] = max_val;
		++amount_swaps;
	}

	cout << amount_comp << endl << amount_swaps << endl;

	return seq;
}

template <class Type>
Type sort_swap(Type seq, const int SIZE)
{
	int swap;
	int amount_comp = 0;
	int amount_swaps = 0;

	for (int i = 0; i < SIZE; ++i)
	{
		for (int n = 0; n < SIZE; ++n)
		{
			if (seq[i] < seq[n])
			{
				swap = seq[n];
				seq[n] = seq[i];
				seq[i] = swap;
				++amount_swaps;
			}

			++amount_comp;
		}
	}

	cout << amount_comp << endl << amount_swaps << endl;

	return seq;
}