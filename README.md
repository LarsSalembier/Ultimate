# Ultimate
Ultimate Game Engine

## Setup project
After cloning this repo, you can setup this project by running the program `GenerateProject.bat`. This will run Premake, which will generate the following files:
- `Ultimate.sln`
- `Sandbox/Sandbox.vcxproj`
- `Sandbox/Sandbox.vcxproj.filters`
- `Sandbox/Sandbox.vcxproj.user`
- `Ultimate/Ultimate.vcxproj`
- `Ultimate/Ultimate.vcxproj.filters`
- `Ultimate/Ultimate.vcxproj.user`

## Generating the binaries.
Set `Sandbox` as the Startup Project inside Visual Studio (right click project `Sandbox` -> "Set as Startup Project").
Generated binaries will be placed under `bin/`.
Generated intermediaries (`.obj` files etc.) will be placed under `bin-int/`.
