#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << (a->insert(271)) << std::endl;
std::cout << "Line no:" << 7 << " " << ((a->insert(271))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 10 << " " << ((a->insert(271))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << ((b->remove(497))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->insert(271))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->remove(79))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->remove(1))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(2)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(331)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(6)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 19 << " " << (a->remove(271)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 21 << " " << ((b->remove(294))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (b->insert(335)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(422)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 25 << " " << (a->remove(422)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->insert(2))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << ((b->insert(335))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->insert(6))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 30 << " " << ((a->insert(2))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 32 << " " << (a->insert(463)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((b->remove(220))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 35 << " " << (a->insert(394)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->insert(6))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(255)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(74)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(2)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(415)) << std::endl;
std::cout << "Line no:" << 41 << " " << ((b->insert(335))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 43 << " " << (b->remove(335)) << std::endl;
*a=*b;
a->printPretty();
std::cout << "Line no:" << 46 << " " << (a->insert(453)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(221)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->insert(24)) << std::endl;
*a=*b;
std::cout << "Line no:" << 50 << " " << (b->insert(114)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->remove(221)) << std::endl;
try{std::cout <<"Line no:" << 52 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getFloor(24) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getCeiling(24) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getNext(24) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->get(24) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 60 << " " << (b->insert(356)) << std::endl;
std::cout << "Line no:" << 61 << " " << (b->remove(24)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->remove(24)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(355)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((b->insert(356))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 66 << " " << (a->insert(43)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->remove(356)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->remove(221)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(362)) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->remove(315))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(362)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(196)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 75 << " " << (b->insert(50)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(145)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(118)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->remove(310))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->remove(114)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(228)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((a->insert(145))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(57)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->remove(355)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->insert(118))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 86 << " " << (b->insert(16)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 88 << " " << (b->remove(118)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(384)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(482)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->remove(23))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(433)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 94 << " " << (b->insert(60)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(470)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(166)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->remove(228)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((a->insert(393))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(460)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((b->insert(196))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 102 << " " << ((b->remove(124))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->insert(460))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->remove(16)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(272)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->remove(460)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(173)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->remove(60)) << std::endl;
try{std::cout <<"Line no:" << 110 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getFloor(145) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getCeiling(145) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getNext(145) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->get(145) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 118 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 119 << " " << (a->insert(282)) << std::endl;
std::cout << "Line no:" << 120 << " " << ((b->insert(50))==false) << std::endl;
std::cout << "Line no:" << 121 << " " << ((a->insert(43))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(63)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(173)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->remove(57)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->remove(421)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(338)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(62)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((a->remove(315))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 130 << " " << (b->insert(124)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->remove(43)) << std::endl;
std::cout << "Line no:" << 132 << " " << ((a->insert(166))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->insert(31)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(112)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->remove(470)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(222)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(307)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(466)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(231)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->remove(272)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->remove(112)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((a->remove(205))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(166)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->remove(196)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->insert(343)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(475)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->remove(366))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 149 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(211)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->remove(124)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(106)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->remove(135)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(461)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->remove(50)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(45)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(374)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->remove(231)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(423)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((b->insert(384))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(113)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(316)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->remove(374)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(20)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((a->insert(20))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 167 << " " << (b->remove(461)) << std::endl;
try{std::cout <<"Line no:" << 168 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getFloor(63) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getCeiling(63) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getNext(63) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->get(63) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 177 << " " << (b->insert(453)) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->insert(166)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->remove(316)) << std::endl;
std::cout << "Line no:" << 180 << " " << ((a->remove(299))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 182 << " " << (a->insert(293)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(20)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->remove(423)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((b->insert(453))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->remove(384)) << std::endl;
std::cout << "Line no:" << 187 << " " << ((a->remove(48))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(381)) << std::endl;
*b=*b;
std::cout << "Line no:" << 190 << " " << ((b->insert(433))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->remove(282)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->remove(433)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(152)) << std::endl;
std::cout << "Line no:" << 194 << " " << ((b->insert(381))==false) << std::endl;
std::cout << "Line no:" << 195 << " " << ((a->insert(45))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(160)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(222)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((b->insert(453))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->remove(475)) << std::endl;
std::cout << "Line no:" << 200 << " " << ((a->insert(62))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(131)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(62)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 204 << " " << (b->remove(381)) << std::endl;
*b=*b;
std::cout << "Line no:" << 206 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(87)) << std::endl;
*b=*b;
*b=*a;
std::cout << "Line no:" << 210 << " " << (a->insert(369)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->remove(63)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 213 << " " << (a->insert(119)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(352)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(361)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((a->remove(173))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << ((b->insert(166))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->remove(482)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(307)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->remove(31)) << std::endl;
*a=*b;
b->printPretty();
std::cout << "Line no:" << 223 << " " << ((b->remove(26))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(326)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(479)) << std::endl;
try{std::cout <<"Line no:" << 226 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getFloor(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getCeiling(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getNext(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->get(45) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 234 << " " << ((a->insert(106))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
