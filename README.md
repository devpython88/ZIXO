# ZIXO
Zixo is raylib but made with C++ and uses classes instead of structs and functions

The avdvantage of ZIXO (currently) is that it uses modern C++ to make classes and classes make the code more modular.

The boilerplate it still the same.

You initialise a window (using a class)

You run a loop that runs until the window closes (using the ZIXO_Window.ShouldClose func)

You close the window after the loop (using the ZIXO_Window.Close func)

#### I tried my best to make the function names as similar to raylib as possible but not every func name is raylib func name as it can make conflicts

# For other x86 users
### if you use x86 linux then you will have to build the library from source, Heres how...
<ol>
  <li>Download the ZIXO source code
  <p>You can download it from the latest release's assets</p>
  <li>Navigate to the source code directory</li>
  <li>Create the static library
  <p>You can do this by running the create_static_library.sh file in the source code</p></li>
  <li>Make global (optional but recommended)
  <p>You can do by running the make_global.sh file</p>
  </li>
</ol>
