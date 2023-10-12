# Important Calculations

## intersect Line and Plane

line:

$g: \vec{X} = \vec{OP} + t * \vec{a}$

plane:

$p: \vec{X} = \vec{OU} + x * \vec{b} + y * \vec{c}$

first we check if the normal vector of p $\vec{n}$ is 90° to $\vec{a}$, if that is the case they either don't intesect or they infinitly do. ($\vec{b}$ represents the x axis of the plane $\vec{c}$ represents the y axis of the plane)

$\vec{n} = \vec{b} \times \vec{c} = \begin{pmatrix}
    b_y * c_z - b_z * c_y \\\
    b_z * c_x - b_x * c_z \\\
    b_x * c_y - b_y * c_y
\end{pmatrix}$

$\vec{a} * \vec{n} == 0 \\ a_x * n_x + a_y * n_y + a_z * n_z == 0$

if that is true we will handel the intersection as if it wouldn't intersect.

Intersect:

$g = p \\
\vec{OP} + t * \vec{a} = \vec{OU} + x * \vec{b} + y * \vec{c}$

$I: OP_x + t * a_x = OU_x + x * b_X + y * c_x \ |-OU_x \ |-t * a_x\\ 
II: OP_y + t * a_y = OU_y + x * b_y + y * c_y \ |-OU_y \ |-t * a_y\\
III: OP_z + t * a_z = OU_z + x * b_z + y * c_z \ |-OU_z \ |-t * a_z$

$I: x * b_x + y * c_x - t * a_x  = OP_x - OU_x\\ 
II: x * b_y + y * c_y - t * a_y  = OP_y - OU_y\\
III: x * b_z + y * c_z - t * a_z  = OP_z - OU_z$

$d_k = \begin{vmatrix}
    b_x \ \ c_x \ \ -a_x \\
    b_y \ \ c_y \ \ -a_y \\
    b_z \ \ c_z \ \ -a_x
\end{vmatrix}$

$d_x = \begin{vmatrix}
    (OP_x - OU_x) \ \ c_x \ \ -a_x \\
    (OP_y - OU_y) \ \ c_y \ \ -a_y \\
    (OP_z - OU_z) \ \ c_z \ \ -a_z
\end{vmatrix}$

$d_y = \begin{vmatrix}
    b_x \ \ (OP_x - OU_x) \ \ -a_x \\
    b_y \ \ (OP_y - OU_y) \ \ -a_y \\
    b_z \ \ (OP_z - OU_z) \ \ -a_z
\end{vmatrix}$

$d_t = \begin{vmatrix}
    b_x \ \ c_x \ \ (OP_x - OU_x) \\
    b_y \ \ c_y \ \ (OP_y - OU_y) \\
    b_z \ \ c_z \ \ (OP_z - OU_z)
\end{vmatrix}$

$x = \frac{d_x}{d_k}, \ \ y = \frac{d_y}{d_k}, \ \ t = \frac{d_t}{d_k}$