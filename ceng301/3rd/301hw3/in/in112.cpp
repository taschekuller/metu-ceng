#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(481)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(49)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 9 << " " << (b->remove(481)) << std::endl;
std::cout << "Line no:" << 10 << " " << (b->insert(134)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((b->insert(49))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 13 << " " << (b->remove(49)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(59)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(134)) << std::endl;
std::cout << "Line no:" << 16 << " " << (b->insert(246)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 18 << " " << ((b->insert(246))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (b->remove(59)) << std::endl;
std::cout << "Line no:" << 20 << " " << (b->remove(381)) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->insert(274)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((a->remove(323))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << ((b->remove(145))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << ((b->insert(274))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->remove(274)) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->insert(346)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(59)) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->remove(246)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->remove(346)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(480)) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->insert(86)) << std::endl;
std::cout << "Line no:" << 32 << " " << ((a->remove(381))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->remove(59)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 35 << " " << (a->insert(215)) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->insert(438)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->remove(438)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(443)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(297)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(268)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(222)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(471)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((b->insert(86))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->remove(480)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->remove(268)) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->insert(402)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(207)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->remove(402)) << std::endl;
std::cout << "Line no:" << 49 << " " << ((b->remove(277))==false) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->insert(367)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->insert(149)) << std::endl;
std::cout << "Line no:" << 52 << " " << ((b->remove(491))==false) << std::endl;
std::cout << "Line no:" << 53 << " " << ((a->insert(222))==false) << std::endl;
std::cout << "Line no:" << 54 << " " << (b->insert(177)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(177) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(177) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(177) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(177) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << ((b->remove(128))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(395)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(245)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(420)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->remove(471)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(135)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((b->remove(378))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(417)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(358)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(420)) << std::endl;
*b=*a;
std::cout << "Line no:" << 74 << " " << (a->remove(443)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(207)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(77)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(234)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(155)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(188)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(128)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->remove(245)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(209)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(341)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->remove(358)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(445)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->remove(395)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((a->remove(342))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(211)) << std::endl;
std::cout << "Line no:" << 89 << " " << ((b->insert(341))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(136)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->remove(215)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(283)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(334)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(245)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(323)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((b->remove(392))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 99 << " " << ((a->insert(149))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(423)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(475)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(116)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->remove(245)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 105 << " " << (b->insert(284)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((a->remove(412))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << ((b->remove(495))==false) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->remove(128)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(397)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(148)) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->insert(138)) << std::endl;
std::cout << "Line no:" << 112 << " " << ((a->remove(37))==false) << std::endl;
std::cout << "Line no:" << 113 << " " << (a->remove(417)) << std::endl;
try{std::cout <<"Line no:" << 114 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getFloor(135) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getCeiling(135) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getNext(135) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->get(135) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 121 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 122 << " " << (b->insert(394)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 124 << " " << (b->insert(487)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((b->remove(429))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(477)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->remove(341)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((a->insert(341))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << ((b->insert(395))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(61)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(357)) << std::endl;
*b=*a;
std::cout << "Line no:" << 133 << " " << (a->remove(86)) << std::endl;
std::cout << "Line no:" << 134 << " " << ((a->insert(207))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << ((b->remove(442))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 137 << " " << (a->insert(404)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->insert(128))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->remove(445)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 141 << " " << (a->insert(166)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(178)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(155)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(465)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(135)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(188)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((a->remove(401))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(353)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(469)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->remove(128)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->remove(404)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->remove(234)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->remove(155)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->remove(283)) << std::endl;
*a=*a;
std::cout << "Line no:" << 156 << " " << (a->insert(311)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(439)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(237)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 160 << " " << (a->remove(367)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 162 << " " << (b->remove(136)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->remove(423)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(23)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(124)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(103)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(422)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->insert(412)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->remove(222)) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->insert(489)) << std::endl;
std::cout << "Line no:" << 171 << " " << (b->remove(367)) << std::endl;
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(353) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(353) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(353) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(353) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 180 << " " << (b->remove(341)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(303)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->remove(188)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(59)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->remove(443)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(305)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(256)) << std::endl;
*a=*b;
std::cout << "Line no:" << 188 << " " << (a->insert(157)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(82)) << std::endl;
std::cout << "Line no:" << 190 << " " << ((b->remove(473))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->remove(77)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((b->insert(59))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(388)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 195 << " " << (b->insert(21)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(413)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(125)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->remove(82)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 200 << " " << ((b->remove(247))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 202 << " " << (a->remove(388)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((a->insert(395))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->remove(59)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->remove(303)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->remove(305)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->remove(23)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 209 << " " << (a->insert(136)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(349)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(337)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(477)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((a->remove(277))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(443)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 216 << " " << (a->insert(12)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->insert(89)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(426)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(207)) << std::endl;
*b=*b;
std::cout << "Line no:" << 221 << " " << (b->remove(388)) << std::endl;
std::cout << "Line no:" << 222 << " " << ((b->remove(363))==false) << std::endl;
std::cout << "Line no:" << 223 << " " << ((a->insert(234))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(344)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->insert(257)) << std::endl;
*a=*b;
std::cout << "Line no:" << 227 << " " << (b->remove(125)) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->remove(257)) << std::endl;
std::cout << "Line no:" << 229 << " " << ((b->remove(492))==false) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(234) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(234) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(234) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(234) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
