# ASTRAL-SIESTA

A version of the ASTRAL algorithm that returns multiple optimal trees using the SIESTA technique

To build ASTRAL-SIESTA you will first need [phylokit](https://github.com/pranjalv123/phylokit) and [phylonaut](https://github.com/pranjalv123/phylonaut),

    mkdir build
    cd build
    cmake ../src
    make


You also need ASTRAL in the same folder as ASTRAL-SIESTA. So if you are in the folder with the SVDquest executable, there should be a file at the path Astral/astral.*.jar, with the exact name depending on the ASTRAL version


To run ASTRAL-SIESTA, run

    ASTRAL-SIESTA -i <input gene trees> -a <input alignment> -o <output file>


ASTRAL-SIESTA* uses [SIESTA](https://link.springer.com/chapter/10.1007/978-3-319-67979-2_13) to generate strict, greedy, and majority consensus trees of all optimal trees, as well as a single arbitrarily chosen optimal tree.
If for some reason this is a problem, you can disable these with --nogreedy, --nostrict, and --nomajority options.



You can also use the `--score` option to score a tree like this:

     ASTRAL-SIESTA --score -a <input alignment> -o <output file>