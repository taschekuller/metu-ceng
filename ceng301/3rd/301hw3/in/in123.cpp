#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << (a->insert(42)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(17)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(42)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(286)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(17)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 12 << " " << (a->insert(422)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(286)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->remove(289))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->insert(422))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(88)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(97)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(422)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->remove(88)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(166)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(494)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(498)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(151)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->remove(63))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->remove(166)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->remove(460))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 28 << " " << (a->insert(220)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(291)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 31 << " " << ((a->insert(220))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(151)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(129)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->remove(220)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(150)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(322)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(165)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(129)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(87)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(51)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(170)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 45 << " " << (b->insert(420)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(65)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(27)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(65)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(334)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->remove(27)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(410)) << std::endl;
std::cout << "Line no:" << 52 << " " << (b->insert(328)) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->insert(466)) << std::endl;
std::cout << "Line no:" << 54 << " " << (b->remove(334)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(65) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(65) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(65) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(65) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << (b->insert(121)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(466)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(336)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(254)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->remove(336)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(69)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 70 << " " << (b->insert(129)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(219)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(129)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->remove(410)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->remove(420)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(65)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((b->remove(335))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 78 << " " << (a->remove(69)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 80 << " " << (a->insert(499)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->remove(254)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(104)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(214)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->insert(499))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(222)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->remove(214)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 88 << " " << (b->insert(391)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(53)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((b->remove(464))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(493)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(238)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->remove(238)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(176)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->remove(176)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->remove(391)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(89)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->remove(65)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(167)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->remove(53)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->remove(89)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(435)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(167)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->remove(219)) << std::endl;
*b=*a;
std::cout << "Line no:" << 106 << " " << (b->remove(222)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(3)) << std::endl;
*a=*b;
std::cout << "Line no:" << 109 << " " << (b->remove(121)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->remove(104)) << std::endl;
std::cout << "Line no:" << 111 << " " << ((a->insert(493))==false) << std::endl;
std::cout << "Line no:" << 112 << " " << ((b->insert(328))==false) << std::endl;
std::cout << "Line no:" << 113 << " " << (b->insert(342)) << std::endl;
try{std::cout <<"Line no:" << 114 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getFloor(121) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getCeiling(121) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getNext(121) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->get(121) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 121 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 122 << " " << (b->remove(328)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->remove(342)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(114)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->remove(493)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(104)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(441)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(121)) << std::endl;
std::cout << "Line no:" << 129 << " " << ((a->insert(328))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(499)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((a->insert(328))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->remove(435)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->remove(114)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 135 << " " << (b->remove(441)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(435)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(178)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(405)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((b->insert(493))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->remove(493)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->remove(499)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((a->remove(215))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(399)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->remove(178)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((a->remove(24))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(104)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->remove(399)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((b->remove(105))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->remove(328)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(274)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(200)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 153 << " " << (b->remove(274)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(469)) << std::endl;
std::cout << "Line no:" << 155 << " " << ((a->insert(469))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 157 << " " << (b->insert(211)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->remove(211)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->remove(104)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 162 << " " << (b->insert(496)) << std::endl;
std::cout << "Line no:" << 163 << " " << ((a->insert(405))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->remove(405)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(274)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(359)) << std::endl;
try{std::cout <<"Line no:" << 168 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getFloor(274) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getCeiling(274) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getNext(274) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->get(274) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
std::cout << "Line no:" << 177 << " " << (a->remove(469)) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->insert(111)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->remove(200)) << std::endl;
std::cout << "Line no:" << 180 << " " << ((b->insert(496))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(44)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(87)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(314)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 185 << " " << ((a->insert(274))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(179)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(423)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(423)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 190 << " " << (b->insert(477)) << std::endl;
*a=*b;
std::cout << "Line no:" << 192 << " " << (a->remove(496)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 194 << " " << (a->insert(282)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(263)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->remove(477)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(172)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->remove(359)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(312)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(84)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->remove(496)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(422)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 204 << " " << (b->remove(172)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((b->insert(422))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->remove(477)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->remove(422)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->remove(312)) << std::endl;
*b=*b;
std::cout << "Line no:" << 210 << " " << (b->insert(186)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(443)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 213 << " " << (b->remove(186)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(273)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((a->insert(263))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << ((a->insert(84))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->insert(417)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->remove(359)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(293)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->remove(293)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 222 << " " << ((a->remove(24))==false) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->remove(84)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(439)) << std::endl;
try{std::cout <<"Line no:" << 225 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getFloor(417) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getCeiling(417) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getNext(417) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->get(417) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
