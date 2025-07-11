template <typename Type>
struct LinkedList{
    Type Value;
    LinkedList* Next;
    LinkedList(Type val,LinkedList* next = nullptr):Value(val),Next(next) {};
    ~LinkedList(){
        delete Next;
    }
};