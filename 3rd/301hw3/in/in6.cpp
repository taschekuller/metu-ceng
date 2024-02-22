#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(246)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 8 << " " << (b->remove(246)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(387)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(387)) << std::endl;
std::cout << "Line no:" << 11 << " " << (b->insert(397)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((b->remove(456))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(397)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 15 << " " << (a->insert(407)) << std::endl;
std::cout << "Line no:" << 16 << " " << (b->insert(80)) << std::endl;
std::cout << "Line no:" << 17 << " " << (b->insert(480)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(95)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->insert(407))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << ((b->insert(95))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(480)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((b->remove(487))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->remove(407)) << std::endl;
std::cout << "Line no:" << 24 << " " << (b->insert(402)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->remove(402)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->insert(80))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->insert(80))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(500)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->insert(240)) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->remove(500)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(48)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(95)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((b->insert(240))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->remove(48)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->remove(426))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 37 << " " << (b->remove(240)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(321)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 40 << " " << (a->remove(80)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->remove(321)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(246)) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->remove(246)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(143)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 46 << " " << (b->insert(356)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(487)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(143)) << std::endl;
try{std::cout <<"Line no:" << 49 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 50 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getFloor(356) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getCeiling(356) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getNext(356) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->get(356) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
*a=*a;
std::cout << "Line no:" << 58 << " " << (b->insert(110)) << std::endl;
std::cout << "Line no:" << 59 << " " << (b->insert(147)) << std::endl;
std::cout << "Line no:" << 60 << " " << (b->insert(378)) << std::endl;
*b=*a;
std::cout << "Line no:" << 62 << " " << (b->insert(323)) << std::endl;
std::cout << "Line no:" << 63 << " " << ((b->insert(487))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(122)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(356)) << std::endl;
std::cout << "Line no:" << 66 << " " << ((b->insert(487))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(143)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(347)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->remove(347)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->remove(143)) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->remove(277))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(326)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->remove(487)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->remove(356)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(37)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((b->insert(323))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(465)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(42)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->remove(465)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(327)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->remove(323)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(24)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->remove(37)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 85 << " " << (b->remove(24)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(289)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->remove(327)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(82)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->remove(82)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->remove(289)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(36)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->remove(487)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(486)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->remove(36)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 96 << " " << ((a->insert(122))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->insert(143)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->remove(143)) << std::endl;
std::cout << "Line no:" << 99 << " " << ((b->remove(466))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->remove(486)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 102 << " " << (b->insert(456)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(153)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->remove(456)) << std::endl;
try{std::cout <<"Line no:" << 105 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getFloor(42) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getCeiling(42) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getNext(42) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->get(42) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 113 << " " << (a->insert(450)) << std::endl;
std::cout << "Line no:" << 114 << " " << ((a->insert(153))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 116 << " " << (b->insert(101)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 118 << " " << (a->remove(450)) << std::endl;
std::cout << "Line no:" << 119 << " " << ((b->insert(101))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << ((b->insert(101))==false) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->insert(401)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 123 << " " << (b->insert(161)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->remove(122)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(409)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(309)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(4)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(395)) << std::endl;
*a=*a;
std::cout << "Line no:" << 130 << " " << (b->insert(47)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((b->insert(4))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(98)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 134 << " " << (b->remove(4)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((b->insert(47))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 137 << " " << (a->insert(434)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->remove(409))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(12)) << std::endl;
*b=*a;
std::cout << "Line no:" << 141 << " " << (b->insert(50)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(34)) << std::endl;
*b=*b;
std::cout << "Line no:" << 145 << " " << (b->insert(111)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(379)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(373)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->remove(434)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(240)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->remove(309)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->remove(42)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(363)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->remove(395)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(67)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->remove(42)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(59)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(479)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(77)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(286)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(88)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->remove(153)) << std::endl;
try{std::cout <<"Line no:" << 162 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 163 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 164 << " " << a->getFloor(240) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->getCeiling(240) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getNext(240) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->get(240) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 170 << " " << ((a->insert(12))==false) << std::endl;
std::cout << "Line no:" << 171 << " " << (a->insert(388)) << std::endl;
*b=*a;
std::cout << "Line no:" << 173 << " " << ((b->insert(388))==false) << std::endl;
std::cout << "Line no:" << 174 << " " << (a->insert(192)) << std::endl;
std::cout << "Line no:" << 175 << " " << ((a->remove(112))==false) << std::endl;
std::cout << "Line no:" << 176 << " " << ((a->insert(12))==false) << std::endl;
std::cout << "Line no:" << 177 << " " << ((a->remove(225))==false) << std::endl;
std::cout << "Line no:" << 178 << " " << ((b->remove(147))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->insert(3)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 181 << " " << (b->remove(401)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(409)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(106)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((a->insert(409))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(454)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(411)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->remove(12)) << std::endl;
*b=*a;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 191 << " " << (b->insert(383)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((b->remove(11))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(440)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 196 << " " << (b->remove(12)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(39)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((a->insert(411))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << ((a->insert(39))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(23)) << std::endl;
*a=*a;
std::cout << "Line no:" << 202 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->remove(401)) << std::endl;
a->printPretty();
a->printPretty();
b->printPretty();
*a=*a;
a->printPretty();
std::cout << "Line no:" << 209 << " " << ((b->remove(318))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << ((a->remove(63))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << ((a->insert(39))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(476)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(155)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(42)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(144)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(140)) << std::endl;
*b=*b;
std::cout << "Line no:" << 218 << " " << ((a->insert(192))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(155)) << std::endl;
try{std::cout <<"Line no:" << 220 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 221 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 222 << " " << a->getFloor(411) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 223 << " " << a->getCeiling(411) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getNext(411) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->get(411) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 228 << " " << ((b->remove(480))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
