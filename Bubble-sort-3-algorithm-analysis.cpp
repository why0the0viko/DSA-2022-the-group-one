#include <iostream>
#include <stdio.h>
#include <chrono>
#include <vector>

void bubble_sort(std :: vector<int> &v);
void print_vector(std :: vector<int> &v);
void swap();
int main()
{   
    std :: vector<int> values;

    values.push_back(6);
    values.push_back(2);
    values.push_back(1);
    values.push_back(4);
    values.push_back(3);
    values.push_back(5);

    std :: chrono :: high_resolution_clock::time_point start = std :: chrono :: high_resolution_clock::now();
    bubble_sort(values);
    std :: chrono :: high_resolution_clock::time_point stop = std :: chrono :: high_resolution_clock::now();

    std :: chrono :: duration<double> time_span = std :: chrono :: duration_cast<std :: chrono :: duration<double>>(stop - start);

    std::cout << "It took me " << time_span.count() << " seconds.";




    
    return 0;
}
void bubble_sort(std :: vector<int> &v)
{
    int total = 0;
    int total_2 = 0;
       
    for (int i = 0; i < v.size()-1; ++i)
    {
        int changed = 0;
        for (int j = 0; j < v.size()-1-i; ++j)
        {       
            ++total_2;
            if (v.at(j) > v.at(j+1))
            {
                changed = 1;
                std :: swap(v.at(j), v.at(j+1));

                ++total;

            }
        }
        if (changed == 0)
        {
            break;
        } 
    }
    std :: cout << " total swaps " << total << std :: endl;
    std :: cout << "total if checks " << total_2 << std :: endl;

}
void print_vector(std :: vector<int> &v)
{
    std :: vector<int> :: iterator it;
    for(it = v.begin(); it != v.end(); ++it)
	{
		std :: cout << *it << " ";
	}
	std :: cout << std :: endl;
}
