#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(159)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(159)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(446)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 9 << " " << (a->remove(446)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(462)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(152)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->remove(316))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(176)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->remove(176)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(428)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 17 << " " << ((a->insert(462))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(247)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->insert(428))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 21 << " " << (a->insert(295)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(188)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(25)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->insert(462))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 26 << " " << (a->remove(428)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->remove(219))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(25)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 31 << " " << (b->insert(483)) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->insert(183)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((b->remove(455))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 35 << " " << (b->remove(483)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(131)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(295)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(203)) << std::endl;
std::cout << "Line no:" << 39 << " " << ((a->insert(152))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << ((a->remove(331))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << ((a->insert(247))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(279)) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(291)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(219)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->insert(183)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((a->insert(295))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(285)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->insert(361)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->remove(291)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->insert(108)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 52 << " " << (b->remove(203)) << std::endl;
std::cout << "Line no:" << 53 << " " << ((b->insert(183))==false) << std::endl;
std::cout << "Line no:" << 54 << " " << ((b->insert(183))==false) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(219) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(219) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(219) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(219) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << (a->remove(462)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(70)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(296)) << std::endl;
*a=*b;
std::cout << "Line no:" << 67 << " " << (a->insert(468)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(367)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 71 << " " << (b->insert(174)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 74 << " " << (b->insert(9)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(187)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 77 << " " << (b->remove(183)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->insert(367))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << ((a->insert(187))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(349)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(420)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(135)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((b->insert(296))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(224)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 86 << " " << (b->remove(279)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(170)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(5)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(423)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(228)) << std::endl;
*b=*b;
std::cout << "Line no:" << 92 << " " << (b->remove(361)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->remove(108)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->remove(170)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(185)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((b->insert(174))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 98 << " " << (a->insert(4)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(18)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->remove(183)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 102 << " " << (a->remove(224)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(420)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(169)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(140)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(230)) << std::endl;
std::cout << "Line no:" << 107 << " " << ((a->insert(5))==false) << std::endl;
std::cout << "Line no:" << 108 << " " << ((a->insert(279))==false) << std::endl;
std::cout << "Line no:" << 109 << " " << ((b->remove(227))==false) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->remove(423)) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->insert(82)) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->insert(48)) << std::endl;
std::cout << "Line no:" << 113 << " " << ((a->insert(468))==false) << std::endl;
try{std::cout <<"Line no:" << 114 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getFloor(230) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getCeiling(230) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getNext(230) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->get(230) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 121 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 122 << " " << ((a->insert(48))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->remove(183)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->remove(174)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 126 << " " << ((a->remove(83))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(285)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((b->insert(285))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(214)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((a->insert(187))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << ((a->insert(296))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 133 << " " << (a->insert(15)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 135 << " " << (a->insert(131)) << std::endl;
std::cout << "Line no:" << 136 << " " << ((a->insert(187))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(269)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(434)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->insert(283)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(41)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 142 << " " << (a->remove(70)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(314)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->remove(296)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->insert(488)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(29)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->remove(82)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 150 << " " << (b->remove(41)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 152 << " " << ((a->remove(200))==false) << std::endl;
a->printPretty();
*b=*b;
std::cout << "Line no:" << 155 << " " << ((b->remove(198))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(92)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(49)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(339)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 160 << " " << (a->remove(468)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(67)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(222)) << std::endl;
*a=*b;
std::cout << "Line no:" << 164 << " " << (b->insert(147)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((a->remove(178))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(360)) << std::endl;
*a=*a;
std::cout << "Line no:" << 168 << " " << (a->insert(147)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(474)) << std::endl;
std::cout << "Line no:" << 170 << " " << ((a->insert(147))==false) << std::endl;
std::cout << "Line no:" << 171 << " " << (b->insert(468)) << std::endl;
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(169) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(169) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(169) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(169) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 180 << " " << (a->insert(499)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 182 << " " << (a->insert(9)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(449)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(283)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(344)) << std::endl;
std::cout << "Line no:" << 187 << " " << ((b->remove(34))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->remove(434)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((b->insert(92))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(410)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->remove(29)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(368)) << std::endl;
*a=*b;
std::cout << "Line no:" << 194 << " " << ((a->remove(322))==false) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->remove(344)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 198 << " " << (b->insert(377)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((a->insert(314))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(215)) << std::endl;
b->printPretty();
*b=*a;
std::cout << "Line no:" << 203 << " " << (b->insert(321)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((b->insert(314))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(375)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(423)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 208 << " " << (b->insert(452)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(147)) << std::endl;
*b=*a;
std::cout << "Line no:" << 211 << " " << (a->remove(169)) << std::endl;
std::cout << "Line no:" << 212 << " " << ((b->insert(468))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(410)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(134)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->remove(344)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->remove(327))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << ((a->insert(18))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->remove(185)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(101)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(165)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((a->remove(341))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->remove(147)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->remove(222)) << std::endl;
*b=*b;
std::cout << "Line no:" << 225 << " " << (a->insert(328)) << std::endl;
std::cout << "Line no:" << 226 << " " << ((b->remove(38))==false) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->insert(282)) << std::endl;
std::cout << "Line no:" << 228 << " " << (a->insert(200)) << std::endl;
b->printPretty();
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(29) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(29) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(29) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(29) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
