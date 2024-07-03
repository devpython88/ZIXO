#include "../include/zixo.hpp"      

ZIXO_Window::ZIXO_Window(int width, int height, std::string caption)
{
    this->width = width;
    this->height = height;
    this->caption = caption;
    InitWindow(width, height, caption.c_str());
}

void ZIXO_Window::Close()
{
    CloseWindow();
}

bool ZIXO_Window::ShouldClose()
{
    return WindowShouldClose();
}

void ZIXO_Window::ClearColor(Color color)
{
    ClearBackground(color);
}

void ZIXO_Window::StartDrawing()
{
    BeginDrawing();
}

void ZIXO_Window::FinishDrawing()
{
    EndDrawing();
}

int ZIXO_Window::GetWidth(){
    return GetScreenWidth();
}

int ZIXO_Window::GetHeight(){
    return GetScreenHeight();
}

/*********************/
/* RECT */

ZIXO_Rect::ZIXO_Rect(float width, float height, float x, float y, Color color){
    this->width = width;
    this->height = height;
    this->x = x;
    this->y = y;
    this->color = color;
}

void ZIXO_Rect::SetX(float newX){
    this->x = newX;
}

void ZIXO_Rect::SetY(float newY){
    this->y = newY;
}

void ZIXO_Rect::ChangeX(float newX){
    this->x += newX;
}

void ZIXO_Rect::ChangeY(float newY){
    this->y += newY;
}

float ZIXO_Rect::GetX(){
    return this->x;
}

float ZIXO_Rect::GetY(){
    return this->y;
}

float ZIXO_Rect::GetWidth(){
    return this->width;
}

float ZIXO_Rect::GetHeight(){
    return this->height;
}

void ZIXO_Rect::Draw(){
    DrawRectangle(GetX(), GetY(), GetWidth(), GetHeight(), this->color);
}

Rectangle ZIXO_Rect::GetRaylibRectangle(){
    Rectangle r = { GetX(), GetY(), GetWidth(), GetHeight() };
    return r;
}

bool ZIXO_Rect::CollidesWith(ZIXO_Rect with){
    return CheckCollisionRecs(GetRaylibRectangle(), with.GetRaylibRectangle());
}

/*******************/

// FUNCS

bool KeyDown(int key){
    return IsKeyDown(key);
}

bool KeyPressed(int key){
    return IsKeyPressed(key);
}

bool KeyReleased(int key){
    return IsKeyReleased(key);
}