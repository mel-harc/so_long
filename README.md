# 🕹️ So_long - A 2D Game Project

## Project Overview

This project involves creating a simple **2D game** using **MiniLibX**, a graphical library developed internally at the school (42). The goal of the project is to develop skills in **graphics programming**, working with **textures, sprites**, and managing basic gameplay elements such as player movement, event handling, and game mechanics. The game features a player who must collect all the collectibles on a map and reach the exit while navigating obstacles.

## Objectives and Skills

This project is designed to help you:

- Learn **window management** and handle **keyboard events**.
- Work with **textures, sprites,** and **colors**.
- Develop basic **algorithms** for player movement and collision detection.
- Improve overall **C programming skills**, including error handling and memory management.

The project serves as a great introduction to **computer graphics programming** while also reinforcing essential coding practices, such as adhering to the **Norm**, avoiding memory leaks, and creating well-structured code.

## Game Mechanics

- The player’s goal is to **collect all items** on the map and **reach the exit**.
- The player can move in **four directions** (up, down, left, right) using the **W, A, S, D** keys.
- Each move should be displayed in the **shell** by printing the movement count.
- The game runs in a **2D view** (either top-down or profile).
- The player should not be able to move into walls.
- The game does not need to run in **real time**, allowing for simpler movement handling.

## Graphic Management

- The game window must display the **2D map** and remain smooth in operation (e.g., handle minimizing or switching windows).
- The **ESC** key must close the window and quit the game.
- Clicking the **window's close button** must also quit the game cleanly.
- You are required to use the **MiniLibX** library for managing images and rendering graphics in a window.

## Map Specifications

- The game map is represented using a **`.ber` file**, containing 5 types of characters:
  - `0`: Empty space
  - `1`: Wall
  - `C`: Collectible item
  - `E`: Exit
  - `P`: Player’s starting position
- A valid map must have:
  - One **exit** (`E`).
  - At least one **collectible** (`C`).
  - One **starting position** (`P`).
- The map must be **rectangular** and fully **closed by walls**. If the map is invalid (e.g., not surrounded by walls, or has duplicate start/exit points), the program should return an error and print **"Error\n"** followed by a relevant error message.
- The program must check for a **valid path** on the map to ensure the player can collect all items and reach the exit.

### Example of a valid `.ber` map:

```note
11111111111111111111
111111P0C00E00111111
11111111111111111111
```

## Technical Requirements

- The project must be written in **C** and follow the **Norm**.
- You must handle errors properly to avoid unexpected crashes (e.g., segmentation faults, bus errors).
- All dynamically allocated memory must be properly freed to avoid **memory leaks**.
- A **Makefile** is required to compile the project, including rules for:
  - `$(NAME)`
  - `all`
  - `clean`
  - `fclean`
  - `re`
- You may use **libft** if you wish, and you must include it in the project with its own Makefile.
- The program must use the **MiniLibX** library for handling window creation, rendering, and input events.

## Game Execution

- The executable is named **`so_long`**.
- The program takes a **`.ber` map file** as an argument to initialize the game world.

## Allowed Functions

You are allowed to use the following system functions:

- `open`, `close`, `read`, `write`, `malloc`, `free`, `perror`, `strerror`, `exit`.
- All functions of the **math library** (`-lm` compiler option).
- All functions from **MiniLibX**.
- Custom functions like `ft_printf` or an equivalent you coded.

## Bonus Features

If you wish to extend the game, you can add **bonus features** for extra points:

- **Enemy patrols**: The player loses if they touch an enemy.
- **Sprite animations**: Add animations to the player and game objects.
- **On-screen movement counter**: Display the movement count directly on the game screen instead of printing it in the shell.

### 🖥️ Example of Usage

To get started with So_Long, follow these steps:

## 1. Clone the repository:
   ```bash
   $ git clone git@github.com:mel-harc/so_long.git
   $ cd so_long
   ```

## 2. Install the required dependencies:
  ```bash
$ make
$ make bonus
```

## 3. To run the game

Use the following command in your terminal:
```bash
$ ./so_long mapm.ber
```

```bash
$ ./so_long_bonus map.ber
```

## 4. Controls

**W:** Move Up

**A:** Move Left

**S:** Move Down

**D:** Move Right

**ESC:** Exit the game

### mel-harc
