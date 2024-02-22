#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(173)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(333)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(173)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->insert(333))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->insert(333))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->insert(333))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(300)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(324)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 14 << " " << ((a->insert(333))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 16 << " " << (a->remove(300)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 19 << " " << (a->insert(297)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(106)) << std::endl;
std::cout << "Line no:" << 21 << " " << ((b->insert(297))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 23 << " " << (a->insert(471)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(297)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(277)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((b->insert(106))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 28 << " " << (b->insert(139)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(361)) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(102)) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->insert(233)) << std::endl;
std::cout << "Line no:" << 32 << " " << ((a->insert(102))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(274)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(256)) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->insert(76)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(361)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->remove(256)) << std::endl;
*b=*b;
std::cout << "Line no:" << 39 << " " << (b->insert(92)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 41 << " " << (b->insert(7)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(137)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(40)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((b->insert(76))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((b->insert(233))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << ((a->remove(98))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(233)) << std::endl;
*b=*a;
std::cout << "Line no:" << 50 << " " << (b->remove(274)) << std::endl;
std::cout << "Line no:" << 51 << " " << ((a->insert(361))==false) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->remove(139)) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(76) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(76) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(76) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(76) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 61 << " " << ((a->remove(181))==false) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->remove(106)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 64 << " " << ((b->remove(94))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(236)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(27)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->remove(361)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(102)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(40)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(388)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->remove(106)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(187)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->remove(277)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(484)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->remove(375)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->remove(141)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(399)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 80 << " " << ((b->remove(356))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(68)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->remove(388)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->remove(27)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->remove(261)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((b->insert(76))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << ((b->remove(273))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(40)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(187)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((b->remove(181))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->insert(484))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << ((b->remove(95))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(431)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 95 << " " << (a->remove(471)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((b->remove(269))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(456)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((a->insert(431))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(102)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(407)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(469)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->remove(76)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(146)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(483)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->remove(361)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->remove(68)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 108 << " " << (a->remove(469)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((a->remove(447))==false) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(154)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(456) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(456) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(456) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(456) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << (a->remove(456)) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->remove(407)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((a->remove(13))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(495)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(415)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->remove(141)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(197)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(76)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->remove(361)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->remove(277)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(483)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(475)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(427)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(139)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 134 << " " << (a->insert(424)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(253)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(411)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 138 << " " << (b->remove(102)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->remove(363))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 141 << " " << ((a->insert(431))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(116)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 144 << " " << (a->insert(42)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(495)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->remove(484)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(243)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->insert(274))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << ((a->insert(411))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(458)) << std::endl;
*b=*b;
std::cout << "Line no:" << 152 << " " << (b->remove(475)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(215)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((a->remove(317))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << ((a->insert(197))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->remove(361)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->remove(274)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(100)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 160 << " " << ((b->remove(244))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(278)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(228)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->remove(415)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((b->remove(42))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->remove(100)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->remove(116)) << std::endl;
*b=*b;
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(278) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(278) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(278) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(278) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 177 << " " << ((a->remove(192))==false) << std::endl;
a->printPretty();
*b=*b;
std::cout << "Line no:" << 180 << " " << (a->insert(148)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((a->remove(298))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->remove(102)) << std::endl;
std::cout << "Line no:" << 183 << " " << ((a->insert(278))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << ((b->remove(427))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 186 << " " << ((a->remove(160))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(75)) << std::endl;
std::cout << "Line no:" << 188 << " " << ((a->insert(411))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << ((a->insert(243))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << ((b->insert(75))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << ((b->insert(75))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(146)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(334)) << std::endl;
std::cout << "Line no:" << 194 << " " << ((a->remove(168))==false) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(320)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->remove(278)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(14)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->remove(148)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->remove(154)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(289)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->remove(215)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(96)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->remove(399)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(441)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 207 << " " << (a->remove(411)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->remove(197)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(96)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->remove(14)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(276)) << std::endl;
std::cout << "Line no:" << 212 << " " << ((a->insert(243))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 214 << " " << (b->remove(289)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->remove(320)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((a->insert(375))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(194)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->remove(334)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(422)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->remove(471)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((a->remove(227))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(129)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 224 << " " << ((a->insert(42))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 226 << " " << (b->insert(435)) << std::endl;
try{std::cout <<"Line no:" << 227 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getFloor(441) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getCeiling(441) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getNext(441) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->get(441) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 235 << " " << ((a->insert(228))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
