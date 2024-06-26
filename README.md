# Carshop database

This code was compiled, committed and pushed from Visual Studio Code.

## How to compile the code and view the output

In your command prompt / terminal, navigate to the path where thise code is downloaded and run the following commands:

```shell
g++ -c Car.cpp
g++ -c mainCar.cpp
g++ -o mainCar Car.o mainCar.o
./mainCar
```
The option -c tells the compiler to skip the linker step and to produce an object (.o) file of the respective code.

If you later change, e.g., the main program, you have to repeat only the compilation of the changed code and the linker step:
```shell
g++ -c mainCar.cpp
g++ -o mainCar Car.o mainCar.cpp
```

Alternatively you can also run the following command:

```shell
g++ Car.cpp mainCar.cpp -o mainCar
./mainCar
```
