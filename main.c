#include <stdio.h>
#include <windows.h>
#include <Xinput.h>


void afficherBoutons(WORD boutons) {
    if (boutons & XINPUT_GAMEPAD_A) printf("A ");
    if (boutons & XINPUT_GAMEPAD_B) printf("B ");
    if (boutons & XINPUT_GAMEPAD_X) printf("X ");
    if (boutons & XINPUT_GAMEPAD_Y) printf("Y ");
    if (boutons & XINPUT_GAMEPAD_LEFT_SHOULDER) printf("LB ");
    if (boutons & XINPUT_GAMEPAD_RIGHT_SHOULDER) printf("RB ");
    if (boutons & XINPUT_GAMEPAD_BACK) printf("Back ");
    if (boutons & XINPUT_GAMEPAD_START) printf("Start ");
    if (boutons & XINPUT_GAMEPAD_LEFT_THUMB) printf("LThumb ");
    if (boutons & XINPUT_GAMEPAD_RIGHT_THUMB) printf("RThumb ");
    if (boutons & XINPUT_GAMEPAD_DPAD_UP) printf("Up ");
    if (boutons & XINPUT_GAMEPAD_DPAD_DOWN) printf("Down ");
    if (boutons & XINPUT_GAMEPAD_DPAD_LEFT) printf("Left ");
    if (boutons & XINPUT_GAMEPAD_DPAD_RIGHT) printf("Right ");
}

int main() {
    XINPUT_STATE state;
    DWORD idManette = 0;

    printf("Recherche de la manette...\n");

    while (1) {
        ZeroMemory(&state, sizeof(XINPUT_STATE));

        if (XInputGetState(idManette, &state) == ERROR_SUCCESS) {
            system("cls");
            printf("Manette détectée !\n");

            printf("Boutons appuyés : ");
            afficherBoutons(state.Gamepad.wButtons);
            printf("\n");

            printf("Joystick Gauche : X = %d, Y = %d\n", state.Gamepad.sThumbLX, state.Gamepad.sThumbLY);
            printf("Joystick Droit  : X = %d, Y = %d\n", state.Gamepad.sThumbRX, state.Gamepad.sThumbRY);
            printf("Gâchettes       : LT = %d, RT = %d\n", state.Gamepad.bLeftTrigger, state.Gamepad.bRightTrigger);
        } else {
            system("cls");
            printf("Manette non détectée. Veuillez connecter une manette Xbox.\n");
        }

        //Sleep(100); // Évite de spammer
    }

    return 0;
}
