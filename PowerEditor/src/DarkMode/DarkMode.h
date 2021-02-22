#pragma once

extern bool g_darkModeSupported;
extern bool g_darkModeEnabled;


bool ShouldAppsUseDarkMode();
bool AllowDarkModeForWindow(HWND hWnd, bool allow);
bool IsHighContrast();
void RefreshTitleBarThemeColor(HWND hWnd);
bool IsColorSchemeChangeMessage(LPARAM lParam);
bool IsColorSchemeChangeMessage(UINT message, LPARAM lParam);
void AllowDarkModeForApp(bool allow);
void EnableDarkScrollBarForWindowAndChildren(HWND hwnd);
void InitDarkMode(bool fixDarkScrollbar);
