#ifdef __cplusplus
extern "C"
{
#endif
#include <NTDDK.h>
#ifdef __cplusplus
}
#endif 
void DrvierUnload()
{

}
struct _kuser_shared_data
{

};

extern "C" NTSTATUS  DriverEntry(IN PDRIVER_OBJECT pDriverObject, IN PUNICODE_STRING pRegistryPath)
{

	UNREFERENCED_PARAMETER(pRegistryPath);

	pDriverObject->DriverUnload = reinterpret_cast <PDRIVER_UNLOAD>(DrvierUnload);
	return STATUS_SUCCESS;
}