% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/cOde.R
\name{sundialsOde}
\alias{sundialsOde}
\title{Implement the ODE system for sundials::cvodes.}
\usage{
sundialsOde(f, variables, parameters, modelname)
}
\arguments{
\item{f}{Named character vector containing the right-hand sides of the ODE.
You may use the key word.}

\item{variables}{Variables appearing on the ODE, \code{names(f)}.}

\item{parameters}{Parameters appearing in the ODE.}

\item{modelname}{Base name of the dll.}
}
\value{
C++ source code as a character vector.
}
\description{
Implement the ODE system for sundials::cvodes.
}
\author{
Wolfgang Mader, \email{Wolfgang.Mader@fdm.uni-freiburg.de}
}
