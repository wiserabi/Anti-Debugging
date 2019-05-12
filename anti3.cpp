/*
#include<windows.h>
#include<psapi.h>

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
	HANDLE hProcess=GetCurrentProcess();
	BOOL debug;
	CheckRemoteDebuggerPresent(hProcess,&debug);
	if (debug) {
		DebuggerDetected();
	}
}


int main() {
	MessageBox(NULL, (LPCSTR)"hello from main", (LPCSTR)"main", 0);
	return 0;
}*/