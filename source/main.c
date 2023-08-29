#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <3ds.h>

int main(int argc, char* argv[])
{
    PrintConsole topConsole, bottomConsole;

    gfxInitDefault();
	consoleInit(GFX_TOP, &topConsole);
    consoleInit(GFX_BOTTOM, &bottomConsole);


	// Main loop
	while (aptMainLoop())
	{
        printf("Hello, world!\n");
		gspWaitForVBlank();
		gfxSwapBuffers();
		hidScanInput();


		// Your code goes here
		u32 kDown = hidKeysDown();
		if (kDown & KEY_START)
			break; // break in order to return to hbmenu
        if (kDown & KEY_UP) {
            consoleSelect()
        }
	}

	gfxExit();
	return 0;
}
