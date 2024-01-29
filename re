mohammed-mansoor@mohammed-mansoor-20ASA0NBIN:~$ sudo arp-scan --interface wlp2s0 -l
Interface: wlp2s0, type: EN10MB, MAC: 18:4f:32:2d:4c:d1, IPv4: 192.168.0.168
WARNING: Cannot open MAC/Vendor file ieee-oui.txt: Permission denied
WARNING: Cannot open MAC/Vendor file mac-vendor.txt: Permission denied
Starting arp-scan 1.10.0 with 256 hosts (https://github.com/royhills/arp-scan)
192.168.0.1	c4:e9:0a:60:ba:aa	(Unknown)

1 packets received by filter, 0 packets dropped by kernel
Ending arp-scan 1.10.0: 256 hosts scanned in 1.855 seconds (138.01 hosts/sec). 1 responded
mohammed-mansoor@mohammed-mansoor-20ASA0NBIN:~$ sudo nmap 192.168.0.1
Starting Nmap 7.93 ( https://nmap.org ) at 2023-10-24 08:30 IST
Nmap scan report for dlinkrouter.Dlink (192.168.0.1)
Host is up (0.010s latency).
Not shown: 993 closed tcp ports (reset)
PORT     STATE SERVICE
53/tcp   open  domain
80/tcp   open  http
81/tcp   open  hosts2-ns
443/tcp  open  https
4445/tcp open  upnotifyp
8888/tcp open  sun-answerbook
9999/tcp open  abyss
MAC Address: C4:E9:0A:60:BA:AA (D-Link International)

Nmap done: 1 IP address (1 host up) scanned in 0.51 seconds
mohammed-mansoor@mohammed-mansoor-20ASA0NBIN:~$ sudo arp-scan --interface wlp2s0 -l
[sudo] password for mohammed-mansoor: 
Interface: wlp2s0, type: EN10MB, MAC: 18:4f:32:2d:4c:d1, IPv4: 192.168.0.168
WARNING: Cannot open MAC/Vendor file ieee-oui.txt: Permission denied
WARNING: Cannot open MAC/Vendor file mac-vendor.txt: Permission denied
Starting arp-scan 1.10.0 with 256 hosts (https://github.com/royhills/arp-scan)
192.168.0.1	c4:e9:0a:60:ba:aa	(Unknown)

1 packets received by filter, 0 packets dropped by kernel
Ending arp-scan 1.10.0: 256 hosts scanned in 1.857 seconds (137.86 hosts/sec). 1 responded
mohammed-mansoor@mohammed-mansoor-20ASA0NBIN:~$ arp -a
dlinkrouter.Dlink (192.168.0.1) at c4:e9:0a:60:ba:aa [ether] on wlp2s0
mohammed-mansoor@mohammed-mansoor-20ASA0NBIN:~$ history
   29  git config --global user.name "Mohammed Mansoor"
   30  git commit -m "first edit"
   31  git push -u origin main
   32  echo "# MySearchEngine" >> README.md
   33  git init
   34  git add README.md
   35  git commit -m "first commit"
   36  git branch -M main
   37  git remote add origin https://github.com/MohammedMansoor1/MySearchEngine.git
   38  git push -u origin main
   39  git config --global "MohammedMansoor1"
   40  git config --global user.name "MohammedMansoor1"
   41  git config --global user.email "mm846746@gmail.com"
   42  git push -u origin main
   43  git clone -u orign main
   44  git branch
   45  git push main
   46  git remote add origin https://github.com/MohammedMansoor1/MySearchEngine.git
   47  git branch -m main
   48  git commit -m "firstcommit"
   49  git add .
   50  git status
   51  git push -u origin main
   52  gcc main.c
   53  sudo apt install gcc
   54  gcc main.c
   55  ./a.out
   56  gcc main.c
   57  ./a.out
   58  gcc main.c
   59  ./a.out
   60  gcc main.c
   61  ./a.out
   62  ls
   63  cd Desktop/
   64  ls
   65  mkdir ASDC
   66  ls
   67  cd ASDC/
   68  mkdir html
   69  cd html/
   70  mkdir PortFolio
   71  touch index.html
   72  code .
   73  cd ..
   74  cd html/
   75  mkdir Tables
   76  cd Tables/
   77  touch index.html
   78  code .
   79  cd ..
   80  mkdir Form
   81  cd Form/
   82  touch index.html
   83  code .
   84  cd ..
   85  mkdir FinalAss
   86  cd FinalAss/
   87  touch index.html
   88  code .
   89  cd ..
   90  mkdir SecondAss
   91  cd SecondAss/
   92  touch index.html
   93  code .
   94  cd ..
   95  mkdir LastFinalAss
   96  cd LastFinalAss/
   97  touch index.html
   98  code .
   99  cd ..
  100  mkdir css
  101  mkdir Firstday
  102  cd Firstday/
  103  touch index.html
  104  touch style.css
  105  code .
  106  cd ..
  107  cd css/
  108  ls
  109  mkdir CssAss
  110  cd CssAss/
  111  touch index.html
  112  touch style.css
  113  code .
  114  cd ..
  115  mkdir Projects
  116  mkdir GoogleLogin
  117  ls
  118  cd Projects/
  119  ls
  120  cd GoogleLogin/
  121  index.html
  122  touch index.html
  123  touch style.css
  124  touch file.js
  125  code .
  126  cd ..
  127  mkdir GoogleClone
  128  cd GoogleClone/
  129  index.html
  130  touch index.html
  131  code .
  132  touch file.js
  133  code .
  134  ls
  135  cd ..
  136  ls
  137  cd MySearchEngine/
  138  ls
  139  touch style.css
  140  code .
  141  cd ..
  142  mkdir clanguage
  143  cd clanguage/
  144  mkdir 1
  145  ls
  146  cd 1
  147  touch main.c
  148  code .
  149  exit
  150  ls
  151  cd Desktop/
  152  ls
  153  cd ASDC/
  154  ls
  155  mkdir Projects
  156  cd Projects/
  157  ls
  158  mkdir Ebook
  159  cd Ebook/
  160  ls
  161  touch index.html
  162  touch style.css
  163  code .
  164  cd ..
  165  mkdir shopping
  166  cd shopping/
  167  ls
  168  mkdir first
  169  cd firsr
  170  cd first/
  171  touch index.html
  172  touch style.css
  173  code .
  174  exit
  175  cd Desktop/
  176  cd ASDC/
  177  ls
  178  cd Projects/
  179  ls
  180  cd shopping/
  181  ls
  182  cd first/
  183  ls
  184  code .
  185  ls
  186  cd ..
  187  cd Projects/
  188  cd Shopping
  189  mkdir Shopping
  190  cd Shopping/
  191  touch index.html
  192  touch style.css
  193  code .
  194  exit
  195  git init
  196  git branch -m main
  197  git add .
  198  git status
  199  git remote add origin https://github.com/MohammedMansoor1/ShoppingWebSite.git
  200  git commit -m "first commit"
  201  git push -u origin main
  202  cd Desktop/
  203  ls
  204  cd ASDC/
  205  ls
  206  cd Projects/
  207  ls
  208  cd Shopping/
  209  ls
  210  code .
  211  exit
  212  git init
  213  git add .
  214  git status
  215  git push -u origin main
  216  git commit -m "second commit"
  217  git push -u origin main
  218  cd Desktop/
  219  ls
  220  cd Projects/
  221  ls
  222  cd ..
  223  cd ASDC/
  224  cd Projects/
  225  ls
  226  cd Shopping/
  227  ls
  228  code .
  229  exit
  230  cd Desktop/
  231  cd ASDC/
  232  cd Projects/
  233  cd Shopping/
  234  ls
  235  code .
  236  ls
  237  cd payment/
  238  ls
  239  touch index.html
  240  touch style.css
  241  cd ..
  242  ls
  243  code .
  244  exit
  245  code .
  246  cd Desktop/
  247  cd ASDC/
  248  cd Projects/
  249  cd Shopping/
  250  ls
  251  code .
  252  ls
  253  code .
  254  cd ..
  255  cd Shopping/
  256  ls
  257  code .
  258  ls
  259  cd all
  260  ls
  261  code .
  262  ls
  263  code .
  264  exit
  265  git init
  266  git branch -m main
  267  git add .
  268  git status
  269  git commit -m "updated website"
  270  git remote add origin https://github.com/MohammedMansoor1/UpDatedShoppingWebsite.git
  271  git push -u origin main
  272  cd Desktop/
  273  cd ASDC/
  274  cd Projects/
  275  cd Shopping/
  276  ls
  277  cd all
  278  ls
  279  code .
  280  cd ..
  281  mkdir socialmedia
  282  cd socialmedia/
  283  cd all
  284  mkdir all
  285  cd all
  286  touch index.html
  287  code .
  288  git add .
  289  git status
  290  git commit "second commit"
  291  git commit -m "second commit"
  292  git push -u origin main
  293  cd Desktop/
  294  cd ASDC/
  295  cd Projects/
  296  cd Shopping/
  297  ls
  298  cd all
  299  ls
  300  code .
  301  cd ..
  302  ls
  303  cd socialmedia/
  304  ls
  305  cd all/
  306  ls
  307  code .
  308  sudo apt install anydesk
  309  cd ..
  310  cd ..cd ..
  311  cd ..
  312  ls
  313  cd Downloads/
  314  sudo dpkg -i anydesk_*.deb
  315  ls
  316  sudo dpkg -r anydesk
  317  sudo dpkg --purge anydesk
  318  sudo apt autoremove
  319  sudo apt update
  320  sudo apt upgrade
  321  code .
  322  ls
  323  cd Desktop/
  324  ls
  325  cd ASDC/
  326  ls
  327  cd Projects/
  328  ls
  329  cd ChatterBox/
  330  lx
  331  ls
  332  cd all/
  333  ls
  334  code .
  335  cd ..
  336  ls
  337  cd Shopping/
  338  ls
  339  cd all/
  340  ls
  341  code .
  342  exit
  343  ls
  344  cd Desktop/
  345  ls
  346  cd ASDC/
  347  ls
  348  cd Projects/
  349  ls
  350  cd ChatterBox/
  351  ls
  352  cd all/
  353  ls
  354  code .
  355  cd Desktop/
  356  cd ASDC/
  357  cd Projects/
  358  ls
  359  cd ChatterBox/
  360  ls
  361  cd all/
  362  ls
  363  code .
  364  exit
  365  cd Desktop/
  366  cd ASDC/
  367  cd Projects/
  368  ls
  369  exit
  370  ipconfig
  371  iconfig
  372  clear
  373  sudo apt-get install lynx
  374  lynx https://google.com
  375  cd Desktop/
  376  ls
  377  cd ASDC/
  378  ls
  379  cd Projects/
  380  ls
  381  mkdir CartWonders
  382  cd CartWonders/
  383  mkdir all
  384  cd all/
  385  ls
  386  touch homeindex.html
  387  touch style.css
  388  code .
  389  cd ..
  390  code .
  391  exit
  392  cd Desktop/
  393  cd ASDC/
  394  cd Projects/
  395  ls
  396  cd CartWonders/
  397  ls
  398  code .
  399  exit
  400  lynx https://google.com
  401  exit
  402  touch a.html
  403  ls
  404  exit
  405  git status
  406  git --version
  407  git status
  408  git config --list
  409  git status
  410  git config --list
  411  pwd
  412  cd ..
  413  pwd
  414  ls
  415  cd mohammed-mansoor/
  416  ls
  417  cd Desktop
  418  ls
  419  cd Faizaan/
  420  ls
  421  git int
  422  git init
  423  git add README.md
  424  git add .
  425  git commit -m "first commit"
  426  git add .
  427  git commit -m "FIrst commit"
  428  git branch -M main
  429  git remote add origin https://github.com/mohammmedfaizaansharief/code.git
  430  git push -u origin main
  431  git status
  432  git push -u origin main
  433  git status
  434  git config --list
  435  exit
  436  git status
  437  git config --list
  438  git add
  439  git add .
  440  git commit -m "CCFIrst commit"
  441  git push
  442  git push -u origin main
  443  exit
  444  git status
  445  git add .
  446  git commit -m "second commit"
  447  git push
  448  git push -u origin main
  449  git remote add origin https://github.com/mohammmedfaizaansharief/code.git
  450  git push -u origin main
  451  ls
  452  git status
  453  git push
  454  git config --;ist
  455  git config --list
  456  git status
  457  git clone
  458  git add .
  459  git commit -m "sdfsdf"
  460  git push
  461  git remote rm origin
  462  git remote add origin https://github.com/mohammmedfaizaansharief/code.git
  463  git add .
  464  git commit -m "asda"
  465  git push -u origin main
  466  git status
  467  exit
  468  pwd
  469  ls
  470  cd Desktop/
  471  ls
  472  cd Faizaan/
  473  ls
  474  git status
  475  git push
  476  git push -u origin main
  477  git status
  478  ls
  479  exit
  480  gh auth login
  481  ls
  482  cd Desktop/
  483  s
  484  ls
  485  cs Faizaan/
  486  cd Faizaan/
  487  ls
  488  git add . 
  489  gi comomit "thisadfsdf"
  490  git comomit "thisadfsdf"
  491  git commit "thisadfsdf"
  492  git commit -m "thisadfsdf"
  493  git push
  494  git remote set-url origin git@github.com:mohammmedfaizaansharief/code.git
  495  git status
  496  git push
  497  git config --global credential.helper store
  498  git psuh -u origin main
  499  git push -u origin main
  500  git config --global credential.helper cache
  501  git status -u origin main
  502  git push -u origin main
  503  git config --list
  504  git config user.email
  505  git config user.email mm846746@gmail.com
  506  git config user.email
  507  git config user.name MohammedMansoor1
  508  git config --list
  509  ls
  510  rm -rf .git
  511  ls
  512  git status
  513  git config --list
  514  git config user.name MohammedMansoor1
  515  git config --unset credential.helper
  516  git config --list
  517  git push
  518  git credential-manager
  519  git credential-manager uninstall
  520  git --help
  521  cmdkey /list
  522  git config --global credential.helper wincred
  523  git status
  524  git config --list
  525  git credential-cache exit
  526  git status
  527  git config --list
  528  git config --system --unset credential.helper
  529  git remote -v
  530  git remote remove origin
  531  rm -rf ~/.git-credentials
  532  git
  533  git config --list
  534  apt git
  535  git
  536  sudo apt-get remove git
  537  git
  538  git --version
  539  exit
  540  pwd
  541  ls
  542  git status
  543  git config --list
  544  git status
  545  git add .
  546  git commit -m "Third commit"
  547  git push -u origin main
  548  git push
  549  gh auth login
  550  git status
  551  git config --list
  552  git
  553  git --help
  554  sudo apt install git
  555  git status
  556  git --version
  557  git config --list
  558  git config --global --unset credential.helper
  559  git config --list
  560  git config --local --unset credential.helper
  561  git config --unset credential.helper
  562  rm ~/.git-credentials
  563  rm ~/.git-credential
  564  git credential exit
  565  git credential reject
  566  git config --list
  567  git config user.anme
  568  git config user.name
  569  git config user.email
  570  git config user.email mm846746@gmail.com
  571  git config --global user.email mm846746@gmail.com
  572  git config --global user.name MohammedMansoor1
  573  git config --list
  574  git status
  575  exit
  576  lynx https://google.com
  577  exit
  578  code .
  579  cd Desktop/
  580  ls
  581  cd ASDC/
  582  ls
  583  cd css/
  584  ls
  585  cd Grid
  586  ls
  587  code .
  588  ls
  589  mkdir example4
  590  ls
  591  cd example
  592  cd example4
  593  ls
  594  touch index.html
  595  touch style.css
  596  code .
  597  cd ..
  598  ls
  599  code .
  600  ls
  601  mkdir example5
  602  ls
  603  cd example
  604  cd example5
  605  touch index.html
  606  touch style.css
  607  cd ..
  608  code .
  609  ls
  610  mkdir example6
  611  cd example6
  612  touch index.html
  613  touch style.css
  614  cd ..
  615  code .
  616  exit
  617  ls
  618  cd Desktop/
  619  ls
  620  cd ASDC/
  621  ls
  622  cd css/
  623  ls
  624  cd Grid/
  625  ls
  626  code .
  627  ls
  628  mkdir example7
  629  cd example7
  630  touch index.html
  631  touch style.cs
  632  code .
  633  ls
  634  cd ..
  635  mkdir example8
  636  cd example
  637  cd example8
  638  touch index.html
  639  touch style.css
  640  cd ..
  641  code .
  642  cd Desktop/
  643  ls
  644  cd ASDC/
  645  ls
  646  cd css/
  647  ls
  648  cd Grid/
  649  ls
  650  code .
  651  exit
  652  cd Desktop/
  653  cd ASDC/
  654  cd css/
  655  cd Grid/
  656  ls
  657  code .
  658  mkdir example9
  659  cd example9
  660  mkdir index.html
  661  touch index.html
  662  touch style.css
  663  cd ..
  664  code .
  665  cd example9
  666  cd example 9
  667  ls
  668  cd example 9
  669  ls
  670  exit
  671  cd Desktop/
  672  cd ASDC/
  673  cd css/
  674  cd Grid/
  675  code .
  676  mkdir example10
  677  ls
  678  cd example10
  679  ls
  680  touch index.html
  681  touch style.css
  682  cd ..
  683  code .
  684  ipconfig
  685  sudo apt install <net-tools>
  686  sudo apt install net-tools
  687  ipconfig
  688  ip a show eth0
  689  ip a
  690  cd Desktop/
  691  cd ASDC/
  692  cd css/
  693  cd Grid/
  694  code .
  695  cd ..
  696  cd Projects/
  697  ls
  698  cd Ebook/
  699  ls
  700  code .
  701  exit
  702  cd Desktop/
  703  cd ASDC/
  704  cd Projects/
  705  ls
  706  cd Ebook/
  707  code .
  708  ip config
  709  ipconfig
  710  ip a
  711  ip addres
  712  ip address
  713  127.0.0.1/8
  714  if config; exit;  exit; ifconfig
  715  ifconfig
  716  127.0.0.1
  717  clear
  718  exit
  719  cd Desktop/
  720  cd ASDC/
  721  cd Projects/
  722  ls
  723  cd Ebook/
  724  ls
  725  code .
  726  exit
  727  cd Desktop/
  728  cd ASDC/
  729  cd Projects/
  730  cd Ebook/
  731  code .
  732  cd ..
  733  cd..
  734  cd ..
  735  cd css/
  736  ls
  737  cd Grid/
  738  ls
  739  code .
  740  exit
  741  cd De
  742  cd Desktop/
  743  cd ASDC/
  744  cd Pro
  745  cd Projects/
  746  cd Ebook/
  747  ls
  748  code .
  749  exit
  750  cd Desktop/
  751  cd ASDC/
  752  ls
  753  cd Projects/
  754  ls
  755  cd Ebook/
  756  ls
  757  code .
  758  exit
  759  cd Desktop/
  760  cd ASDC/
  761  cd Projects/
  762  cd Ebook/
  763  code .
  764  exit
  765  cd Desktop/
  766  cd ASDC/
  767  cd Projects/
  768  cd Ebook/
  769  code .
  770  exit
  771  cd
  772  cd Desktop/
  773  cd ASDC/
  774  cd Projects/
  775  cd Ebook/
  776  ls
  777  code .
  778  exit
  779  cd Desktop/
  780  cd ASDC/
  781  cd Projects/
  782  cd Ebook/
  783  code .
  784  exit
  785  cd Desktop/
  786  cd ASDC/
  787  cd Projects/
  788  cd Ebook/
  789  code .
  790  exit
  791  cd Desktop/
  792  cd ASDC/
  793  cd Projects/
  794  cd Ebook/
  795  code .
  796  exit
  797  cd Desktop/
  798  cd ASDC/
  799  cd Projects/
  800  cd Ebook/
  801  code .
  802  exit
  803  sudo apt install bettercap.org
  804  sudo apt update
  805  sudo apt install golang git build-essential libpcap-dev libusb-1.0-0-dev libnetfilter-queue-dev
  806  sudo bettercap
  807  bettercap
  808  sudo: bettercap
  809  sudo apt bettercap
  810  sudo apt update
  811  sudo bettercap
  812  ls
  813  cd Do
  814  cd Downloads/
  815  ls
  816  sudo bettercap
  817  sudo su
  818  sudo apt bettercap
  819  sudo apt install bettercap
  820  sudo bettercap
  821  service apache2 start
  822  google start
  823  sudo bettercap
  824  service apache2 start
  825  sudo apt install apache2
  826  service apache2 start
  827  ifconfig
  828  color
  829  mcolor
  830  exit
  831  curl -A "Google/5.0" "https://google.com/search
  832  https://amazon.com/
  833  mobile
  834  exit
  835  exit
  836  sudo google
  837  https://google.com
  838  goog
  839  lynx https://google.com
  840  googler "your search query"
  841  googler "your search query"
  842  sudo apt install googler
  843  googler "your search query"
  844  exit
  845  sudo bettercape
  846  sudo bettercap
  847  set arp.spoof.targets 192.168.43.209
  848  arp.spoof on
  849  arp.spoof.targets off
  850  arp.spoof off
  851  exit
  852  sudo bettercap
  853  exit
  854  ls
  855  cd Desktop/
  856  ls
  857  mkdir mansoor
  858  ls
  859  cd mansoor/
  860  ls
  861  exit
  862  ls
  863  cd Desktop/
  864  ls
  865  mkdir mohsin
  866  mv mohsin mansoor/
  867  ls
  868  cd mansoor/
  869  ls
  870  cd mohsin/
  871  cd ..
  872  rm mansoor
  873  remove mansoot
  874  remove mansoor
  875  sudo help
  876  exit
  877  cd Desktop/
  878  ls
  879  cd ASDC/
  880  ls
  881  cd Projects/
  882  ls
  883  cd Ebook/
  884  ls
  885  code .
  886  exit
  887  cd Desktop/
  888  ls
  889  cd ASDC/
  890  ls
  891  cd Projects/
  892  ls
  893  cd Ebook/
  894  ls
  895  code .
  896  ls
  897  mkdir picture
  898  cd picture/
  899  ls
  900  touch index.html
  901  code .
  902  cd Desktop/
  903  ls
  904  cd ASDC/
  905  ls
  906  cd Projects/
  907  ls
  908  cd ..
  909  ls
  910  cd NewProjects
  911  mkdir NewProjects
  912  ls
  913  cd NewProjects/
  914  ls
  915  mkdir Ebook
  916  ls
  917  cd Ebook/
  918  mkdir Assets
  919  touch index.html
  920  touch style.css
  921  code .
  922  cd ..
  923  cd Projects/
  924  ls
  925  cd Ebook/
  926  ls
  927  code .
  928  exit
  929  sudo apt install nodejs
  930  npm install nextjs
  931  npm install create-react-app
  932  npm
  933  sudo apt-get install npm
  934  npm
  935  sudo su
  936  npm
  937  exit
  938  history
  939  exit
  940  cd Desktop/
  941  cd ASDC/
  942  cd NewProjects/
  943  cd Ebook/
  944  ls
  945  code .
  946  cd ..
  947  cd Projects/
  948  ls
  949  cd Ebook/
  950  ls
  951  code .
  952  exit
  953  ls
  954  cd Desktop/
  955  ls
  956  cd ASDC/
  957  ls
  958  cd js
  959  ls
  960  cd javaclass/
  961  ls
  962  code .
  963  cd D
  964  cd Desktop/
  965  ls
  966  cd ASDC/
  967  ls
  968  cd NewProjects/
  969  ls
  970  cd nav\ for\ test/
  971  ls
  972  code .
  973  cd ..
  974  cd Projects/
  975  ls
  976  cd Ebook/
  977  ls
  978  code .
  979  exit
  980  ls
  981  cd Desktop/
  982  ls
  983  cd ASDC/
  984  ls
  985  cd NewProjects/
  986  ls
  987  cd Ebook/
  988  ls
  989  code .
  990  exit
  991  nodejs
  992  exit
  993  nodejs
  994  clear
  995  node.js
  996  nodejs
  997  exit
  998  cd Desktop/
  999  ls
 1000  cd Projects/
 1001  ls
 1002  mkdir Instantpay
 1003  cd Instantpay/
 1004  mkdir assets
 1005  touch index.html
 1006  touch stle.css
 1007  code .
 1008  arp-scan interface
 1009  sudo apt install arp-scan
 1010  arp -scan interface wlp2s0
 1011  arp -scan interface wlp2s0 -l
 1012  sudo arp-scan --interface wlp2s0 -l
 1013  sudo arp-scan --interface enp0s25 -l
 1014  sudo arp-scan --interface lo -l
 1015  sudo arp-scan --interface wlp2s0 -l
 1016  arp-scan --interface wlp2s0 -l
 1017  sudo arp-scan --interface wlp2s0 -l
 1018  nmap 192.168.0.1
 1019  sudo nmap 192.168.0.1
 1020  sudo install nmap
 1021  sudo apt install nmap
 1022  cls
 1023  clear
 1024  sudo arp-scan --interface wlp2s0 -l
 1025  sudo nmap 192.168.0.1
 1026  sudo arp-scan --interface wlp2s0 -l
 1027  arp -a
 1028  history

