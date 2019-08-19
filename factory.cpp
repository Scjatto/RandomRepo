#include<iostream>

enum ShapeType{
    ST_Circle, ST_Square, ST_Rectangle, ST_Rohombus
};

class Shape{
    public:
        virtual void printShape() = 0;
        static Shape* Create(ShapeType type); // The method Create is declared
};

class Circle :public Shape{
    public:
        void printShape(){
            std::cout<<"This is a Circle\n";
        }
};

class Square :public Shape{
    public:
        void printShape(){
            std::cout<<"This is a Square\n";
        }
};

class Rectangle :public Shape{
    public:
        void printShape(){
            std::cout<<"This is a Rectangle\n";
        }
};

class Rohombus :public Shape{
    public:
        void printShape(){
            std::cout<<"This is a Rohombus\n";
        }
};

// Defining the changable Part of the code for reusability
// Creation of different classes Deepnding on the type of the Shape
Shape* Shape::Create(ShapeType type){
    if(type == ST_Circle)
        return new Circle();
    else if(type == ST_Square)
        return new Square();
    else if(type == ST_Rectangle)
        return new Rectangle();
    else if(type == ST_Rohombus)
        return new Rohombus();
    else
    {
        return NULL;
    }
    
};

// Client Code
class Client{
    private:
        Shape* pshape;
    public:
        Client(ShapeType t){
            pshape = Shape::Create(t);
        }
        Shape* getShape(){
            return pshape;
        }
};

// Driver Code
int main()
{
    int x;
    std::cout<<"0 for Circle\n1 for Square\n2 for Rectangle\n3 for Rohombus\n"<<"Enter the Shape index: ";
    std::cin>>x;
    ShapeType ty = (ShapeType)x;
    Client* pclient = new Client(ty);
    Shape* pshape = pclient->getShape();
    pshape->printShape();
    return 0;
}