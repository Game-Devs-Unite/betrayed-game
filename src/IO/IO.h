#include <string>

// Easy to use API for various IO from GFX, to sound, kayboard, and mouse.
// All resources are internally managed to only have one copy per filePath.
namespace IO {
    enum class MOUSE_BUTTON {
        LEFT,
        RIGHT,
        MIDDLE
    };

    void* getTexture(std::string& filePath);
    void drawTexture(void* texture);
    void returnTexture(void* texture);

    void* getSound(std::string& filePath);
    void playSound(void* sound);
    void returnSound(void* sound);

    bool isKeyPressed(char key);
    bool isMousePressed(MOUSE_BUTTON button);
}