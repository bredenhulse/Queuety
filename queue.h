//Stack class implementation

using namespace std;

class queue{
  private: //Member variables
    int size; //Size of stack
    int * a; //Pointer to dynamically allocate array
    bool empty;
    void ppush(int x){
      reservepush(size + 1);
      a[size - 1] = x;
    }
    int ppop(){
      //get last index
      int last = a[size - 1];
      reservepop(size - 1);
      return last;
    }
    //Reserve for Push
    void reservepush(int s){
      int * bigger, *temp;
      bigger = new int [s];
      for(int i = 0; i < size; i++){
        bigger[i] = a[i];
      }
      temp = a;
      a = bigger;
      bigger = temp;
      size = s;
      if(size == 0){
        empty = true;
      }
      else{
        empty = false;
      }
    }
    // Reserve for Pop
    void reservepop(int s){
      int * bigger, *temp;
      bigger = new int [s];
      for(int i = 0; i < size; i++){
        bigger[i] = a[i];
      }
      temp = a;
      a = bigger;
      bigger = temp;
      size = s;
      if(size == 0){
        empty = true;
      }
      else{
        empty = false;
      }
    }
  public:
    //Default constructor
    queue(){
      size = 0;
      a = new int [size];
      empty = true;
    }
    void push(int num){
      ppush(num);
    }
    int pop(){
      return ppop();
    }
    bool isEmpty(){
      return empty;
    }
};