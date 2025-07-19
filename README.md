

# STM32 Project - SysTick_driver

This repository contains the source code and configuration files for the **SysTick_driver** developed using **STM32CubeIDE**.
It is a simple bare-metal program that demonstrates the implementation of a delay function using
ARM Cortex-M4 SysTick peripheral.

No HAL driver was used, only plain C.

## Project Overview
- **MCU:** STM32F401RE
- **IDE:** STM32CubeIDE 1.17.0
- **Purpose:** "Learn about the SysTick peripheral of the ARM Cortex-M4 processor"

## Repository Structure
```
project_root/
├── Core/          # Application source code
├── Inc/           # CMCIS Device driver and header files
├── Startup        # Auto-genetated (by IDE) startup file
└── exported/      # Exported zip version of the project
```

## How to Use
1. **Clone this repository:**
   ```bash
   git clone https://github.com/yourusername/your-repo-name.git
   ```

2. **Import into STM32CubeIDE:**
   - Open STM32CubeIDE.
   - Go to **File > Import > General > Existing Projects into Workspace**
     or download the exported version of the project and import it
     as archive **File > Import > General > Archive file** (recomended).
   - Select the cloned repository folder.

3. **Build and Run:**
   - Click the **Build** button.
   - Flash to your board.

## Exported Version
An exported `.zip` version of this project is available in the `exported/` directory for easy import into STM32CubeIDE.



