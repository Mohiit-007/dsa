    #include<iostream>
    using namespace std;

    class Queue{
        int *arr;
        int n;
        int rear;
        int front;
        public:

        Queue(int size){
            this->n = size;
            arr = new int[size];
            rear = -1;
            front = -1;
        }

        void push(int value){
            if(rear == n - 1){
                cout<<"overflow"<<endl;
            }
            else if(rear == -1 && front == -1){
                rear++;
                front++;
                arr[front] = value;
            }
            else{
                rear++;
                arr[rear] = value;
            }
        }

        void pop(){
            if(rear == -1 && front == -1){
                cout<<"underflow"<<endl;
            }
            else if(rear == front){
                arr[rear] = -1;
                rear = -1;
                front = -1;
            }
            else{
                arr[front] = -1;
                front++;
            }
        }
        bool isempty(){
            if(front == -1 && rear == -1){
                return true;
            }
            else 
            return false;
        }
        int getsize(){
            if(rear == -1 && front == -1){
                return 0;
            }
            return rear - front + 1;
        }
        int getfront(){
            if(front == -1){
                cout<<"empty"<<endl;
                return -1;
            }
            return arr[front];
        }
        int getback(){
            if(rear == -1){
                cout<<"empty"<<endl;
                return -1;
            }
            return arr[rear];
        }

        void print(){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        ~Queue() {
            delete[] arr;
        }

    };

    int main(){
        int n = 6;
        Queue q(n);
        q.push(10);
        q.push(20);
        q.push(30);
        q.push(40);
        q.print();
        q.pop();
        cout<<q.getsize()<<endl;
        cout<<q.getfront()<<endl;
        cout<<q.getback()<<endl;
        q.print();
        q.pop();
        cout<<q.getsize()<<endl;
        cout<<q.getfront()<<endl;
        cout<<q.getback()<<endl;
        q.print();
        q.push(50);
        q.push(60);
        q.push(70);
        q.print();
        cout<<q.isempty()<<endl;
        q.pop();
        q.pop();
        q.pop();
        q.pop();
        q.pop();
        q.print();
        cout<<q.getsize()<<endl;
        cout<<q.isempty()<<endl;


    }