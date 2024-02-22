#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(4)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(283)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(92)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(288)) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->remove(393))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(349)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(283)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(268)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->remove(158))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->insert(288))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->insert(4))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(127)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->remove(259))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(243)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(115)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(72)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(115)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(288)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->remove(439))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->insert(243))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->insert(72))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(128)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(92)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(4)) << std::endl;
std::cout << "Line no:" << 29 << " " << ((a->insert(243))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(128)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(379)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(417)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->remove(254))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(328)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 36 << " " << (a->insert(84)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 38 << " " << ((a->remove(136))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
*b=*a;
std::cout << "Line no:" << 42 << " " << (b->insert(326)) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->remove(328)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(218)) << std::endl;
std::cout << "Line no:" << 45 << " " << ((a->insert(72))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->remove(72)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(3)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(384)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(202)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->remove(84)) << std::endl;
std::cout << "Line no:" << 52 << " " << ((a->remove(22))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 54 << " " << (b->insert(392)) << std::endl;
std::cout << "Line no:" << 55 << " " << (b->insert(318)) << std::endl;
try{std::cout <<"Line no:" << 56 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getFloor(127) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getCeiling(127) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getNext(127) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->get(127) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 63 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 64 << " " << (a->remove(328)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(384)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(6)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(9)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(230)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((b->remove(340))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->remove(268)) << std::endl;
*a=*b;
std::cout << "Line no:" << 72 << " " << ((b->remove(431))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->remove(127)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(393)) << std::endl;
std::cout << "Line no:" << 75 << " " << ((a->remove(419))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->remove(379)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(98)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 79 << " " << ((b->insert(392))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 81 << " " << (b->insert(298)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((b->insert(243))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(228)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(358)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->remove(379)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(81)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(436)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(298)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(441)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->remove(228)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->remove(417)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->remove(127)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 94 << " " << (a->insert(244)) << std::endl;
*a=*b;
a->printPretty();
std::cout << "Line no:" << 97 << " " << ((a->insert(98))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 99 << " " << (b->insert(83)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(374)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((b->insert(326))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 103 << " " << ((a->remove(321))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->remove(3)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->remove(374)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->remove(98)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(287)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(168)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(365)) << std::endl;
std::cout << "Line no:" << 110 << " " << ((b->insert(218))==false) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->remove(441)) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->insert(492)) << std::endl;
std::cout << "Line no:" << 113 << " " << ((a->insert(318))==false) << std::endl;
try{std::cout <<"Line no:" << 114 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getFloor(349) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getCeiling(349) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getNext(349) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->get(349) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 121 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 122 << " " << (b->remove(349)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((b->insert(218))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 125 << " " << ((a->remove(7))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << ((a->remove(488))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->remove(436)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(393)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(218)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(100)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(228)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(453)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(492)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(439)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(271)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(439)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(250)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((b->remove(237))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 140 << " " << (b->insert(40)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((a->remove(366))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << ((b->remove(212))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(453)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->remove(287)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->remove(318)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->remove(168))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(58)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->remove(326)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(485)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 152 << " " << ((b->remove(144))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(249)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->remove(93))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 156 << " " << (a->remove(218)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(336)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(400)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 160 << " " << (b->remove(3)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->remove(249)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 163 << " " << (a->insert(253)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(167)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(142)) << std::endl;
std::cout << "Line no:" << 166 << " " << ((a->insert(167))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->remove(243)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((a->remove(244))==false) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(82)) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->insert(47)) << std::endl;
std::cout << "Line no:" << 171 << " " << (a->insert(261)) << std::endl;
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(58) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(58) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(58) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(58) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 180 << " " << (a->remove(100)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(87)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->insert(305)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(326)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 185 << " " << (b->remove(228)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(118)) << std::endl;
std::cout << "Line no:" << 187 << " " << ((b->insert(345))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(100)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((a->insert(261))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->remove(453)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(194)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 193 << " " << (a->insert(403)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 195 << " " << (a->insert(61)) << std::endl;
std::cout << "Line no:" << 196 << " " << ((b->remove(241))==false) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(186)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((b->insert(100))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(92)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->remove(167)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(268)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(40)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(197)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(101)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(13)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(399)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((a->insert(168))==false) << std::endl;
*b=*b;
*a=*a;
std::cout << "Line no:" << 210 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->remove(336)) << std::endl;
std::cout << "Line no:" << 212 << " " << ((b->remove(472))==false) << std::endl;
b->printPretty();
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 216 << " " << (a->insert(65)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->insert(240)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(268)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(268)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->remove(349)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(272)) << std::endl;
std::cout << "Line no:" << 222 << " " << ((b->insert(392))==false) << std::endl;
std::cout << "Line no:" << 223 << " " << ((a->insert(98))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->remove(345)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->remove(197)) << std::endl;
std::cout << "Line no:" << 226 << " " << ((a->insert(101))==false) << std::endl;
std::cout << "Line no:" << 227 << " " << ((b->remove(272))==false) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->remove(186)) << std::endl;
std::cout << "Line no:" << 229 << " " << ((b->insert(318))==false) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(453) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(453) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(453) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(453) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << (a->insert(321)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
