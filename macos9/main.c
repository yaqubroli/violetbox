#include <MacOS.h>

pascal OSErr MyFunction(void)
{
	DialogPtr theDialog;
	short itemHit;
	Str255 message;

	GetIndString(message, 128, 1);
	ParamText(message, "\p", "\p", "\p");
	theDialog = GetNewDialog(128, nil, (WindowPtr)-1L);
	ModalDialog(nil, &itemHit);
	DisposeDialog(theDialog);

	return noErr;
}