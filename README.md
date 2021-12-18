# bootcamp-piscine-cpp
42 school piscine cpp is like a bootcamp that consist of 9 days, each day has a number of exercises, to validate the piscine you must validate all the days. 

## C++ inheritance
- An object of a C++ class is represented by a contiguous region of memory. A pointer to an object of a class points to the first byte of that region of memory. The compiler turns a call of a member function into an "ordinary'function call with an "extra' argument, that "extra' argument is a pointer to the object for
which the member function is called.[src](https://www.usenix.org/legacy/publications/compsystems/1989/fall_stroustrup.pdf)
```
class A
{
  int a;
  void f(int i);
};
```
- An object of class A will look like this
```
 ____________
|   int a    |
 ------------
```
- No information is placed in an n except the integer a specifred by the user. No information relating to (non-virtual) member functions is placed in the object.
- A call of the member function A::f
```
A* pa; 
pa->f(2);
```
is transformed by the compiler to an "ordinary function call":
```
f__F1A(pa,2);
```
- Objects of derived classes are composed by concatenating the members of the classes involved
```
class A {
int a;
void f(int); 
}; 
class B : A {
int b;
void g(int); 
};
class C: B 
{
int c;
void h(int);
};
```
Again, no "housekeeping" information is added, so an object of class c looks like this:
```
 -------------
|   int a     |
|   int b     |
|   int c     |
 -------------
```
The compiler "knows" the position of all members in an object of a derived class exactly as it does for an object of a simple class and generates the same (optimal) code in both cases.
- Implementing virtual functions involves a table of functions.
Consider:
```
class A 
{
  int a;
  virtual void f( int);
  virtual void g(int);
  virtual void h(int);
}
class B : A 
{
int b;
void g(int);
}; 
class C : B 
{
int c;
void h(int);
};
```
In this case, a table of virtual functions, the vtbl, contains the appropriate functions for a given class and a pointer to it is place in every object. a class C object looks like this:
```
 -------------
|   int a     |
|     vptr ...............-> --------------
|   int b     |              |   A::f     |
|   int c     |              |   B::g     |
 -------------               |   C::h     |
                             --------------
```
A call to a virtual function is transformed into an indirect call by the compiler. For example,
```
C* pc;
pc->g(2);
```
becomes something like:
```
(*(pc->vptr[1]))(pc,2);
```
A multiple inheritance mechanism for C++ must preserve the efficiency and the key features of this implementation scheme.
## Notes
1- [How to use base class's constructors and assignment operator in C++?](https://stackoverflow.com/questions/1226634/how-to-use-base-classs-constructors-and-assignment-operator-in-c)
