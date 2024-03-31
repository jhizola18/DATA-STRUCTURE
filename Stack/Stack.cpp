#include<iostream>
//STACK IMPLEMENTATION
//push_back
//pop_back
#define MAX_SIZE 100
int arr[MAX_SIZE];

int tops = -1;

bool empty()
{
    if(tops != -1)
    {
        return false;
    }
    return true;
}


int top()
{
    if(empty())
    {
        std::cout << "EMPTY STACK";
        return 0;
    }else{
        return arr[tops];
    }
}

int size()
{
    int sizes = tops + 1;
    return sizes;

}


void push_back(int num)
{
    arr[++tops] = num;
};

void pop_back()
{
    if(empty())
    {
        std::cout << " EMPTY STACK ";
    }else{
        arr[tops] = arr[tops - 1];
        tops--;
    }
};

//Tester
int main()
{
    for(int i = 0; i < size(); ++i)
    {
        std::cout << arr[i] << " ";
    };

    std::cout << "Top Element is-> " << top();
    return 0;
}


