Association

- Relation between two or more classes

Association Types
1- Simple Association
2- Aggregation
3- Composition

e.g Emp works for Company

e.g Vehicle realizes in the form Bike, Car and Truck
   Wardon takes challan of vehicle
  (see class diagram of board)


class Vehicle{
public :
virtual void challen()=0;
};

class Car:public Vehicle{
public:
void challen(){cout<<"Car Challan.."<<endl;}

};
class Bike:public Vehicle{
public:
void challen(){cout<<"Bike Challan.."<<endl;}

};
class Truck:public Vehicle{
public:
void challen(){cout<<"Truck Challan.."<<endl;}
};

class Wardon{

public :
  void takeChallan(Vehicle *p){
      p->challen();

} 

};
void main(){
Wardon w1,w2;
Car c1,c2;
Truck t1,t2;
Bike b1,b2;
w1.takeChallan(&b1);
w2.takeChallan(&c1);

}
..................................................




