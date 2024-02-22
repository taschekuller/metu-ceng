#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(16)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(178)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(16)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(329)) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->insert(178))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(431)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(287)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(150)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(415)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->remove(130))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->insert(431))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(119)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(217)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(186)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(188)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(143)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(45)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 23 << " " << (a->remove(287)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(431)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->insert(217))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(33)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 29 << " " << (a->remove(119)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(210)) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->insert(415))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(282)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 35 << " " << (b->remove(415)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 37 << " " << (b->insert(455)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(251)) << std::endl;
std::cout << "Line no:" << 39 << " " << ((b->insert(455))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->remove(186)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 42 << " " << (a->insert(106)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->remove(45)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((a->insert(188))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 46 << " " << (b->remove(210)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->remove(33)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(342)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(167)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(300)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->insert(238)) << std::endl;
std::cout << "Line no:" << 52 << " " << (b->insert(355)) << std::endl;
std::cout << "Line no:" << 53 << " " << (b->insert(291)) << std::endl;
std::cout << "Line no:" << 54 << " " << ((a->insert(291))==false) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(217) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(217) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(217) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(217) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 64 << " " << (b->insert(18)) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->insert(167))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(345)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(221)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(234)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 71 << " " << ((a->insert(150))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(333)) << std::endl;
*a=*b;
std::cout << "Line no:" << 74 << " " << (a->insert(39)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(282)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 78 << " " << (b->insert(368)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->remove(355)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((a->insert(342))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(383)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->remove(300)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->remove(291)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(466)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(87)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((a->insert(345))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(39)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(178)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(127)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(79)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(65)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->remove(217)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(434)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->remove(65)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(229)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->insert(178))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(484)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(300)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(221)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(60)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(228)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(67)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 104 << " " << (a->remove(67)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(21)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 107 << " " << (b->remove(368)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->insert(157)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->remove(333)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(128)) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->remove(178)) << std::endl;
std::cout << "Line no:" << 112 << " " << ((b->insert(234))==false) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(143) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(143) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(143) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(143) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (b->remove(251)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 123 << " " << (a->remove(251)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(195)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(455)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(301)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(347)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((a->insert(87))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(387)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(180)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 132 << " " << (b->insert(148)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((b->insert(106))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 135 << " " << (a->insert(354)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 137 << " " << (a->insert(237)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->remove(333)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(174)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(212)) << std::endl;
*b=*a;
std::cout << "Line no:" << 142 << " " << (a->insert(356)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(285)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->remove(106)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->insert(434))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(441)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(65)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 149 << " " << (b->insert(16)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(152)) << std::endl;
*b=*a;
std::cout << "Line no:" << 152 << " " << (a->remove(345)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 154 << " " << ((a->remove(327))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->remove(150)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(42)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((b->remove(439))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(171)) << std::endl;
b->printPretty();
*b=*b;
b->printPretty();
std::cout << "Line no:" << 162 << " " << (b->insert(452)) << std::endl;
std::cout << "Line no:" << 163 << " " << ((a->insert(237))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->remove(237)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->insert(171)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->remove(143)) << std::endl;
std::cout << "Line no:" << 167 << " " << ((b->insert(455))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->insert(269)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->remove(342)) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->remove(269)) << std::endl;
std::cout << "Line no:" << 171 << " " << (a->insert(459)) << std::endl;
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(87) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(87) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(87) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(87) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 180 << " " << (b->insert(269)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(296)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->remove(354)) << std::endl;
std::cout << "Line no:" << 183 << " " << ((b->remove(51))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << ((b->insert(87))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(384)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->remove(60)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(75)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(464)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->remove(452)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 191 << " " << (a->remove(354)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(356)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(417)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->insert(66)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->remove(345)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 197 << " " << (a->insert(320)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(203)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((b->insert(143))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(17)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(196)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(17)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 204 << " " << (b->insert(168)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->remove(188)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->remove(269)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(223)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->remove(238)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(250)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((a->remove(285))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(132)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(161)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 214 << " " << (a->remove(174)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((b->insert(455))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(288)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->insert(489)) << std::endl;
std::cout << "Line no:" << 218 << " " << ((b->remove(451))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->remove(384)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->remove(329)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(485)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->insert(234)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 225 << " " << (b->insert(234)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(371)) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->insert(465)) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->insert(306)) << std::endl;
std::cout << "Line no:" << 229 << " " << (a->remove(171)) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(196) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(196) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(196) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(196) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << ((b->insert(188))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
