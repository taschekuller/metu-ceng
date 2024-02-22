#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(245)) << std::endl;
std::cout << "Line no:" << 6 << " " << ((a->insert(245))==false) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(245)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(453)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(187)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(320)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(320)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(101)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 15 << " " << (a->remove(453)) << std::endl;
std::cout << "Line no:" << 16 << " " << ((a->insert(187))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(392)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(101)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->remove(381)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(392)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(187)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((a->remove(297))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(36)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->remove(152))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->remove(36)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 27 << " " << (a->insert(410)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(203)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(236)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(410)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(165)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(415)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 35 << " " << (a->remove(415)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(236)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((a->remove(197))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(162)) << std::endl;
std::cout << "Line no:" << 39 << " " << ((a->insert(203))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(447)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 42 << " " << ((a->remove(295))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->remove(92))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(241)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(84)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((a->insert(447))==false) << std::endl;
try{std::cout <<"Line no:" << 47 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 48 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 49 << " " << a->getFloor(162) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 50 << " " << a->getCeiling(162) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getNext(162) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->get(162) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 55 << " " << ((a->remove(375))==false) << std::endl;
std::cout << "Line no:" << 56 << " " << ((a->insert(162))==false) << std::endl;
std::cout << "Line no:" << 57 << " " << (a->remove(162)) << std::endl;
std::cout << "Line no:" << 58 << " " << ((a->remove(23))==false) << std::endl;
std::cout << "Line no:" << 59 << " " << (a->insert(243)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 61 << " " << (a->remove(165)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->insert(129)) << std::endl;
std::cout << "Line no:" << 63 << " " << ((a->insert(84))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << ((a->remove(342))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(8)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(460)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(198)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(330)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(330)) << std::endl;
std::cout << "Line no:" << 70 << " " << ((a->insert(241))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->remove(453))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(463)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(454)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->remove(460)) << std::endl;
std::cout << "Line no:" << 75 << " " << ((a->remove(274))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->remove(235)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(385)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(401)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(445)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(305)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->insert(235))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 84 << " " << ((a->remove(283))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(148)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(168)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((a->remove(242))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->remove(84)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(148)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(249)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->remove(447)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(202)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->remove(129)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(245)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->remove(198)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(223)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(297)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((a->insert(168))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << ((a->remove(344))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->remove(401)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(11)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(259)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->remove(313))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << ((a->insert(243))==false) << std::endl;
try{std::cout <<"Line no:" << 105 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getFloor(203) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getCeiling(203) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getNext(203) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->get(203) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
*b=*a;
std::cout << "Line no:" << 116 << " " << (a->insert(49)) << std::endl;
std::cout << "Line no:" << 117 << " " << (b->insert(151)) << std::endl;
std::cout << "Line no:" << 118 << " " << (b->insert(267)) << std::endl;
std::cout << "Line no:" << 119 << " " << (b->insert(203)) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->insert(14)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((a->insert(445))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(232)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(331)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->remove(245)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((a->insert(14))==false) << std::endl;
*a=*a;
a->printPretty();
std::cout << "Line no:" << 128 << " " << ((b->insert(168))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << ((b->insert(259))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(214)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->remove(305)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(296)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(419)) << std::endl;
std::cout << "Line no:" << 134 << " " << ((b->insert(297))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << ((a->insert(202))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->insert(462)) << std::endl;
*a=*a;
std::cout << "Line no:" << 138 << " " << (a->insert(36)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((b->insert(214))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(252)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((a->remove(323))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << ((a->insert(305))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(33)) << std::endl;
*a=*a;
std::cout << "Line no:" << 145 << " " << (a->insert(8)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(257)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->remove(14)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 149 << " " << (b->remove(241)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(187)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->remove(249)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(359)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->remove(463)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(264)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->remove(454)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 157 << " " << ((a->insert(49))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(139)) << std::endl;
a->printPretty();
*b=*a;
std::cout << "Line no:" << 161 << " " << ((b->remove(34))==false) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 164 << " " << ((b->insert(8))==false) << std::endl;
try{std::cout <<"Line no:" << 165 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getFloor(232) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getCeiling(232) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getNext(232) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->get(232) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 175 << " " << (b->remove(245)) << std::endl;
std::cout << "Line no:" << 176 << " " << (b->remove(241)) << std::endl;
std::cout << "Line no:" << 177 << " " << (a->remove(202)) << std::endl;
std::cout << "Line no:" << 178 << " " << ((a->insert(259))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->remove(264)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->insert(70)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(370)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->remove(36)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(349)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(196)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(423)) << std::endl;
std::cout << "Line no:" << 186 << " " << ((b->insert(423))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->remove(259)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(410)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->remove(168)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(495)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(268)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->remove(235)) << std::endl;
std::cout << "Line no:" << 193 << " " << ((a->remove(271))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << ((a->remove(30))==false) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(78)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 197 << " " << (a->insert(277)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((a->remove(29))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(323)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(132)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(348)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(454)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->remove(268)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 205 << " " << (b->insert(313)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(103)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(322)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((a->insert(78))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(153)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->remove(243)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->remove(241)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(223)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(387)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->remove(348)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 216 << " " << ((a->insert(349))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << ((b->insert(249))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << ((a->insert(259))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(282)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(87)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(276)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->remove(322)) << std::endl;
try{std::cout <<"Line no:" << 223 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getFloor(296) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getCeiling(296) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getNext(296) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->get(296) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 231 << " " << ((a->insert(385))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
