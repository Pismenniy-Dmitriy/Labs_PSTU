#pragma once
struct Shift;
Shift* CreateShift(char* word, int sizew); 
int Slice(int Pos, Shift* shift, char fsym, int sizew); 
void search();