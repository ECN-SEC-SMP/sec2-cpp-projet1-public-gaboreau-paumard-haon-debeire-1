#include "point2D.hpp"
#include <iostream>

using namespace std;

// Constructeur
template<typename T>
Point2D<T>::Point2D(T x, T y) {
	this->x = x;
	this->y = y;
}

template<typename T>
Point2D<T>::Point2D(Point2D<T> const &p){
  this->x = p.x;
  this->y = p.y;
}

// Accesseurs
template<typename T>
T Point2D<T>::getX() const {
	return this->x;
}

template<typename T>
T Point2D<T>::getY() const {
	return this->y;
}

// Mutateurs
template<typename T>
void Point2D<T>::setX(T x) {
	this->x = x;
}

template<typename T>
void Point2D<T>::setY(T y) {
	this->y = y;
}

template<typename T>
void Point2D<T>::setPoint(T newX, T newY) {
	this->x = newX;
	this->x = newX;		
}

// Méthode translater :

template<typename T>
void Point2D<T>::translate(T x, T y) {
    this->x = this->x + x;
    this->y = this->y + y;
}

// Surcharge des opérateurs
template <typename T>
std::ostream& operator<<(std::ostream &out, Point2D<T> const &P)
{
  out << "x: " 	<< P.getX() <<" ; y: "	<< P.getY() << std::endl;
  return out;
}