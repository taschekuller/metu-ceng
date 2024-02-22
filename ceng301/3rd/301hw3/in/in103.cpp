#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(113)) << std::endl;
std::cout << "Line no:" << 6 << " " << ((a->remove(220))==false) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(113)) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->insert(479))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(479)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(69)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(165)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->insert(69))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->remove(165)) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->insert(69))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(490)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(69)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(490)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(9)) << std::endl;
a->printPretty();
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 23 << " " << ((a->remove(75))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(9)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(196)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(196)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 29 << " " << ((a->remove(65))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(211)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(228)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(228)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(130)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(167)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->insert(130))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 37 << " " << (a->remove(211)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(264)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(407)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->remove(264)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->remove(130)) << std::endl;
try{std::cout <<"Line no:" << 42 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 43 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 44 << " " << a->getFloor(167) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 45 << " " << a->getCeiling(167) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 46 << " " << a->getNext(167) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 47 << " " << a->get(167) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 48 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 49 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 50 << " " << (a->remove(407)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->remove(167)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(252)) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->insert(48)) << std::endl;
std::cout << "Line no:" << 54 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 55 << " " << (a->remove(224)) << std::endl;
std::cout << "Line no:" << 56 << " " << (a->insert(321)) << std::endl;
std::cout << "Line no:" << 57 << " " << (a->remove(321)) << std::endl;
std::cout << "Line no:" << 58 << " " << ((a->insert(252))==false) << std::endl;
std::cout << "Line no:" << 59 << " " << (a->insert(353)) << std::endl;
std::cout << "Line no:" << 60 << " " << (a->remove(252)) << std::endl;
std::cout << "Line no:" << 61 << " " << (a->remove(48)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->insert(141)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 65 << " " << (a->insert(353)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->remove(141)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(285)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->remove(353)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(18)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(489)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(414)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(489)) << std::endl;
*a=*b;
std::cout << "Line no:" << 74 << " " << ((b->insert(285))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(414)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(158)) << std::endl;
*a=*a;
std::cout << "Line no:" << 78 << " " << ((a->insert(285))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(232)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(353)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->remove(18)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 83 << " " << (b->remove(285)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->remove(131))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 86 << " " << (a->remove(158)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->remove(232)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->remove(414)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(285)) << std::endl;
*b=*b;
*a=*b;
std::cout << "Line no:" << 92 << " " << ((a->remove(30))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(471)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(432)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((b->insert(18))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->remove(432)) << std::endl;
*b=*b;
std::cout << "Line no:" << 98 << " " << ((a->insert(18))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(237)) << std::endl;
try{std::cout <<"Line no:" << 100 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 101 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 102 << " " << a->getFloor(18) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 103 << " " << a->getCeiling(18) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 104 << " " << a->getNext(18) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 105 << " " << a->get(18) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 108 << " " << (a->remove(353)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(172)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 111 << " " << ((b->insert(471))==false) << std::endl;
std::cout << "Line no:" << 112 << " " << (b->insert(490)) << std::endl;
std::cout << "Line no:" << 113 << " " << (b->insert(388)) << std::endl;
std::cout << "Line no:" << 114 << " " << (b->remove(172)) << std::endl;
std::cout << "Line no:" << 115 << " " << (a->remove(18)) << std::endl;
std::cout << "Line no:" << 116 << " " << (a->insert(71)) << std::endl;
std::cout << "Line no:" << 117 << " " << (a->insert(416)) << std::endl;
std::cout << "Line no:" << 118 << " " << ((a->remove(143))==false) << std::endl;
std::cout << "Line no:" << 119 << " " << ((b->insert(353))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << ((b->insert(490))==false) << std::endl;
std::cout << "Line no:" << 121 << " " << ((b->insert(18))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(376)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(302)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(287)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 126 << " " << (b->insert(278)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->remove(287)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(376)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(213)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(71)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(288)) << std::endl;
std::cout << "Line no:" << 132 << " " << ((b->insert(237))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << ((a->remove(316))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(58)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->remove(490)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 137 << " " << (b->insert(272)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->remove(116))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->remove(416)) << std::endl;
std::cout << "Line no:" << 140 << " " << ((a->remove(373))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(257)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(107)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(237)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(140)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->insert(154)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((b->insert(257))==false) << std::endl;
a->printPretty();
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 150 << " " << (a->remove(154)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(435)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(18)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->remove(58)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(408)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->remove(257)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(164)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->remove(272)) << std::endl;
try{std::cout <<"Line no:" << 158 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 159 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 160 << " " << a->getFloor(435) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 161 << " " << a->getCeiling(435) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 162 << " " << a->getNext(435) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 163 << " " << a->get(435) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 164 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 166 << " " << ((b->insert(288))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->remove(107)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((b->insert(408))==false) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->remove(278)) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->insert(159)) << std::endl;
std::cout << "Line no:" << 171 << " " << ((b->insert(408))==false) << std::endl;
std::cout << "Line no:" << 172 << " " << (b->insert(150)) << std::endl;
std::cout << "Line no:" << 173 << " " << (a->remove(435)) << std::endl;
std::cout << "Line no:" << 174 << " " << (b->insert(436)) << std::endl;
std::cout << "Line no:" << 175 << " " << ((a->remove(25))==false) << std::endl;
std::cout << "Line no:" << 176 << " " << (b->remove(388)) << std::endl;
std::cout << "Line no:" << 177 << " " << (a->insert(243)) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->remove(408)) << std::endl;
std::cout << "Line no:" << 179 << " " << ((a->remove(296))==false) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->remove(159)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((a->remove(470))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->insert(163)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(150)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((a->insert(243))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(343)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(243)) << std::endl;
std::cout << "Line no:" << 187 << " " << ((b->insert(353))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(343)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->remove(140)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(436)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((b->insert(213))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(345)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(166)) << std::endl;
std::cout << "Line no:" << 194 << " " << ((b->insert(302))==false) << std::endl;
std::cout << "Line no:" << 195 << " " << ((b->insert(163))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(299)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->remove(345)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->remove(213)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->remove(299)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->remove(302)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(445)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(353)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->remove(166)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((b->insert(163))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << ((a->insert(445))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(323)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(19)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((a->remove(484))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(238)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 211 << " " << ((a->remove(284))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->insert(492)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(35)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->remove(291))==false) << std::endl;
try{std::cout <<"Line no:" << 215 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 216 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 217 << " " << a->getFloor(323) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 218 << " " << a->getCeiling(323) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 219 << " " << a->getNext(323) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 220 << " " << a->get(323) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 221 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 222 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 223 << " " << ((b->insert(238))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
