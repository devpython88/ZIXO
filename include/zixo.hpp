#ifndef ZIXO_HPP
#define ZIXO_HPP

#include <raylib.h>
#include <iostream>

class ZIXO_Window {
    private:
    int width, height;
    std::string caption;

    public:
    ZIXO_Window(int width, int height, std::string caption);
    void Close();
    bool ShouldClose();
    void ClearColor(Color color);
    void StartDrawing();
    void FinishDrawing();

    int GetWidth();
    int GetHeight();
};

class ZIXO_Rect {
    private:
    float width, height, x, y;
    Color color;

    public:
    ZIXO_Rect(float width, float height, float x, float y, Color color);
    void Draw();
    void SetX(float newX);
    void SetY(float newY);
    void ChangeX(float newX);
    void ChangeY(float newY);
    float GetX();
    float GetY();
    float GetWidth();
    float GetHeight();
    Rectangle GetRaylibRectangle();
    bool CollidesWith(ZIXO_Rect with);
};

// FUNCS

bool KeyDown(int key);
bool KeyPressed(int key);
bool KeyReleased(int key);


#endif