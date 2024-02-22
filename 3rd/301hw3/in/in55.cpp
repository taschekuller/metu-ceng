#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(487)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(487)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(151)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->remove(236))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 10 << " " << (a->insert(419)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(151)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->remove(12))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 15 << " " << ((a->insert(419))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(353)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(433)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(353)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((b->insert(419))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << ((a->remove(279))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->remove(419)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(433)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 24 << " " << ((b->remove(283))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(396)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((b->remove(79))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->insert(396))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->insert(396))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->insert(433)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->insert(433))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(337)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(191)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(253)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(212)) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->insert(237)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(433)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->remove(191)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(121)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(192)) << std::endl;
*a=*b;
std::cout << "Line no:" << 41 << " " << ((a->insert(396))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(356)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(352)) << std::endl;
*b=*b;
std::cout << "Line no:" << 45 << " " << ((b->remove(189))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << ((a->insert(192))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(123)) << std::endl;
std::cout << "Line no:" << 48 << " " << ((b->insert(356))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(12)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(481)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 52 << " " << (a->insert(475)) << std::endl;
std::cout << "Line no:" << 53 << " " << ((a->remove(7))==false) << std::endl;
std::cout << "Line no:" << 54 << " " << (b->remove(337)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(253) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(253) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(253) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(253) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << (a->remove(352)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(26)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->insert(396))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(212)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->remove(26)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(121)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(192)) << std::endl;
*a=*a;
std::cout << "Line no:" << 71 << " " << (b->insert(152)) << std::endl;
*b=*a;
std::cout << "Line no:" << 73 << " " << (b->insert(52)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((a->insert(396))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(433)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->remove(481)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(187)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(77)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(260)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(337)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->remove(237)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->remove(260)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(324)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->insert(52))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->remove(187)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(497)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(233)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(198)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(5)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(374)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 92 << " " << (a->remove(123)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(328)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->remove(497)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(274)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((b->remove(221))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << ((a->insert(233))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(112)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(396)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->insert(487)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(478)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(185)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->insert(301)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(348)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(228)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((a->insert(112))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << ((b->insert(253))==false) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->remove(185)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((a->insert(237))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 111 << " " << ((b->insert(475))==false) << std::endl;
std::cout << "Line no:" << 112 << " " << ((b->remove(266))==false) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(5) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(5) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(5) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(5) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (b->remove(337)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->remove(228)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 125 << " " << ((a->insert(237))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(211)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(330)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(208)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(198)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(381)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(28)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 133 << " " << ((a->insert(5))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << ((a->insert(233))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->remove(478)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 137 << " " << ((b->remove(266))==false) << std::endl;
*b=*a;
*b=*a;
std::cout << "Line no:" << 140 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->remove(274)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((a->insert(324))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(26)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(467)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(285)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->remove(374)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->remove(433)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 149 << " " << ((a->remove(338))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(209)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(19)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 153 << " " << (b->insert(468)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->remove(324)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(114)) << std::endl;
std::cout << "Line no:" << 156 << " " << ((a->insert(237))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << ((a->remove(445))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 159 << " " << (b->insert(163)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((a->insert(253))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(155)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->remove(330)) << std::endl;
*a=*a;
std::cout << "Line no:" << 164 << " " << ((a->insert(5))==false) << std::endl;
std::cout << "Line no:" << 165 << " " << ((b->insert(475))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << ((b->insert(77))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->remove(475)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 169 << " " << ((b->insert(5))==false) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->remove(112)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(328) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(328) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(328) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(328) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << ((b->remove(347))==false) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->insert(37)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((a->remove(241))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(277)) << std::endl;
*a=*a;
std::cout << "Line no:" << 184 << " " << (b->insert(344)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((a->insert(233))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(38)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(384)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(488)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->remove(433)) << std::endl;
std::cout << "Line no:" << 190 << " " << ((b->remove(198))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(270)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(397)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(112)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(499)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->remove(19)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->remove(467)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->remove(274)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((a->remove(226))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(447)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->remove(277)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(253)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(20)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(477)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(483)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(34)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->remove(421)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(379)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(430)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->remove(483)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((b->insert(270))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->remove(330)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(24)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->insert(20))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << ((b->remove(20))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->remove(209)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((a->remove(305))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << ((b->remove(94))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 220 << " " << (b->insert(315)) << std::endl;
a->printPretty();
a->printPretty();
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 225 << " " << (b->remove(114)) << std::endl;
*b=*a;
std::cout << "Line no:" << 227 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->insert(415)) << std::endl;
std::cout << "Line no:" << 229 << " " << ((a->insert(233))==false) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(237) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(237) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(237) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(237) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << (b->remove(77)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
