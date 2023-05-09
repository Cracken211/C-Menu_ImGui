#include <d3d9.h>

namespace gui {

	// WINDOW SIZE
	constexpr INT WIDTH = 500;
	constexpr INT HEIGHT = 300;

	inline bool exit = true; 

	//windows API for windows vars
	inline HWND window = nullptr;
	inline WNDCLASSEXA windowClass = { };

	// pointes for windows movement
	inline POINTS position = { };

	//diect x state vars 
	inline PDIRECT3D9 d3d = nullptr;
	inline LPDIRECT3DDEVICE9 device = nullptr;
	inline D3DPRESENT_PARAMETERS presentParameters = { };

	void CreateHWindow(const char* windowName, const char* className) noexcept;
	void DestroyHWindow() noexcept;

	bool CreateDevice() noexcept;
	void ResetDevice() noexcept;
	void DestroyDevice() noexcept;

	//create and destory
	void CreateImGui() noexcept;
	void DestroyImGui() noexcept; 

	void BeginRender() noexcept;
	void EndRender() noexcept;
	void Render() noexcept;


}