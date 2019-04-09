//Lifeboard.h

const int SIZE = 40;
const char BLANK = ' ';

class Life
{
  public:
  Life();
   void display();
   void add(int, int); 
   void remove(int, int); 
   void switchboard(); 
   void act();   
   

  private:
   char board[SIZE+1][SIZE+1];
   char board2[SIZE+1][SIZE+1];
};






