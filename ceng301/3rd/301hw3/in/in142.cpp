#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(422)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(388)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 8 << " " << (a->insert(237)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(422)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(237)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(388)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(76)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(76)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(226)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(226)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(149)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(236)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(75)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->remove(236)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(219)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 22 << " " << (a->remove(149)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 24 << " " << (a->insert(412)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(71)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->insert(412))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 28 << " " << (a->remove(412)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->remove(219)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(75)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(18)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(18)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(226)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(446)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(468)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(87)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((a->remove(32))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << ((a->insert(468))==false) << std::endl;
std::cout << "Line no:" << 39 << " " << ((a->insert(226))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(122)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 43 << " " << (a->insert(168)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(391)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->remove(446)) << std::endl;
std::cout << "Line no:" << 47 << " " << ((a->remove(285))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(490)) << std::endl;
std::cout << "Line no:" << 49 << " " << ((a->insert(391))==false) << std::endl;
try{std::cout <<"Line no:" << 50 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getFloor(490) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getCeiling(490) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getNext(490) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->get(490) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 58 << " " << (a->remove(71)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 60 << " " << (a->insert(50)) << std::endl;
std::cout << "Line no:" << 61 << " " << ((a->insert(468))==false) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->insert(388)) << std::endl;
std::cout << "Line no:" << 63 << " " << ((a->insert(490))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << ((a->insert(87))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->insert(468))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(278)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 68 << " " << (a->remove(87)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((a->remove(408))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 72 << " " << (a->insert(177)) << std::endl;
std::cout << "Line no:" << 73 << " " << ((a->insert(177))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->remove(50)) << std::endl;
std::cout << "Line no:" << 75 << " " << ((b->remove(482))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 77 << " " << (b->insert(99)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(99)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(2)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(362)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((a->insert(278))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(119)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 84 << " " << (b->insert(384)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->remove(2)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 87 << " " << (a->remove(122)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(240)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(381)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((b->remove(24))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->insert(119))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(381)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(250)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(358)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((a->remove(9))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->remove(226)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->remove(388)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(303)) << std::endl;
b->printPretty();
*a=*a;
std::cout << "Line no:" << 101 << " " << (a->remove(278)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->remove(421)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(470)) << std::endl;
std::cout << "Line no:" << 104 << " " << ((b->insert(119))==false) << std::endl;
std::cout << "Line no:" << 105 << " " << ((b->insert(303))==false) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(231)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(312)) << std::endl;
std::cout << "Line no:" << 108 << " " << ((a->remove(255))==false) << std::endl;
try{std::cout <<"Line no:" << 109 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getFloor(358) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getCeiling(358) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getNext(358) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->get(358) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 117 << " " << ((a->insert(177))==false) << std::endl;
std::cout << "Line no:" << 118 << " " << (b->insert(457)) << std::endl;
std::cout << "Line no:" << 119 << " " << (b->insert(406)) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->insert(46)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->remove(119)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->remove(470)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(341)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(453)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((b->insert(384))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(391)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 128 << " " << (b->insert(365)) << std::endl;
std::cout << "Line no:" << 129 << " " << ((a->remove(308))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(376)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(378)) << std::endl;
std::cout << "Line no:" << 132 << " " << ((b->remove(112))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 134 << " " << (b->remove(231)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(162)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->insert(194)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((a->remove(392))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(301)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->remove(46)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->remove(231)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(290)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->remove(240)) << std::endl;
*b=*a;
std::cout << "Line no:" << 144 << " " << (a->remove(240)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(162)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 148 << " " << (a->insert(201)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(285)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(58)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((b->insert(376))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(190)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->remove(406)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(404)) << std::endl;
std::cout << "Line no:" << 155 << " " << ((a->insert(250))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->remove(457)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((b->insert(303))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->remove(376)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((a->insert(378))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(257)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(452)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((b->insert(250))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->insert(339)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->remove(301)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->remove(339)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(142)) << std::endl;
try{std::cout <<"Line no:" << 167 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getFloor(452) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getCeiling(452) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getNext(452) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->get(452) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 176 << " " << ((b->insert(285))==false) << std::endl;
std::cout << "Line no:" << 177 << " " << (b->insert(166)) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->remove(58)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->remove(301)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->remove(240)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((b->insert(365))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(457)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->remove(378)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((a->remove(379))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << ((b->remove(309))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 188 << " " << (a->insert(57)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(278)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->remove(250)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((a->insert(57))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(308)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(364)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(57)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((a->remove(467))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->remove(384)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->remove(285)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(317)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(384)) << std::endl;
std::cout << "Line no:" << 200 << " " << ((b->insert(250))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->remove(365)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(162)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(164)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(160)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 206 << " " << (b->remove(250)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(414)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(47)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 210 << " " << (b->insert(495)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->remove(201)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 213 << " " << (b->remove(47)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->remove(187))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->remove(317)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->remove(413))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(495)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 219 << " " << (b->insert(271)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->remove(376)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(134)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->remove(261)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->remove(303)) << std::endl;
*b=*b;
try{std::cout <<"Line no:" << 225 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getFloor(364) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getCeiling(364) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getNext(364) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->get(364) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 233 << " " << ((b->insert(134))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
