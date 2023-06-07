#ifndef ADT_STACK_H
#define ADT_STACK_H

void stack_error()
{
    std::cout << "FATAL ERROR!" << std::endl;
}

template <typename T> class Stack
{
    public:
        int top;
        T* arr;
        int max_size;

    Stack(int max_size)
    {
        this->max_size = max_size;
        T* arr = new T[max_size];
        this->arr = arr;
        this->top = -1;
    }

    int push(T item)
    {
        if (stack_is_full() != 1) {
            this->top = this->top + 1;
            this->arr[this->top] = item;

            return 0;
        } else {
            return -1;
        }
    }

    T pop()
    {
        if (stack_is_empty() != 1) {
            T item = this->arr[this->top];
            this->arr[this->top] = '\0';
            this->top = this->top - 1;
            
            return item;
        } else {
            stack_error();
            return '\0';
        }
        
    }

    T get_top()
    {
        return this->arr[this->top];
    }

    int stack_is_full()
    {
        if (top == max_size -1) {
            return 1;
        } else {
            return 0;
        }
    }

    int stack_is_empty()
    {
        if (top == -1) {
            return 1;
        } else {
            return 0;
        }
    }
};

#endif