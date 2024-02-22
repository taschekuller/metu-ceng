#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(80)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(196)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(196)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(420)) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->remove(441))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->insert(80))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(274)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(1)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->insert(420))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(279)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 17 << " " << (a->remove(1)) << std::endl;
std::cout << "Line no:" << 18 << " " << (b->remove(279)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(30)) << std::endl;
std::cout << "Line no:" << 20 << " " << (b->insert(124)) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->insert(68)) << std::endl;
std::cout << "Line no:" << 22 << " " << (b->insert(179)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(96)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(179)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->insert(420))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(171)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 28 << " " << ((a->insert(80))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->remove(30)) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(489)) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->remove(96)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(420)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 34 << " " << (a->insert(315)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(425)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(220)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->remove(489)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(368)) << std::endl;
std::cout << "Line no:" << 39 << " " << ((b->remove(192))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->remove(315)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(154)) << std::endl;
std::cout << "Line no:" << 42 << " " << ((a->insert(68))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(419)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 45 << " " << (a->insert(489)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->remove(68)) << std::endl;
std::cout << "Line no:" << 47 << " " << ((a->insert(124))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 49 << " " << ((a->insert(220))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 51 << " " << ((a->remove(466))==false) << std::endl;
std::cout << "Line no:" << 52 << " " << ((b->insert(368))==false) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(425) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(425) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(425) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(425) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 61 << " " << (b->insert(69)) << std::endl;
std::cout << "Line no:" << 62 << " " << ((a->insert(154))==false) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->remove(80)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->remove(489)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 66 << " " << (a->remove(274)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->remove(171)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(124)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(88)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->remove(368)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(435)) << std::endl;
std::cout << "Line no:" << 72 << " " << ((a->remove(479))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << ((b->insert(88))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 75 << " " << (a->insert(180)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(211)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(391)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->insert(220))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(155)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(139)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(239)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->remove(467))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 84 << " " << ((a->insert(489))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(304)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((a->insert(304))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(180)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(127)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(103)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->remove(139)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->remove(110))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << ((a->insert(489))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(340)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(282)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(45)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(365)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((a->insert(419))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(7)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 100 << " " << ((b->insert(127))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 102 << " " << (a->insert(230)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(435)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->remove(154)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(455)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(309)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->remove(45)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(246)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((a->insert(304))==false) << std::endl;
b->printPretty();
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(211) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(211) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(211) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(211) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << ((a->remove(208))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << ((a->remove(486))==false) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->insert(123)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((a->insert(239))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 124 << " " << (b->remove(391)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((b->insert(103))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << ((b->insert(155))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->remove(7)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(206)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(91)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(68)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(275)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(46)) << std::endl;
b->printPretty();
b->printPretty();
b->printPretty();
*a=*b;
std::cout << "Line no:" << 137 << " " << (a->insert(213)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(272)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((b->insert(88))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 141 << " " << ((a->insert(368))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << ((a->insert(171))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(346)) << std::endl;
std::cout << "Line no:" << 144 << " " << ((a->remove(3))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(136)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((b->remove(290))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->remove(274)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->insert(123))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 150 << " " << (b->insert(149)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(3)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 153 << " " << (a->insert(127)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 156 << " " << (b->insert(294)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->remove(123)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->remove(346)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((a->insert(206))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << ((b->remove(216))==false) << std::endl;
b->printPretty();
*a=*a;
std::cout << "Line no:" << 163 << " " << (a->insert(413)) << std::endl;
*b=*a;
std::cout << "Line no:" << 165 << " " << (b->remove(171)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->remove(425)) << std::endl;
std::cout << "Line no:" << 167 << " " << ((a->remove(233))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(452)) << std::endl;
b->printPretty();
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(124) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(124) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(124) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(124) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << ((b->insert(220))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << ((a->remove(466))==false) << std::endl;
std::cout << "Line no:" << 180 << " " << ((a->remove(162))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 182 << " " << (a->insert(464)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(469)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->remove(368)) << std::endl;
a->printPretty();
*a=*a;
std::cout << "Line no:" << 187 << " " << (a->insert(425)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 189 << " " << (a->remove(123)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(225)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((b->remove(471))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << ((b->remove(376))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(160)) << std::endl;
*b=*b;
std::cout << "Line no:" << 195 << " " << ((b->remove(227))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(447)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((a->insert(154))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->remove(455)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(419)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 201 << " " << (b->insert(35)) << std::endl;
std::cout << "Line no:" << 202 << " " << ((b->insert(80))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << ((a->insert(425))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << ((b->remove(159))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(351)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(303)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->remove(127)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(324)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(174)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((a->insert(425))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(148)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->insert(235)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->remove(80)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->remove(69)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(366)) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(400)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 218 << " " << (b->remove(220)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 220 << " " << (a->insert(259)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((b->remove(63))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(300)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(19)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->remove(309)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->remove(103)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->remove(127)) << std::endl;
std::cout << "Line no:" << 227 << " " << ((b->insert(365))==false) << std::endl;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(124) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(124) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(124) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(124) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << (b->remove(282)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
