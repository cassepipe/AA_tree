# AA_tree

Just a simple AA tree, optimized to be understandable to a beginner

Best resource I could find on the subject (Author : Dave Mount) :
https://www.cs.umd.edu/class/fall2019/cmsc420-0201/Lects/lect06-aa.pdf

Page that rants about how the original paper does not explain much
but is not easy on a beginner either. Discusses implementation though:
https://web.archive.org/web/20070927222455/http://www.eternallyconfuzzled.com/tuts/datastructures/jsw_tut_andersson.aspx

The unhelpful original paper:
https://user.it.uu.se/~arnea/ps/simp.pdf

For now the tree template only accepts default constructible Key and Value types (meaning object types that a have a default constructor).

Also, the implementation tests if the tree needs rebabalancing after a node deletion even if it's a special case that does
need rebalancing (removal of a red node or of a necessarily black single parent node that is).

The class template also define a `print_dot` method that creates a `tree.dot` in the cwd that you can read with `xdot`

Install with `sudo apt install xdot`

Since the DOT format is just text, you can have a look at the file to see how create horizontal links and color some nodes in red.
