#include <MacOS.h>

void main(void)
{
	OSErr err;

	err = Gestalt(gestaltSystemVersion, &systemVersion);
	if (err == noErr && systemVersion < 0x0922) {
		return;
	}

	err = RegisterExtension(MyFunction);
	if (err != noErr) {
		ExitToShell();
	}
}
