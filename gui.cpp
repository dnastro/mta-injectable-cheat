#include "imgui.h"

void ShowMenu() {
    ImGui::Begin("Cheat Menu");
    if (ImGui::Button("Aimbot")) {}
    if (ImGui::Button("ESP")) {}
    if (ImGui::Button("Speed")) {}
    ImGui::End();
}