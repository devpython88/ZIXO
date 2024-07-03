#include <iostream>
#include "include/zixo.hpp"

int main() {
    ZIXO_Window window(800, 400, "window");

    ZIXO_Rect player(50, 50, 0, 0, RED);
    ZIXO_Rect player2(50, 50, window.GetWidth() - 50, 0, RED);

    while (!window.ShouldClose()){
        if (KeyDown(KEY_W)){
            player.ChangeX(0.5);
            player2.ChangeX(-0.5);
        }

        if (player.CollidesWith(player2)){
            break;
        }
        
        window.StartDrawing();
        window.ClearColor(WHITE);
        player.Draw();       
        player2.Draw();   
        window.FinishDrawing();
    }

    window.Close();
    return 0;
}