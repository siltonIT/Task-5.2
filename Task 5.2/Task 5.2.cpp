#include "Main.h"

int main()
{
    const int SIZE = 6;
    float seq[SIZE];

    int fill_type; 
    wrong_fill_type: cin >> fill_type;

    switch ((FillType)fill_type)
    {
        case FillType::Random:
            fill_seq_rand(seq, SIZE);
            break;

        case FillType::Upward:
            fill_seq_upward(seq, SIZE);
            break;

        case FillType::Downward:
            fill_seq_downward(seq, SIZE);
            break;

        default:
            goto wrong_fill_type;
            break;
    }
     

    int sort_type; 
    wrong_sort_type: cin >> sort_type;

    switch ((SortType)sort_type)
    {
        case SortType::Choice:
            sort_choice(seq, SIZE);
            break;

        case SortType::Swap:
            sort_swap(seq, SIZE);

        default:
            goto wrong_sort_type;
            break;
    }
    
    for (auto el : seq)
    {
        cout << el << '\t';
    }
}