/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: cplummer
 *
 * Created on October 9, 2017, 12:40 PM
 */

#include <iostream>

using namespace std;

class BaseTree
{
public:
    virtual void draw()
    {
        cout << "       /\\" << endl;
        cout << "      /  \\" << endl;
        cout << "     /    \\" << endl;
        cout << "    /      \\" << endl;
    }
};

class AsterikTree : public BaseTree
{
public:
    void draw()
    {
        cout << "       /\\" << endl;
        cout << "      /**\\" << endl;
        cout << "     /****\\" << endl;
        cout << "    /******\\" << endl;
    }
};

class ApostropheTree : public BaseTree
{
public:
    void draw()
    {
        cout << "       /\\" << endl;
        cout << "      /''\\" << endl;
        cout << "     /''''\\" << endl;
        cout << "    /''''''\\" << endl;
    }
};

class ColonTree : public BaseTree
{
public:
    void draw()
    {
        cout << "       /\\" << endl;
        cout << "      /::\\" << endl;
        cout << "     /::::\\" << endl;
        cout << "    /::::::\\" << endl;
    }
};
/*
 * 
 */
int main(int argc, char** argv) {
    BaseTree *ptrarr[4];
    
    ptrarr[0] = new AsterikTree;
    ptrarr[1] = new ApostropheTree;
    ptrarr[2] = new ColonTree;
    ptrarr[3] = new BaseTree;
    
    for(int i = 0; i < 4; i++)
    {
        dynamic_cast<BaseTree *>(ptrarr[i]) -> draw();
    }
    return 0;
}

