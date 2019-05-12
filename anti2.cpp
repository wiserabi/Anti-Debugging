/*
#include<windows.h>

void DebuggerDetected() {
	MessageBox(NULL, "stop debugging", "stop debugging", MB_OK);
	exit(-1);
}

#ifdef _WIN64
#pragma comment (linker,"/INCLUDE:_tls_used")
#else
#pragma comment (linker,"/INCLUDE:__tls_used")
#endif

void NTAPI tls_callback(PVOID DLLHandle, DWORD dwReason, PVOID pv);

#ifdef _WIN64
#pragma const_seg(".CRT$XLF")
#else
#pragma data_seg(".CRT$XLF")
#endif
PIMAGE_TLS_CALLBACK p_thread_callback = tls_callback;
#ifdef _WIN64
#pragma const_seg()
#else
#pragma data_seg()
#endif
//tls_callback is called before the main function
void NTAPI tls_callback(PVOID DLLHandle, DWORD dwReason, PVOID pv) {
	//MessageBox(NULL, "In TLS", "In TLS", MB_OK)
	HANDLE hHeap = GetProcessHeap();
	//force flag is located 0x10bytes from base address of heap
	//in most cases this value is 0 if debugger present non zero
	DWORD_PTR* dwflag = (DWORD_PTR*)((DWORD_PTR)hHeap + 0x10);
	if (*dwflag != 0) {
		DebuggerDetected();
	}
}


int main() {
	MessageBox(NULL, (LPCSTR)"hello from main", (LPCSTR)"main", 0);
	return 0;
}*/