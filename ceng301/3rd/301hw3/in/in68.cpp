#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << (a->insert(211)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(211)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(456)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(456)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(212)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(456)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 14 << " " << (b->insert(222)) << std::endl;
std::cout << "Line no:" << 15 << " " << ((b->insert(222))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (b->remove(222)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 18 << " " << (b->insert(449)) << std::endl;
std::cout << "Line no:" << 19 << " " << (b->remove(449)) << std::endl;
std::cout << "Line no:" << 20 << " " << ((a->insert(456))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->insert(409)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(456)) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->insert(471)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(212)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((b->remove(359))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << ((b->insert(471))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 28 << " " << (b->remove(471)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->remove(409)) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(40)) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->insert(43)) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->insert(400)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(403)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(34)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(469)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(3)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(2)) << std::endl;
std::cout << "Line no:" << 38 << " " << ((b->insert(40))==false) << std::endl;
std::cout << "Line no:" << 39 << " " << ((a->remove(380))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(387)) << std::endl;
std::cout << "Line no:" << 41 << " " << ((b->remove(138))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 43 << " " << (a->insert(414)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(369)) << std::endl;
std::cout << "Line no:" << 45 << " " << ((b->insert(40))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->insert(193)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(82)) << std::endl;
std::cout << "Line no:" << 48 << " " << ((a->remove(237))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << ((a->insert(34))==false) << std::endl;
try{std::cout <<"Line no:" << 50 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getFloor(2) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getCeiling(2) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getNext(2) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->get(2) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 58 << " " << (b->insert(78)) << std::endl;
std::cout << "Line no:" << 59 << " " << (a->remove(414)) << std::endl;
std::cout << "Line no:" << 60 << " " << (a->remove(369)) << std::endl;
*a=*a;
a->printPretty();
std::cout << "Line no:" << 63 << " " << (a->insert(415)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((b->insert(78))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(500)) << std::endl;
b->printPretty();
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 69 << " " << (b->insert(253)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->remove(78)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(20)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(378)) << std::endl;
std::cout << "Line no:" << 73 << " " << ((b->insert(43))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(206)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(405)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((a->insert(206))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(333)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(398)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 80 << " " << ((b->remove(378))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(13)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->remove(82)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((a->remove(106))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->remove(122))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(446)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(23)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(387)) << std::endl;
std::cout << "Line no:" << 88 << " " << ((b->insert(13))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 90 << " " << (b->remove(400)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(103)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 94 << " " << (a->remove(23)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(398)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(322)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(263)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((b->insert(40))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 100 << " " << (b->insert(47)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(370)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->remove(398)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->insert(34))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->remove(378)) << std::endl;
std::cout << "Line no:" << 105 << " " << ((a->remove(75))==false) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(2)) << std::endl;
std::cout << "Line no:" << 107 << " " << ((a->insert(3))==false) << std::endl;
try{std::cout <<"Line no:" << 108 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getFloor(206) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getCeiling(206) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getNext(206) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->get(206) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 116 << " " << (a->insert(61)) << std::endl;
std::cout << "Line no:" << 117 << " " << (b->insert(86)) << std::endl;
std::cout << "Line no:" << 118 << " " << (a->insert(238)) << std::endl;
std::cout << "Line no:" << 119 << " " << (a->remove(238)) << std::endl;
std::cout << "Line no:" << 120 << " " << ((a->remove(424))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 122 << " " << (a->insert(106)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 125 << " " << (a->remove(398)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(322)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(258)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(2)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(403)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 132 << " " << ((b->remove(390))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << ((a->insert(446))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 136 << " " << (b->insert(448)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->remove(43)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->remove(106)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(146)) << std::endl;
std::cout << "Line no:" << 140 << " " << ((b->remove(460))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(165)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(99)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(174)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(174)) << std::endl;
*b=*a;
std::cout << "Line no:" << 146 << " " << (b->remove(20)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(393)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->insert(381))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(200)) << std::endl;
std::cout << "Line no:" << 150 << " " << ((b->insert(415))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << ((a->remove(274))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 153 << " " << ((b->insert(333))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->insert(61))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(293)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(432)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->remove(432)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(444)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(164)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(185)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->remove(446)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(334)) << std::endl;
std::cout << "Line no:" << 163 << " " << ((b->remove(143))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << ((a->insert(146))==false) << std::endl;
std::cout << "Line no:" << 165 << " " << ((b->insert(2))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(352)) << std::endl;
try{std::cout <<"Line no:" << 167 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getFloor(352) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getCeiling(352) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getNext(352) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->get(352) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
*b=*a;
*a=*a;
std::cout << "Line no:" << 177 << " " << (b->remove(61)) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->insert(24)) << std::endl;
std::cout << "Line no:" << 179 << " " << ((b->insert(206))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 181 << " " << (b->insert(444)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->remove(333)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(34)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(351)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(243)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(209)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->remove(2)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(146)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(152)) << std::endl;
std::cout << "Line no:" << 190 << " " << ((b->insert(146))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << ((a->insert(3))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->remove(469)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->remove(243)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(61)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->remove(3)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(458)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(233)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->remove(24)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((b->insert(263))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(269)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->remove(415)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(425)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(222)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(291)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(9)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(136)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((a->remove(81))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << ((b->remove(179))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(52)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 211 << " " << ((a->remove(41))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(185)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(71)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(178)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(276)) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(92)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((b->remove(420))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 219 << " " << ((a->remove(291))==false) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->remove(444)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(372)) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(112)) << std::endl;
std::cout << "Line no:" << 223 << " " << ((a->insert(52))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(101)) << std::endl;
try{std::cout <<"Line no:" << 225 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getFloor(200) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getCeiling(200) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getNext(200) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->get(200) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 233 << " " << (a->remove(136)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
