// cpp_primer_5th
// exercise9_4_fs.cpp
#include <iostream>
#include <vector>

bool find(std::vector<int>&, int);
int main()
{
    std::vector<int> myVec = {1, 2, 3, 4, 5, 6};
    int isFind = find(myVec, 2);

    std::cout << isFind << std::endl;

    return 0;
}

bool find(std::vector<int>& vec, int val)
{
    std::vector<int>::iterator iter;
    for (iter = vec.begin(); iter != vec.end(); ++iter)
    {
        if (*iter == val)
        {
            return true;
        }
    }
    return false;
}