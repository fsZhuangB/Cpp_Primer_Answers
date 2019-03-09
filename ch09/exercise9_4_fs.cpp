// cpp_primer_5th
// exercise9_4_fs.cpp
#include <iostream>
#include <vector>

bool find(std::vector<int>::iterator, std::vector<int>::iterator, int);

int main()
{
    std::vector<int> myVec = {1, 2, 3, 4, 5, 6};
    std::vector<int>::iterator beg = myVec.begin();
    std::vector<int>::iterator end = myVec.end();
    
    int isFind = find(beg, end, 2);

    std::cout << isFind << std::endl;
    return 0;
}

bool find(std::vector<int>::iterator begin, std::vector<int>::iterator end, int val)
{
    while (begin != end)
    {
        if (*begin == val)
        {
            return true;
        }
        begin++;    
    }
    return false;
}