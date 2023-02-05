# scballpack
<!-- badges: start -->
[![R-CMD-check](https://github.com/Qile0317/scballpack/actions/workflows/R-CMD-check.yaml/badge.svg)](https://github.com/Qile0317/scballpack/actions/workflows/R-CMD-check.yaml)
[![Codecov test coverage](https://codecov.io/gh/Qile0317/scballpack/branch/main/graph/badge.svg)](https://app.codecov.io/gh/Qile0317/scballpack?branch=main)
![MIT license](https://img.shields.io/badge/license-MIT-green.svg)
<!-- badges: end -->

```scballpack``` is an R package to produce "ball-packing" visualizations of the clonal expansion of T-cells in a seurat(V4) object, based on its T-cell-receptor (TCR) library generated from a cellranger output of 10X single-cell immune profiling. 

The concept was first implemented in a study Ma et al.[[1]](#1) by Ben Murrell (@Murrellb) for nasal polyp $T_{H}$ cells. The resulting plot visually quantified clonal expansion, as seen in the following figure. 

<img src="man/figures/example.png" width="75%" align="center" />

## Installation
```
library(devtools)
install_github("Qile0317/scballpack")
library("scballpack")
```
In the future the package will hopefully be on CRAN.

## Usage
The main function in the package takes two main arguments: 
- a Seurat object with a UMAP reduction
- a TCR library dataframe, from ```all_contig_annotations.csv``` generated by Cell Ranger 3.0.0.

And integrates the TCR library into the seurat object metadata(creates a new temporary seurat object). It then will produce a *ggplot* of clusters of circles at roughly the same UMAP coordinates, where the circle size represents the clone size. An example to do so is shown below.

```R
library(Seurat)
library(readr)
library(scballpack)

# run sc-RNAseq pipeline to produce a seurat_object

seurat_object <- RunUMAP(seurat_object)
TCR_dataframe <- read.csv("file_location/all_contig_annotations.csv")

# produce the ball-packing plot
ball_pack_plot <- scballpack(seurat_object, TCR_dataframe)
ball_pack_plot
```
It is also highly recommended to save the plot as an svg for use in publications.

In addition, ```integrate_tcr``` can just integrate the TCR V(D)J library into a seurat object metadata for further analyses:
```R
TCR_dataframe <- read.csv("file_location/all_contig_annotations.csv")
integrated_seurat_object <- integrate_tcr(seurat_object, TCR_dataframe)

# or simply modify the current seurat object
seurat_object <- integrate_tcr(seurat_object, TCR_dataframe)
```
Which also takes care of multiple rows of data for the same cell barcode. Run ```?integrate_tcr``` for more details.

## Contributing
The package is currently incomplete, and more features, tests, bugfixes, and documentation are to come. However, pull requests from forked branches are more than welcome as it is mostly a solo-project at the moment. For major changes, please open an issue first to discuss what you would like to change. Please also make sure to update tests as appropriate.

An explanation of the algorithms will eventually be made publicly available in a either a pre-print or developer vignette, in addition to publication to CRAN.

## Contact
Qile Yang - qile0317@gmail.com

## References
<a id="1">[1]</a> 
Ma, J., Tibbitt, C. A., Georén, S. K., Christian, M., Murrell, B., Cardell, L. O., Bachert, C., & Coquet, J. M. (2021). Single-cell analysis pinpoints distinct populations of cytotoxic CD4+ T cells and an IL-10+CD109+ TH2 cell population in nasal polyps. Science immunology, 6(62), eabg6356. https://doi.org/10.1126/sciimmunol.abg6356

<a id="2">[2]</a> 
atakanekiz (2019) Tutorial:Integrating VDJ sequencing data with Seurat. https://www.biostars.org/p/384640/

## Acknowledgements
Thanks to Ben Murrel (@murrelb) at the Karolinska Instituet for introducing the idea, giving suggestions, and building the ```julia``` implementation of the ball packing algorithm in the original paper.
