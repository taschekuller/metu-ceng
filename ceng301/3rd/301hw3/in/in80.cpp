#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << (a->insert(471)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(214)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(59)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(214)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(156)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(471)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(396)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(59)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(159)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(247)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(339)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(3)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 20 << " " << ((a->remove(379))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(422)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(122)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->remove(460))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(156)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(212)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(131)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(85)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(499)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(279)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 31 << " " << (a->insert(337)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 34 << " " << (a->insert(106)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->remove(159)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->insert(499))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(360)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(351)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(465)) << std::endl;
std::cout << "Line no:" << 40 << " " << ((a->insert(122))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->remove(422)) << std::endl;
std::cout << "Line no:" << 42 << " " << ((b->insert(351))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->remove(179))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << ((a->insert(337))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(249)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 47 << " " << (a->insert(439)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->insert(42)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->remove(249)) << std::endl;
a->printPretty();
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 53 << " " << (a->remove(3)) << std::endl;
std::cout << "Line no:" << 54 << " " << (a->insert(369)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(131) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(131) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(131) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(131) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << (b->insert(412)) << std::endl;
*b=*b;
*b=*a;
std::cout << "Line no:" << 66 << " " << (b->insert(360)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->insert(279))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << ((b->insert(499))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(65)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(7)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(347)) << std::endl;
*a=*a;
std::cout << "Line no:" << 73 << " " << ((b->remove(303))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->remove(396)) << std::endl;
std::cout << "Line no:" << 75 << " " << ((a->remove(496))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(237)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->remove(339)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(378)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((b->remove(166))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(380)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(326)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->remove(347)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(398)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(331)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(427)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((b->insert(499))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(212)) << std::endl;
std::cout << "Line no:" << 88 << " " << ((b->insert(439))==false) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(85)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(353)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 92 << " " << (b->remove(279)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 94 << " " << (b->insert(479)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(5)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->remove(247)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(437)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(337)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->remove(122)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->remove(465)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(175)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->insert(472)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->remove(337)) << std::endl;
std::cout << "Line no:" << 105 << " " << ((a->insert(353))==false) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(333)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->remove(65)) << std::endl;
std::cout << "Line no:" << 108 << " " << ((a->insert(437))==false) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->insert(207)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->insert(39)) << std::endl;
std::cout << "Line no:" << 112 << " " << (b->remove(106)) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(247) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(247) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(247) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(247) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (b->remove(7)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 123 << " " << (a->insert(417)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((b->remove(289))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(350)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 127 << " " << (b->remove(333)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(475)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(193)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->remove(94))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->remove(479)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(439)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((b->insert(472))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->remove(378)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((b->remove(267))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(439)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((b->insert(339))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 139 << " " << ((b->remove(491))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(64)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 143 << " " << (a->insert(422)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(263)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(475)) << std::endl;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 148 << " " << (b->remove(417)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->remove(247)) << std::endl;
std::cout << "Line no:" << 150 << " " << ((a->remove(89))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 152 << " " << (a->insert(114)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(69)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->remove(155))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << ((a->remove(305))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << ((b->remove(190))==false) << std::endl;
*a=*b;
b->printPretty();
std::cout << "Line no:" << 159 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->remove(398)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 162 << " " << ((a->remove(200))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->remove(131)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(66)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(27)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(289)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(154)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->insert(48)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(432)) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->remove(422)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(64) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(64) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(64) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(64) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (a->insert(128)) << std::endl;
std::cout << "Line no:" << 180 << " " << ((b->remove(489))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 182 << " " << (b->remove(393)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(345)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((b->insert(499))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->remove(279)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(307)) << std::endl;
*a=*b;
std::cout << "Line no:" << 188 << " " << (a->remove(193)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->remove(106)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(154)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 192 << " " << (a->remove(331)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 195 << " " << (a->insert(475)) << std::endl;
a->printPretty();
a->printPretty();
*b=*b;
std::cout << "Line no:" << 199 << " " << (a->remove(337)) << std::endl;
std::cout << "Line no:" << 200 << " " << ((a->remove(134))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(245)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(137)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 204 << " " << (b->insert(308)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(27)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->remove(137)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(228)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(159)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((a->insert(289))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->remove(369)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->insert(466)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((b->insert(69))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 215 << " " << ((b->remove(102))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(43)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((a->insert(154))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << ((b->remove(179))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(64)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->remove(159)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 222 << " " << (b->insert(77)) << std::endl;
*a=*a;
std::cout << "Line no:" << 224 << " " << (a->insert(84)) << std::endl;
std::cout << "Line no:" << 225 << " " << ((a->insert(475))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 227 << " " << (b->insert(237)) << std::endl;
std::cout << "Line no:" << 228 << " " << (a->remove(84)) << std::endl;
std::cout << "Line no:" << 229 << " " << ((a->insert(69))==false) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(265) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(265) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(265) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(265) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
