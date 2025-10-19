# netmon
A simple C++ network monitoring and control service

### Project Idea: “NetMon” — A Simple Network Monitoring & Control Service

## Concept:
A small daemon-like application that runs on Linux and:
monitors system/network info (like CPU, memory, and network usage),
exposes that info via a simple CLI or REST API,
supports plugins (in later stages),
uses CMake + Conan to manage dependencies.

### Installation

Follow these steps to get your development environment set up:

1.  **Clone the Repository:**

    ```bash
    git clone git@github.com:aldo199/python_proj.git
    cd python-proj
    ```

2.  **Set Up Python Virtual Environment:**

    *   **Create the virtual environment:**
        ```bash
        python -m venv venv
        ```
        *(This creates a folder named `venv` in your project directory.)*

    *   **Activate the virtual environment:**
        *   **On macOS/Linux:**
            ```bash
            source venv/bin/activate
            ```
        *   **On Windows (Command Prompt):**
            ```cmd
            venv\Scripts\activate.bat
            ```
        *   **On Windows (PowerShell):**
            ```powershell
            .\venv\Scripts\Activate.ps1
            ```
        *(You'll know it's active when `(venv)` appears at the beginning of your terminal prompt.)*

    *   **Install Python Dependencies:**
        ```bash
        pip install -r requirements.txt
        ```

netmon/
├── include/
│   └── netmon.h
├── src/
│   └── main.cpp
├── CMakeLists.txt
└── README.md

