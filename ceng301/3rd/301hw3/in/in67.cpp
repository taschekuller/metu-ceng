#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << (a->insert(310)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(310)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(111)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(111)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(285)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(285))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(285)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 14 << " " << (a->insert(360)) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->remove(488))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(87)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(37)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 20 << " " << (a->insert(168)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(389)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(87)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(73)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->insert(360))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 27 << " " << (a->insert(201)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(37)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(143)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(379)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 32 << " " << ((a->insert(73))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(176)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(98)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 37 << " " << (b->insert(176)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->remove(176)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(354)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(374)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->remove(354)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(98)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->insert(168))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(457)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->insert(26)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((b->insert(98))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->remove(98)) << std::endl;
std::cout << "Line no:" << 48 << " " << ((a->insert(98))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(420)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->remove(420)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->insert(426)) << std::endl;
try{std::cout <<"Line no:" << 52 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getFloor(73) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getCeiling(73) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getNext(73) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->get(73) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 60 << " " << (b->insert(295)) << std::endl;
*b=*b;
std::cout << "Line no:" << 62 << " " << (b->insert(500)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->remove(379)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(90)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(90)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(157)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->insert(334)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(133)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->remove(426)) << std::endl;
std::cout << "Line no:" << 70 << " " << ((b->remove(61))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(118)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(201)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->remove(133)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((a->remove(58))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(143)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((a->remove(397))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << ((a->remove(96))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(326)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((a->insert(389))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->remove(500)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->remove(157)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(390)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 84 << " " << ((b->insert(334))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->remove(457)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(213)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(98)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->remove(390)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(492)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(475)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(239)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(25)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(51)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->remove(25)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((b->remove(381))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->insert(73))==false) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 99 << " " << ((a->insert(360))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << ((b->remove(92))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(350)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(94)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(137)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 105 << " " << ((b->insert(26))==false) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(414)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 108 << " " << (a->remove(73)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->insert(45)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(245)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(51) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(51) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(51) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(51) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << (a->insert(379)) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->insert(274)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 122 << " " << (a->remove(94)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(45)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(329)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((a->insert(379))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(250)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(360)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(38)) << std::endl;
std::cout << "Line no:" << 129 << " " << ((b->insert(492))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << ((a->remove(425))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 132 << " " << (b->insert(403)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 134 << " " << (a->remove(360)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(114)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(137)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(66)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->insert(475))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->remove(26)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(60)) << std::endl;
*a=*a;
std::cout << "Line no:" << 142 << " " << (a->remove(374)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(334)) << std::endl;
std::cout << "Line no:" << 144 << " " << ((b->insert(295))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->insert(403))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->remove(213)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((a->insert(245))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->remove(205))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 151 << " " << (a->remove(114)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->remove(245)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(92)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->remove(170))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->remove(92)) << std::endl;
std::cout << "Line no:" << 156 << " " << ((a->insert(250))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 158 << " " << (b->remove(239)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(132)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 161 << " " << ((b->remove(21))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 163 << " " << (a->remove(118)) << std::endl;
std::cout << "Line no:" << 164 << " " << ((a->insert(389))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 166 << " " << (b->insert(354)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->remove(168)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->insert(356)) << std::endl;
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(250) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(250) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(250) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(250) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 177 << " " << ((b->insert(414))==false) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->insert(147)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->insert(415)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->remove(329)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(132)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->insert(38))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(349)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((b->insert(274))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << ((b->insert(354))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(213)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 188 << " " << (a->remove(60)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(432)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(67)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((a->insert(250))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(407)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 194 << " " << (a->insert(63)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->remove(389)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->remove(375)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((b->remove(445))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(124)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((b->insert(38))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 201 << " " << (a->insert(20)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(66)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(197)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 205 << " " << ((b->remove(137))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->remove(38)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((b->remove(367))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((a->remove(372))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(186)) << std::endl;
*a=*a;
std::cout << "Line no:" << 212 << " " << ((a->remove(373))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->remove(356)) << std::endl;
*b=*b;
std::cout << "Line no:" << 215 << " " << ((a->insert(213))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->remove(352))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 218 << " " << (a->insert(405)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(405)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(323)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(189)) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->remove(349)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->remove(189)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 225 << " " << (a->insert(430)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(120)) << std::endl;
try{std::cout <<"Line no:" << 227 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getFloor(186) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getCeiling(186) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getNext(186) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->get(186) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 235 << " " << (a->insert(430)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
