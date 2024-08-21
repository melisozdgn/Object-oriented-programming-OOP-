#include <iostream>
using namespace std;

// Abstract class for Instrument
class Instrument{
  protected:
  string name;
  public:
  Instrument(string _name) : name(_name){}
  // Pure virtual function
  virtual void play(string piece) = 0;
};

class Orchestra{
  // The array to store instruments
  Instrument* instruments[5];
  static int x;
  
  public:
  void addInstrument(Instrument* inst);
  void playPiece(string piece);

};
int Orchestra::x=0;

void Orchestra::addInstrument(Instrument* inst){
  instruments[x]= inst;
  x++;
}
void Orchestra::playPiece(string piece){
  for(int i = 0;i < x; i++){
    Instrument* inst = instruments[i];
    inst->play(piece);
  }

}
// Derived class
class Violin: public Instrument{
  public:
  Violin():Instrument("Violin"){}
  void play(string piece);
};
void Violin::play(string piece){
  cout<<"Plays "<< name <<endl;

}

// Derived class
class Piano: public Instrument{
  public:
  
  Piano():Instrument("Piano"){}
  void play(string piece);
};
void Piano::play(string piece){
  cout<<"Plays "<< name <<endl;
}

// Derived class
class Guitar: public Instrument{
  public:
  Guitar():Instrument("Guitar"){}
  void play(string piece);
};
void Guitar::play(string piece){
  cout<<"Playes "<< name <<endl;
}



int main(){
  
  Orchestra orchestra;
  Violin violin;
  Piano piano;
  Guitar guitar;
   // Add instruments to the orchestra
  orchestra.addInstrument(&violin);
  orchestra.addInstrument(&piano);
  orchestra.addInstrument(&guitar);
  orchestra.playPiece("Für Elise");
  return 0;
}









