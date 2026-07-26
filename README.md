# Search

A lightweight Windows desktop launcher that immediately opens the Windows Search interface and exits.

## Features

- Opens Windows Search using the `Win + S` keyboard shortcut.
- No visible user interface.
- Starts and exits almost instantly.
- Packaged as a Desktop Bridge (Centennial) application.

## Requirements

- Windows 10 Anniversary Update (1607) or later
- Visual Studio 2019/2022
- Windows 10 SDK

## Building

1. Open `Search.sln` in Visual Studio.
2. Select the desired configuration (`Debug` or `Release`).
3. Build the solution (`Ctrl + Shift + B`).
4. Build or publish the packaging project to generate an `.appx`/`.msix`.

## How It Works

On launch, the application:

1. Simulates the `Win + S` keyboard shortcut.
2. Opens the Windows Search flyout.
3. Immediately exits.

## Project Structure

```
Search/
├── Search/           # Win32 launcher
├── Search.Package/   # Desktop Bridge packaging project
└── README.md
```

## License

This project is provided as-is without warranty.
