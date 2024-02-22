#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(124)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(124)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(172)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(54)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(299)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
a->printPretty();
std::cout << "Line no:" << 13 << " " << (a->insert(425)) << std::endl;
std::cout << "Line no:" << 14 << " " << (b->insert(369)) << std::endl;
std::cout << "Line no:" << 15 << " " << (b->insert(325)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 17 << " " << (a->insert(105)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(29)) << std::endl;
std::cout << "Line no:" << 19 << " " << (b->insert(335)) << std::endl;
std::cout << "Line no:" << 20 << " " << ((a->insert(425))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->remove(335)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((a->insert(172))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 24 << " " << ((a->insert(369))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << (b->remove(325)) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->remove(369)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((b->remove(154))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(288)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(369)) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(98)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(369)) << std::endl;
std::cout << "Line no:" << 32 << " " << ((b->remove(167))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->remove(187))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(4)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((b->insert(98))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(48)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 38 << " " << ((a->insert(369))==false) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(288)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 42 << " " << (a->remove(325)) << std::endl;
*b=*a;
std::cout << "Line no:" << 44 << " " << ((b->insert(369))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << ((a->remove(50))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->remove(48)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(330)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(330)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->remove(48)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(470)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 52 << " " << (a->remove(470)) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->insert(366)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(369) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(369) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(369) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(369) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << ((b->insert(369))==false) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->remove(366)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((b->remove(138))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(84)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(300)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->insert(389)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(407)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(136)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(262)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(300)) << std::endl;
std::cout << "Line no:" << 73 << " " << ((a->insert(224))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(369)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(150)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(112)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(53)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(144)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(150)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->remove(136)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(219)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(74)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(10)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->remove(144)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(456)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(342)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(407)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(224)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((a->remove(407))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 92 << " " << (b->insert(45)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 94 << " " << (a->insert(104)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((a->remove(390))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 97 << " " << ((b->insert(112))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << ((a->remove(440))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << ((b->remove(330))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << ((b->insert(112))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 102 << " " << (a->insert(307)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 104 << " " << ((b->insert(389))==false) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(27)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(421)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->remove(112)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 109 << " " << (b->remove(421)) << std::endl;
std::cout << "Line no:" << 110 << " " << ((b->insert(342))==false) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->remove(262)) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(369) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(369) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(369) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(369) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (a->remove(369)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->insert(416)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->remove(456)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->remove(342)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(96)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(303)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(279)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(487)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(77)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(443)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 131 << " " << (a->remove(443)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(299)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 134 << " " << (b->insert(89)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(170)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(53)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((a->insert(303))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(81)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->remove(109))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->remove(416)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->remove(89)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(209)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(215)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->remove(209)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(104)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->remove(45)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->insert(27))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->remove(10)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(183)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(64)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(84)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->remove(219)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(79)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->remove(279)) << std::endl;
std::cout << "Line no:" << 155 << " " << ((a->insert(307))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(246)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->remove(84)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(332)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->remove(170)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(306)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(392)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->remove(183)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->remove(74)) << std::endl;
std::cout << "Line no:" << 164 << " " << ((b->insert(389))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 166 << " " << (a->remove(77)) << std::endl;
std::cout << "Line no:" << 167 << " " << ((a->insert(64))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(45)) << std::endl;
std::cout << "Line no:" << 169 << " " << ((b->insert(215))==false) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(393) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(393) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(393) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(393) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << (b->remove(389)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->remove(306)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(363)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(415)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((a->remove(166))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(392)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 185 << " " << ((a->insert(303))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << ((b->remove(231))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << ((a->remove(130))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(250)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->remove(487)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(201)) << std::endl;
*b=*b;
std::cout << "Line no:" << 192 << " " << (a->insert(362)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(232)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(366)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((a->insert(246))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 197 << " " << (a->remove(303)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((a->insert(332))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(428)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->remove(362)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(210)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(365)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->remove(307)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->remove(393)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 206 << " " << (a->remove(299)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->remove(246)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 209 << " " << ((a->insert(366))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(197)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->remove(197)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(250)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(472)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->insert(232))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(451)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 217 << " " << (a->remove(366)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(345)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 220 << " " << (a->insert(236)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((b->insert(428))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(484)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(344)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(214)) << std::endl;
std::cout << "Line no:" << 225 << " " << ((a->insert(232))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 227 << " " << (b->insert(168)) << std::endl;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(345) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(345) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(345) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(345) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << (a->insert(311)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
