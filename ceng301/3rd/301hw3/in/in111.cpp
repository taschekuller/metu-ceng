#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(18)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(18)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 8 << " " << (a->insert(406)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(358)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->remove(157))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(406))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(406)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->remove(305))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 15 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(448)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(448)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(224)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(112)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(112)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(375)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->insert(358))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->insert(358))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->remove(444))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->remove(254))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->insert(358))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(358)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(169)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->insert(169))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 32 << " " << ((a->remove(381))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(436)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(443)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(210)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->insert(210))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->remove(169)) << std::endl;
std::cout << "Line no:" << 38 << " " << ((a->remove(478))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 40 << " " << (a->remove(210)) << std::endl;
std::cout << "Line no:" << 41 << " " << ((a->remove(79))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << ((a->insert(436))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(245)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->remove(245)) << std::endl;
std::cout << "Line no:" << 45 << " " << ((a->remove(90))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << ((a->insert(443))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->remove(443)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(429)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(36)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->remove(436)) << std::endl;
try{std::cout <<"Line no:" << 51 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getFloor(429) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getCeiling(429) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getNext(429) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->get(429) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 59 << " " << (a->insert(296)) << std::endl;
std::cout << "Line no:" << 60 << " " << ((a->insert(429))==false) << std::endl;
std::cout << "Line no:" << 61 << " " << (a->insert(206)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->remove(296)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(488)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(343)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(488)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(359)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 70 << " " << (b->insert(391)) << std::endl;
*a=*a;
std::cout << "Line no:" << 72 << " " << (b->insert(434)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(166)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((b->remove(258))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(166)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((a->remove(219))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->remove(391)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(149)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((b->insert(434))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->remove(434)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(356)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 83 << " " << (a->remove(391)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(138)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->remove(149)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(131)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 88 << " " << (b->insert(74)) << std::endl;
std::cout << "Line no:" << 89 << " " << ((a->insert(131))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->remove(356)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->insert(74))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(487)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 94 << " " << (a->insert(158)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(208)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->remove(487)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 98 << " " << (b->remove(208)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(500)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->insert(40)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->remove(40)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 103 << " " << (b->insert(53)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(446)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(323)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(21)) << std::endl;
b->printPretty();
try{std::cout <<"Line no:" << 108 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getFloor(21) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getCeiling(21) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getNext(21) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->get(21) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 116 << " " << ((b->insert(500))==false) << std::endl;
std::cout << "Line no:" << 117 << " " << (b->insert(432)) << std::endl;
std::cout << "Line no:" << 118 << " " << (a->insert(33)) << std::endl;
std::cout << "Line no:" << 119 << " " << ((a->remove(218))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->remove(432)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 122 << " " << (a->remove(33)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((a->insert(323))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->remove(53)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(264)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(500)) << std::endl;
*b=*b;
b->printPretty();
b->printPretty();
*b=*b;
std::cout << "Line no:" << 131 << " " << (a->insert(417)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(407)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->insert(359)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 136 << " " << (a->insert(434)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((b->remove(122))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 139 << " " << (a->insert(301)) << std::endl;
std::cout << "Line no:" << 140 << " " << ((a->remove(58))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(104)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(215)) << std::endl;
*a=*a;
std::cout << "Line no:" << 144 << " " << (a->insert(331)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->insert(1)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->remove(264)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(403)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 149 << " " << (a->remove(359)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(90)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((a->insert(323))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(90)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 154 << " " << ((a->insert(1))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(223)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(131)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(313)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->remove(313)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(398)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(290)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(259)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(288)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->remove(1)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 165 << " " << (a->remove(301)) << std::endl;
std::cout << "Line no:" << 166 << " " << ((a->insert(417))==false) << std::endl;
try{std::cout <<"Line no:" << 167 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getFloor(288) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getCeiling(288) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getNext(288) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->get(288) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 175 << " " << (a->insert(444)) << std::endl;
std::cout << "Line no:" << 176 << " " << (b->insert(162)) << std::endl;
std::cout << "Line no:" << 177 << " " << (b->remove(407)) << std::endl;
std::cout << "Line no:" << 178 << " " << ((b->remove(372))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << ((b->remove(258))==false) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(373)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(136)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->remove(174))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(477)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->remove(446)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(70)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(148)) << std::endl;
*a=*b;
std::cout << "Line no:" << 188 << " " << (a->remove(70)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((b->insert(136))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << ((b->insert(70))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->remove(477)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(148)) << std::endl;
std::cout << "Line no:" << 193 << " " << ((b->insert(70))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(22)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(130)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(125)) << std::endl;
*b=*b;
std::cout << "Line no:" << 198 << " " << (a->insert(52)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 200 << " " << (a->remove(125)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->remove(22)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(70)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(278)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(314)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((b->insert(278))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << ((b->remove(216))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(123)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 209 << " " << (b->remove(136)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 212 << " " << (a->remove(74)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(373)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->remove(410))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << ((b->insert(130))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(86)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(223)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(243)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(81)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 221 << " " << (b->insert(175)) << std::endl;
std::cout << "Line no:" << 222 << " " << ((a->insert(52))==false) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(230)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 225 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getFloor(230) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getCeiling(230) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getNext(230) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->get(230) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 233 << " " << (a->remove(243)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
