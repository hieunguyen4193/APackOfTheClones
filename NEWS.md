# APackOfTheClones 1.2.4

## Additions

- Update citation information as the tool has been published.

## Changes

- slightly improve README
- Ensured all irrelevant files are not included in the package build to address CRAN submissions failures for the previous 2 patches.

# APackOfTheClones 1.2.1

## Additions

- Add code of conduct and contributing guidelines in the package source code.
- Add `assertthat` in imports.

## Changes

- The main change in this patch is a minor alteration in the circle packing algorithm that should result in packings acting slightly more consistent across different physical systems. This may result in slightly different circle placements in the clonal expansion plot, but the overall structure should remain the same. This is pretty much only noticeable in the case of extremely small testing datasets, which is why this is a patch version. However, it is very possible that the same seurat object will produce a slightly different packing than before.
- updated citation information
- Updated the `combined_pbmc` dataset to be up-to-date with the latest version of `Seurat`.
- Spelling & minor fixes / updates to various functions, documentation.
- Removed package startup deprecation message for returning users of version `0.1.x`.
- Removed the explicit `magrittr` dependency.

# APackOfTheClones 1.2.0

## Additions

- Functionality around defining "clusters"/"Idents" has been revamped but backwards compatible. Added argument `alt_ident` in many functions including `vizAPOTC` and `RunAPOTC` to allow for counting clusters based on different cell identities or the current active identity if `NULL`, and it is now part of the subsetting arguments for all functions that work with APackOfTheClones runs /data. This includes:
    - `vizAPOTC`
    - `RunAPOTC`
    - `getSharedClones`
    - `countCloneSizes` (see section below in changes to incorporate identity functionality)
    - updated relevant vignettes to reflect the new argument.
- Add `renameApotcRun` to rename APackOfTheClones runs.
- Add argument `detail` in `APOTCPlot` and `vizAPOTC` to allow user to quickly plot a version of the clonal expansion plot where each cluster is just one large circle. Correspondingly added a subsection in `vignette("APackOfTheClones-shared")`.
- Add argument `publicity` in `getSharedClones` to filter the output shared clones by the number of clusters each clonotype is present in.

## Changes

- `vizAPOTC` and `RunAPOTC` now defaults to aggregating clustered clonotype frequencies based on active ident of the seurat object. Additionally, if using an ident where its levels are not ordered integers, then the cluster labels for each APackOfTheClones run that is stored in the seurat object will no longer just be "C1", "C2", ... and will be the names of the idents.
- Fixed the output for arguments `intop` and `intop_per_cl` in `getSharedClones` so they actually filters for all clones with clone sizes in the top range.
- All arguments in `AdjustAPOTC` that asks for cluster indices as input now also accept characters representing their respective labels in the APackOfTheClones runs.
- The argument `recolor_indicies` has been renamed to `recolor_indices` in `AdjustAPOTC`.
- `countCloneSizes` now outputs a named list with each name being the cluster identity. Additionally, the argument `by_cluster` can now also take in single characters as arguments representing possible alternative cluster identities in the metadata.
- Removed `mini_seurat_obj` from publicly exported data.
- Several exported functions, including `AdjustAPOTC`, now have stricter argument checking of type and length.
- Package can now be installed again on releases with C++14 compilation on older releases of R.
- The minimum required R version has been bumped from `4.0.0` to `4.1.0`.

# APackOfTheClones 1.1.0

## Additions

- Add `getSharedClones` to compute information about clonotypes that are present in multiple seurat clusters and return it to the user.
- Add `showCloneHighlight` to extend the scRepertoire analogue for an APackOfTheClones plot - comes with many options to have certain clones appear differently on an existing plot.
- Add `overlayLegend` to overlay/modify current legend on a clonal expansion plot.
- Add `removeLegend` to remove any existing legend on a clonal expansion plot.
- Add `mergeCloneSizes` to merge clustered raw clone sizes into one table.
- Added arguments in `countCloneSizes` to optionally NOT get clones sizes by cluster, and to optionally sort the output.
- Added argument `add_legend_centerspace` in `APOTCPlot` and `vizAPOTC` to adjust spacing between guide circles and their values, for cases where guide circles have an exceedingly large radius.
- Added arguments in `AdjustAPOTC` to work with labels and their locations
- Added argument `verbose` in `APOTCPlot` to display some additional visual cues.
- Added argument `alpha` in `APOTCPlot` and `vizAPOTC` to change the alpha (transparency) of each circle.
- Added arguments in `APOTCPlot` and the corresponding `vizAPOTC` to compute and plot "links" between clonotypes that are "shared" i.e. common within multiple clusters. Currently, only supports plotting of straight lines.
- Add `vignette("APackOfTheClones-install")` for detailed installation instructions.
- Add `vignette("APackOfTheClones-utils")` for more guidance on the various utilities of the package.
- Add `vignette("APackOfTheClones-shared")` for guidance on working with and visualizing clonotypes shared among different seurat clusters.

## Changes

