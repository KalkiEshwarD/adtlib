#ifndef ADT_QUEUE_H
#define ADT_QUEUE_H


void queue_error()
{
    std::cout << "FATAL ERROR!" << std::endl;
}



template <typename T> class Queue
{
    public:
        T* array;
        int max_size;
        int front;
        int rear;

    Queue(int max_size)
    {
        this->max_size = max_size;
        this->front = -1;
        this->rear = -1;
        T* arr = new T[max_size];
        this->array = arr;
    }

    int is_full()
    {
        if (rear == max_size -1) {
            return 1;
        } else {
            return 0;
        }
    }

    int is_empty()
    {
        if (front == -1) {
            return 1;
        } else {
            return 0;
        }
    }

    void enqueue(T item)
    {
        if (is_full() != 1) {
            this->rear = this->rear + 1;
            array[this->rear] = item;
            if (this->front == -1) {
                this->front = 0;
            }
        }
    }

    T dequeue()
    {
        if (is_empty() == 0) {
            T item = array[front];
            for (int i = 1; i <= rear; i++) {
                array[i - 1] = array[i];
            }
            array[rear] = '\0';
            rear -= 1;

            if (rear == -1) {
                front = -1;
            }

            return item;
        } else {
            queue_error();
            return '\0';
        }
    }
};

#endif