# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---


## Basic Build Instructions

1. Make a build directory: `mkdir build && cd build`
2. Compile: `cmake .. && make`
3. Run it: `./pid`. 

## PID gains effect

The proportional gain computes a corrective signal proportional to the error. P gain by itself cannot reach and stably stay at the desired value; it will oscillate around the it. For that reason, the derivative term is employed that introduces damping to the system, acting as a remedy to these oscillations. The integral gain is responsible for taking care any steady state offsets. 

## PID gain tuning.
I first started tuning the proportianl (P) gain. I increased carefully until the car started following the path. I noticed that, especially after some sharper turn, it was oscillating a lot. For that reason I increased the D gain slightly. Finally, I introduced some Integral gain to improve the tracking performance.