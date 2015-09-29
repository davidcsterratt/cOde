---
title: "README"
author: "Daniel Kaschek"
date: "September 29, 2015"
output: html_document
---


## Exponential decay

$$A \stackrel{k1}{\rightarrow} B \stackrel{k2}{\rightarrow} \emptyset$$


```r
library(cOde)
library(deSolve)

# Define ODE as character vector
f <- c(
  A = "-k1*A",
  B = "k1*A - k2*B"
)

# Auto-generate C code and compile it
func <- funC(f)

# Integrate (compiled) ODE by wrapper function odeC
times <- 0:100
yini <- c(A = 1, B = 0)
parms <- c(k1 = 2e-1, k2 = 1e-1)

out <- odeC(y = yini, times = times, func = func, parms = parms)

# Plot the result
with(as.data.frame(out), matplot(x = time, y = cbind(A, B), type = "l", lty = 1))
```

![plot of chunk decay](figure/decay-1.png) 


## Sensitivity equations

Given the ODE $\dot x = f(x, p)$, generate the sensitivity equations and integrate the together with the original ODE.


```r
# Compute sensitivity equations of f
f.sens <- sensitivitiesSymb(f)

# Auto-generate C code of the combined ODE system and compile it.
func <- funC(c(f, f.sens))

# Solve the ODE by lsodes()
yini <- c(yini, attr(f.sens, "yini"))
out <- odeC(y = yini, times = times, func = func, parms = parms, method = "lsodes")

# Plot the result (plot shows the sensitivities of B)
with(as.data.frame(out), matplot(x = time, y = cbind(B.k1, B.k2, B.A, B.B), type = "l", lty = 1))
```

![plot of chunk sensitivities](figure/sensitivities-1.png) 


