#include "Box.h"

// Implement setters and getters

void Box::setLength(int leng){
  length=leng;
}
void Box::setWidth(int wdith){
  width=wdith;
}
void Box::setHeight(int hegit){
  height=hegit;
}

int Box::getLength(){
  return length;
}
int Box::getWidth(){
  return width;
}
int Box::getHeight(){
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length*width*height;
}
