#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(152)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 7 << " " << (a->remove(152)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 10 << " " << (b->insert(29)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(494)) << std::endl;
*a=*b;
std::cout << "Line no:" << 13 << " " << ((a->insert(494))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 15 << " " << ((a->insert(494))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(126)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->remove(2))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << (b->remove(494)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(474)) << std::endl;
std::cout << "Line no:" << 20 << " " << ((a->remove(471))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 22 << " " << ((b->insert(29))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->insert(445)) << std::endl;
std::cout << "Line no:" << 24 << " " << (b->insert(187)) << std::endl;
std::cout << "Line no:" << 25 << " " << (b->insert(223)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(29)) << std::endl;
std::cout << "Line no:" << 27 << " " << (b->remove(187)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->remove(404))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->insert(358)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->remove(325))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->remove(417))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->remove(358)) << std::endl;
a->printPretty();
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 36 << " " << (a->insert(3)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->remove(126)) << std::endl;
std::cout << "Line no:" << 38 << " " << ((b->remove(50))==false) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(474)) << std::endl;
std::cout << "Line no:" << 40 << " " << ((b->insert(223))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 42 << " " << (b->insert(77)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(177)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->remove(445)) << std::endl;
std::cout << "Line no:" << 45 << " " << ((a->insert(177))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 47 << " " << ((b->insert(29))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(223)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(62)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(171)) << std::endl;
std::cout << "Line no:" << 51 << " " << ((a->remove(231))==false) << std::endl;
try{std::cout <<"Line no:" << 52 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getFloor(171) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getCeiling(171) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getNext(171) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->get(171) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 60 << " " << (a->insert(442)) << std::endl;
std::cout << "Line no:" << 61 << " " << ((b->insert(62))==false) << std::endl;
std::cout << "Line no:" << 62 << " " << ((a->remove(123))==false) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->insert(80)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((b->remove(399))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(94)) << std::endl;
*b=*b;
std::cout << "Line no:" << 67 << " " << (b->insert(174)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(82)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(227)) << std::endl;
std::cout << "Line no:" << 70 << " " << ((a->remove(64))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << ((b->insert(80))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(82)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(17)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 75 << " " << (a->remove(94)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((b->insert(227))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << ((a->insert(177))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(175)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 80 << " " << ((b->remove(327))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 82 << " " << (a->remove(29)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->remove(175)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(206)) << std::endl;
*b=*a;
std::cout << "Line no:" << 86 << " " << (a->insert(119)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(156)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(97)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->remove(171)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(311)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(246)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(1)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->remove(246)) << std::endl;
std::cout << "Line no:" << 94 << " " << ((a->insert(171))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << ((b->insert(17))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << ((b->remove(443))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 98 << " " << (a->remove(17)) << std::endl;
std::cout << "Line no:" << 99 << " " << ((b->remove(450))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 101 << " " << (a->remove(1)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 103 << " " << (a->insert(447)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 105 << " " << (a->insert(379)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((a->insert(442))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(194)) << std::endl;
*b=*a;
std::cout << "Line no:" << 109 << " " << (a->remove(177)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(232)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(194) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(194) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(194) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(194) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 120 << " " << (b->insert(306)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((b->insert(171))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(323)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((b->remove(198))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(359)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(124)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 127 << " " << (b->insert(40)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->remove(206)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(379)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(391)) << std::endl;
*a=*b;
std::cout << "Line no:" << 132 << " " << (a->remove(323)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(379)) << std::endl;
std::cout << "Line no:" << 134 << " " << ((b->remove(320))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 136 << " " << (b->remove(177)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(148)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(77)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->remove(119)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(343)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((a->remove(187))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(182)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(79)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(354)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->remove(253))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(492)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(230)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 149 << " " << ((b->insert(323))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << ((b->insert(343))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(114)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->remove(79)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->remove(171)) << std::endl;
*a=*a;
std::cout << "Line no:" << 155 << " " << (b->insert(343)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(66)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(500)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(491)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(229)) << std::endl;
*a=*b;
std::cout << "Line no:" << 161 << " " << (a->insert(236)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((b->insert(442))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(262)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->remove(379)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->insert(296)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 167 << " " << ((a->insert(442))==false) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(229) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(229) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(229) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(229) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 177 << " " << ((b->remove(449))==false) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->remove(359)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->insert(42)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->remove(343)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(262)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(217)) << std::endl;
std::cout << "Line no:" << 183 << " " << ((b->remove(222))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(21)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((b->remove(261))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << ((b->remove(165))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << ((b->remove(135))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(239)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((b->remove(290))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(239)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((a->insert(492))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(438)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(188)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(147)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(231)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->remove(323)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->remove(230)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((a->remove(31))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << ((a->insert(343))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(201)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((a->remove(140))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(447)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(237)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->remove(42)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((a->insert(229))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(284)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((b->insert(343))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 209 << " " << ((a->insert(343))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << ((b->insert(40))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(114)) << std::endl;
std::cout << "Line no:" << 212 << " " << ((b->insert(201))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << ((b->remove(418))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(92)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->remove(442)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 217 << " " << (b->insert(192)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->remove(92)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(36)) << std::endl;
std::cout << "Line no:" << 220 << " " << ((b->insert(188))==false) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(366)) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->remove(21)) << std::endl;
std::cout << "Line no:" << 223 << " " << ((a->insert(124))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->insert(343)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->remove(391)) << std::endl;
std::cout << "Line no:" << 226 << " " << ((b->remove(4))==false) << std::endl;
try{std::cout <<"Line no:" << 227 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getFloor(229) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getCeiling(229) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getNext(229) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->get(229) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 235 << " " << (a->remove(492)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