- `countCloneSizes`
    - Fixed the output to truly be a list of unnamed "table" objects, whereas before, for the clusters with valid clones, each element was instead a list with the first and only element being the tabled clone sizes, and they also had a dimname of `"x"`.
    - Fixed a bug where if the seurat object had no actual clones, the function would error instead of returning a list of empty tables.
    - These fixed changed the raw clone size objects stored in `ApotcData` objects, so all objects and pipelines used before this *must* be re-ran to be forwards compatible! This is technically a breaking change but the major version was not incremented since the fix should be relatively trivial.
- For `vizAPOTC`, `RunAPOTC`, `APOTCPlot`, fixed the subsetting arguments `...` and `extra_filter` for cases where setting certain columns to only one level will erase extra data.
- Altered the ggplot object outputs of `APOTCPlot` and `vizAPOTC` to work with `overlayLegend` and `removeLegend` by introducing another element with a smaller size `ApotcData` object, and layers are now either named with an empty string or a layer label. Leftover ggplot objects from previous versions will have to be updated by re-running that command (`APOTCPlot`/`vizAPOTC`) that generated them.
- Fixed the functionality of the `new_clone_scale_factor` argument in `AdjustAPOTC` to guarantee it is a true rescaling of the clone scale factor, and the internally estimated cluster radii will correspondingly be modified to work with potential repulsion.
- Circles on legends of clonal expansion plots will now have the same linetype as the rest of the circles in a plot generated by `APOTCPlot`/`vizAPOTC`, whereas before they were forced to be blank.
- Legend background is now a single `geom_rect` annotation with a black border instead of a white rectangle stacked on top of a black rectangle.
- Many fixes to the behavior of `AdjustAPOTC`

# APackOfTheClones 1.0.0

## Additions

- Add `vizAPOTC` to replace `clonal_expansion_plot` with some similar arguments but works completely differently with an additional set of argument requirements, to ultimately produce a similar but better visualization.
- Add `RunAPOTC` to store multiple APackOfTheClones runs on the seurat object.
- Add `containsApotcRun` to check for the existence of some run based on an ID.
- Add `getApotcDataIds` to get all APackOfTheClones run IDs.
- Add `getLastApotcDataId` to get the latest APackOfTheClones run ID.
- Add `deleteApotcData` to delete all data associate with some APackOfTheClones run.
- Add `APOTCPlot` to plot APackOfTheClones run results into a ggplot.
- Add `AdjustAPOTC` to modify certain attributes of prior APackOfTheClones runs.
- Add `countCloneSizes` as a convenience function to count clonotype sizes based on the clonecall and allows subsetting of the seurat metadata
- Add `getReductionCentroids` as a convenience function to get the physical centroids of each cell in some reduction in a seurat object.
- Added two new vignettes are on the `pkgdown` website and indexed, and should be viewed in order of `vignette("APackOfTheClones")` and `vignette("APackOfTheClones-runs")`.

## Changes

- ***ALL v0.1.x functions are deprecated/defunct***, and the clonal expansion workflow has changed.
- The latest version two of `scRepertoire` is now a "dependency", and the package is now structured as an extension of `scRepertoire` when it comes to integrating VDJ data, as `scRepertoire` already possesses a mature and common method to do so.
- Package startup message has been modified to notify users about the deprecation and breaking changes.
- All clonal expansion plots will no longer have a title for the default theme

# APackOfTheClones 0.1.4 (github release)

## Additions

- The clonal expansion plotting function now has a new optional argument `reduction` which now allows the user to choose which reduction the circle clonal clusters should be based on. Defaults to `'umap'` but can now be changed to `'tsne'` or `'pca'` given that they have been ran already on the seurat object. The vignette has been updated accordingly as well
- New CRAN badge showing date of latest release on `README.md`

## Changes

- Some testcases have been altered/fixed to pass CRAN's R-CMD check
- Package startup message has been improved

# APackOfTheClones 0.1.3

## Additions

- `clonal_expansion_plot` now displays time elapsed if `verbose = TRUE`
- There are now package startup messages

## Changes

- Many functions have been rewritten in C++, improving the circle packing runtime of `clonal_expansion_plot` 70 ~ 140 fold. For reference, for a dataset with around 2500 viable T cells, the runtime averages 0.1s

# APackOfTheClones 0.1.2

## Additions

- Two new datasets previously in the test folder have now moved to `\data` and are available to users and can be called via `data("mini_seurat_obj")` and `data("mini_clonotype_data")`.

## Changes

- Released package to CRAN.
- Minor documentation changes to adhere to CRAN standards.

# APackOfTheClones 0.1.1 (github release)

## Additions

- A preliminary user vignette can be viewed on the documentation website, but not locally.

## Changes

- An initial version of automated cluster repulsion is correctly implemented and the related arguments in `clonal_expansion_plot` has been "unlocked".
- Size legends are now correctly implemented, and the related arguments have also been "unlocked" in `clonal_expansion_plot`.
- Function documentation and the README in general has been slightly improved. (automatically updated on the pkgdown website)

# APackOfTheClones 0.1.0 (github release)

Initial semi-stable release. The main functions of the package are working with their default parameters. The package currently exports three functions:

- `integrate_tcr`
- `count_clone_sizes`
- `clonal_expansion_plot`

All of which have documentation, including on the documentation site.

Currently, Automated cluster repulsion uses a highly flawed mathematical formula loosely based on force directed graph drawing techniques, the resulting plots are not presentable and the function has been disabled temporarily
