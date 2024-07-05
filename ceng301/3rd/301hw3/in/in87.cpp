#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(94))==false) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(32)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(32)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->remove(491))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(130)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(130)) << std::endl;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
b->printPretty();
std::cout << "Line no:" << 15 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(159)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((b->insert(159))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << (b->insert(494)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(376)) << std::endl;
std::cout << "Line no:" << 20 << " " << (b->insert(285)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 22 << " " << ((a->remove(291))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->insert(285))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 25 << " " << (a->insert(233)) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->insert(20)) << std::endl;
std::cout << "Line no:" << 27 << " " << (b->remove(285)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(241)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(165)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(297)) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->insert(453)) << std::endl;
std::cout << "Line no:" << 32 << " " << ((b->remove(440))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->insert(297))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << ((b->remove(82))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(275)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 37 << " " << (b->insert(143)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->remove(20)) << std::endl;
b->printPretty();
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 42 << " " << ((b->remove(67))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 44 << " " << ((a->remove(357))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << ((b->insert(393))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->insert(234)) << std::endl;
std::cout << "Line no:" << 47 << " " << ((b->remove(434))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << ((b->insert(159))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 50 << " " << (b->insert(168)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->remove(297)) << std::endl;
b->printPretty();
*b=*a;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(241) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(241) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(241) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(241) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
*b=*a;
std::cout << "Line no:" << 63 << " " << (a->remove(143)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(494)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(241)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(293)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->remove(376)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->remove(376)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((b->insert(165))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(71)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(171)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(453)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->remove(393)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(203)) << std::endl;
std::cout << "Line no:" << 75 << " " << ((a->remove(187))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(62)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(397)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(203)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->remove(71)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(233)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(360)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((b->insert(159))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->remove(62)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 85 << " " << ((b->insert(241))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->remove(165)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(103)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->remove(103)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->remove(143)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->remove(360)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->remove(357))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 94 << " " << (b->insert(90)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((b->insert(241))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(39)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(227)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(246)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(280)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->insert(164)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->remove(171)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 103 << " " << ((a->insert(293))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(335)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(296)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(260)) << std::endl;
*b=*b;
std::cout << "Line no:" << 108 << " " << (a->insert(242)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->insert(243)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->insert(219)) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->insert(109)) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(243) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(243) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(243) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(243) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (a->remove(293)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((a->insert(275))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(255)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 125 << " " << (b->remove(397)) << std::endl;
std::cout << "Line no:" << 126 << " " << ((b->remove(84))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->remove(243)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(499)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(394)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(159)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 132 << " " << ((b->insert(499))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << ((a->remove(399))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->remove(219)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->remove(233)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(311)) << std::endl;
*a=*a;
std::cout << "Line no:" << 138 << " " << (a->remove(394)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->remove(255)) << std::endl;
std::cout << "Line no:" << 140 << " " << ((a->remove(128))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(46)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(389)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(335)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(106)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(39)) << std::endl;
*a=*a;
std::cout << "Line no:" << 147 << " " << (a->remove(242)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->remove(46)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->remove(90)) << std::endl;
std::cout << "Line no:" << 150 << " " << ((a->insert(389))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(196)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(179)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(319)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(215)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(321)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(115)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((b->insert(260))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(497)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 160 << " " << (b->insert(225)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(349)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->remove(393)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->remove(311)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->remove(39)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->insert(4)) << std::endl;
std::cout << "Line no:" << 166 << " " << ((b->insert(499))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->remove(179)) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(390)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->remove(296)) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->insert(424)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(275) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(275) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(275) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(275) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (b->insert(216)) << std::endl;
std::cout << "Line no:" << 180 << " " << ((a->insert(227))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(134)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->remove(118))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << ((b->insert(39))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(485)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 186 << " " << (a->insert(439)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(204)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(478)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 190 << " " << (a->insert(60)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(410)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((b->insert(246))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(497)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(60)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->remove(280)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->remove(246)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(349)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(132)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((b->remove(371))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(86)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(423)) << std::endl;
*a=*a;
std::cout << "Line no:" << 203 << " " << (b->insert(418)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(113)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->remove(39)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((b->insert(494))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 208 << " " << ((b->remove(208))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(63)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->remove(485)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 212 << " " << (b->remove(106)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(171)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(174)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->remove(204)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(451)) << std::endl;
*a=*b;
std::cout << "Line no:" << 218 << " " << (b->insert(299)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 220 << " " << (b->insert(164)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->remove(164)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->remove(418)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(158)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->remove(159)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(42)) << std::endl;
std::cout << "Line no:" << 226 << " " << (b->insert(492)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 228 << " " << (a->insert(84)) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(451) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(451) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(451) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(451) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << (b->insert(299)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
