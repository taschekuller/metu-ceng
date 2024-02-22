#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(238)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 8 << " " << (a->remove(238)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(276)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(148)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(276)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(148)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(301)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->remove(201))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 16 << " " << (a->insert(229)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(175)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(147)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(68)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(229)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(150)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((a->remove(305))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->insert(301))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 26 << " " << ((a->remove(328))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(175)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->insert(175))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << ((b->remove(371))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->insert(68))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 32 << " " << ((a->insert(301))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(21)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->insert(175))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->insert(309)) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->insert(454)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((b->remove(48))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(226)) << std::endl;
std::cout << "Line no:" << 39 << " " << ((a->remove(84))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << ((a->remove(256))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(38)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(38)) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(191)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(422)) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->insert(161)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 48 << " " << ((a->insert(21))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(53)) << std::endl;
std::cout << "Line no:" << 50 << " " << ((b->remove(166))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->insert(72)) << std::endl;
*b=*b;
std::cout << "Line no:" << 53 << " " << (a->insert(307)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(226) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(226) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(226) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(226) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (b->insert(111)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->remove(422)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((a->remove(132))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 66 << " " << ((a->insert(307))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->insert(345)) << std::endl;
std::cout << "Line no:" << 68 << " " << ((a->insert(53))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->remove(161)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->remove(72)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->remove(34)) << std::endl;
std::cout << "Line no:" << 72 << " " << ((b->insert(454))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(457)) << std::endl;
*b=*b;
std::cout << "Line no:" << 75 << " " << (a->insert(279)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((b->insert(345))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->remove(309)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((b->remove(373))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->remove(226)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->remove(345)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->remove(457)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(383)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(161)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->remove(478))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << ((a->insert(175))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->remove(454)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(79)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(151)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(205)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 91 << " " << (a->remove(151)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(79)) << std::endl;
std::cout << "Line no:" << 93 << " " << ((a->remove(44))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(106)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 96 << " " << (b->remove(111)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(352)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((a->insert(175))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->remove(106)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(476)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(371)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->remove(147)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->remove(383)) << std::endl;
*a=*a;
std::cout << "Line no:" << 106 << " " << (a->insert(191)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(304)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->remove(352)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((b->insert(161))==false) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->remove(224)) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->insert(129)) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(150) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(150) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(150) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(150) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
std::cout << "Line no:" << 121 << " " << (a->insert(353)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(485)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(180)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(204)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((b->insert(161))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(97)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(133)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(279)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(12)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(158)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 132 << " " << ((b->remove(335))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(494)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->remove(279)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(70)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->insert(402)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(366)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(361)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->insert(175))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(102)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 142 << " " << ((a->remove(144))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << ((a->remove(363))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(401)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 146 << " " << (b->remove(97)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(288)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->insert(175)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->remove(133)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(1)) << std::endl;
*b=*a;
std::cout << "Line no:" << 153 << " " << ((a->insert(141))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->insert(301))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(187)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(21)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(444)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->remove(175)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->remove(141)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((a->insert(301))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(103)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->remove(476)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->insert(454)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(497)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(481)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->remove(204)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->remove(175)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->remove(129)) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(481) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(481) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(481) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(481) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << (b->insert(354)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 180 << " " << ((a->remove(237))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(146)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->remove(205)) << std::endl;
std::cout << "Line no:" << 183 << " " << ((a->insert(158))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->remove(248)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((b->remove(430))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 187 << " " << ((a->insert(53))==false) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 190 << " " << (a->insert(491)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(108)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(263)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(358)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(416)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((a->insert(103))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(478)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->remove(53)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((a->remove(487))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(185)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(368)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((a->insert(301))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(353)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((b->remove(46))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(249)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((a->insert(358))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(215)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(125)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((a->insert(158))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 210 << " " << (b->remove(205)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->remove(68)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->insert(209)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->remove(279)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(29)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->remove(129)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(125)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((a->remove(385))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(81)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(357)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(53)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(250)) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(68)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(332)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->remove(263)) << std::endl;
std::cout << "Line no:" << 225 << " " << ((b->insert(141))==false) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(454)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->remove(301)) << std::endl;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(416) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(416) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(416) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(416) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << (b->remove(125)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
