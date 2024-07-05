#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(115)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(172)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 8 << " " << (a->remove(172)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(289)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->insert(115))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 13 << " " << ((a->insert(289))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (b->insert(434)) << std::endl;
std::cout << "Line no:" << 15 << " " << (b->insert(253)) << std::endl;
std::cout << "Line no:" << 16 << " " << ((b->insert(253))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << ((b->remove(237))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << (b->insert(232)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->remove(289)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(459)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 22 << " " << ((b->remove(230))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(143)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->insert(459))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << ((b->insert(232))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->insert(143))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->remove(201))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->remove(434)) << std::endl;
std::cout << "Line no:" << 29 << " " << ((b->remove(415))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(64)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(187)) << std::endl;
std::cout << "Line no:" << 32 << " " << ((a->insert(115))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (b->insert(292)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 35 << " " << (b->remove(232)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(78)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(167)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->remove(292)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(115)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(387)) << std::endl;
*b=*a;
std::cout << "Line no:" << 42 << " " << (b->insert(494)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->insert(143))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(320)) << std::endl;
a->printPretty();
*b=*a;
std::cout << "Line no:" << 47 << " " << (a->insert(82)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->insert(288)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(27)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->insert(161)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->remove(64)) << std::endl;
std::cout << "Line no:" << 52 << " " << ((b->insert(459))==false) << std::endl;
std::cout << "Line no:" << 53 << " " << (b->remove(161)) << std::endl;
std::cout << "Line no:" << 54 << " " << ((b->insert(27))==false) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(82) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(82) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(82) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(82) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << ((b->remove(1))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << ((a->insert(459))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(38)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 67 << " " << ((b->remove(179))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(82)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((a->remove(24))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 71 << " " << (b->remove(64)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(310)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(235)) << std::endl;
*b=*a;
std::cout << "Line no:" << 75 << " " << (b->remove(167)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((a->remove(498))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << ((b->insert(310))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(481)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(449)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(301)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->remove(235)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(491)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->remove(187)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(472)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(143)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 87 << " " << ((a->insert(459))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 89 << " " << (b->insert(329)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((a->insert(167))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->remove(459)) << std::endl;
*a=*a;
std::cout << "Line no:" << 93 << " " << (a->remove(187)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->remove(143)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(440)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(249)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(112)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(4)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(143)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((a->remove(123))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << ((b->remove(99))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(103)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->insert(366)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(152)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(119)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(145)) << std::endl;
std::cout << "Line no:" << 107 << " " << ((b->insert(143))==false) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(439)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(244)) << std::endl;
std::cout << "Line no:" << 110 << " " << ((a->insert(439))==false) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->insert(264)) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->remove(145)) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(310) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(310) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(310) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(310) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (a->remove(112)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(77)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->remove(459)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->remove(264)) << std::endl;
*a=*b;
std::cout << "Line no:" << 126 << " " << (a->insert(342)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 129 << " " << (a->insert(165)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->remove(4)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(88)) << std::endl;
std::cout << "Line no:" << 132 << " " << ((b->insert(103))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(395)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->remove(249)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(275)) << std::endl;
std::cout << "Line no:" << 136 << " " << ((b->insert(88))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << ((b->insert(244))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 139 << " " << (b->insert(381)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->remove(77)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(401)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(72)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((b->insert(143))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(282)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->remove(366)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((b->insert(381))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->insert(88))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->insert(328)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->remove(152)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(348)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(386)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(347)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(446)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->remove(143)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 157 << " " << (b->insert(74)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->remove(310)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(454)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(374)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(178)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(447)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(403)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((b->insert(381))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(151)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(108)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->insert(144)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (a->insert(387)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(412)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(331)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->remove(244)) << std::endl;
std::cout << "Line no:" << 183 << " " << ((a->insert(347))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << ((b->remove(294))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << ((a->insert(144))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(48)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(7)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(416)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(37)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(235)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->remove(348)) << std::endl;
*a=*b;
std::cout << "Line no:" << 193 << " " << ((a->insert(374))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << ((a->insert(454))==false) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(125)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(218)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->remove(403)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(131)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->remove(74)) << std::endl;
std::cout << "Line no:" << 200 << " " << ((a->insert(7))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->remove(328)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(313)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->remove(412)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->remove(374)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(259)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(176)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->remove(72)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(288)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(78)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(37)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 213 << " " << (a->remove(131)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->insert(176))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << ((a->remove(46))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->remove(475))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 218 << " " << ((a->insert(395))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->remove(72)) << std::endl;
std::cout << "Line no:" << 220 << " " << ((b->insert(218))==false) << std::endl;
std::cout << "Line no:" << 221 << " " << ((a->insert(454))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 223 << " " << ((a->remove(197))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << ((b->insert(103))==false) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->remove(454)) << std::endl;
*a=*a;
std::cout << "Line no:" << 227 << " " << (b->insert(97)) << std::endl;
std::cout << "Line no:" << 228 << " " << ((a->insert(275))==false) << std::endl;
std::cout << "Line no:" << 229 << " " << (a->insert(443)) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(78) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(78) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(78) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(78) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << ((a->insert(275))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
