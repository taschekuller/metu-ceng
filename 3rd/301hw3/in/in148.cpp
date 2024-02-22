#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(51))==false) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(4)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(4)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(421)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(336)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(336)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->remove(97))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(182)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(318)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(318)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(14)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 18 << " " << (a->remove(14)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->remove(182)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(157)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(157)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(254)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(254)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(353)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->remove(288))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(259)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(182)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->remove(182)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(251)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(251)) << std::endl;
std::cout << "Line no:" << 32 << " " << ((a->insert(259))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->remove(259)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->insert(353))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->insert(421))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 38 << " " << (a->insert(325)) << std::endl;
std::cout << "Line no:" << 39 << " " << ((a->insert(421))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(236)) << std::endl;
*b=*b;
std::cout << "Line no:" << 42 << " " << ((b->insert(353))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 44 << " " << ((b->remove(351))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << ((b->remove(201))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->remove(325)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(482)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(351)) << std::endl;
std::cout << "Line no:" << 49 << " " << ((b->insert(236))==false) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(461)) << std::endl;
try{std::cout <<"Line no:" << 51 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getFloor(421) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getCeiling(421) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getNext(421) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->get(421) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 59 << " " << ((a->remove(299))==false) << std::endl;
std::cout << "Line no:" << 60 << " " << ((b->remove(73))==false) << std::endl;
std::cout << "Line no:" << 61 << " " << (b->insert(284)) << std::endl;
std::cout << "Line no:" << 62 << " " << (b->remove(353)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->remove(351)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(482)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(462)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(479)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(195)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(127)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((b->insert(284))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(301)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(216)) << std::endl;
std::cout << "Line no:" << 72 << " " << ((b->remove(406))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(302)) << std::endl;
*b=*b;
std::cout << "Line no:" << 75 << " " << (a->remove(325)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(112)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->remove(461)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(284)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(244)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(1)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(121)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 83 << " " << (a->insert(132)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((a->insert(1))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(409)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->remove(421)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((a->remove(482))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(33)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(95)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((a->insert(236))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->insert(301))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->remove(236)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(372)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->remove(33)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->remove(353)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(126)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(280)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((a->remove(499))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(220)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(302)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->remove(121)) << std::endl;
std::cout << "Line no:" << 102 << " " << ((a->insert(409))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 104 << " " << (a->insert(358)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(377)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(450)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(479)) << std::endl;
std::cout << "Line no:" << 108 << " " << ((a->insert(302))==false) << std::endl;
try{std::cout <<"Line no:" << 109 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getFloor(302) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getCeiling(302) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getNext(302) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->get(302) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 117 << " " << ((b->insert(479))==false) << std::endl;
std::cout << "Line no:" << 118 << " " << (a->insert(331)) << std::endl;
std::cout << "Line no:" << 119 << " " << (a->insert(325)) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->insert(6)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->insert(398)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((b->insert(216))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << ((a->insert(398))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->remove(132)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(428)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 127 << " " << (a->insert(286)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((a->insert(1))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(229)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(229)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((a->insert(428))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(112)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->remove(244)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(400)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((a->remove(401))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(189)) << std::endl;
*a=*a;
std::cout << "Line no:" << 138 << " " << (a->remove(302)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(426)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->remove(421)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(149)) << std::endl;
*b=*b;
std::cout << "Line no:" << 143 << " " << (a->insert(434)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->remove(301)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(325)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(129)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(228)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(22)) << std::endl;
std::cout << "Line no:" << 149 << " " << ((b->insert(479))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << ((a->insert(280))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << ((a->insert(302))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->remove(426)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->remove(286)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(159)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->remove(149)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 157 << " " << (b->remove(479)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 159 << " " << (a->remove(428)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 161 << " " << (b->insert(325)) << std::endl;
*b=*a;
std::cout << "Line no:" << 163 << " " << (a->insert(361)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->remove(331)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->remove(462)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 167 << " " << ((a->insert(409))==false) << std::endl;
try{std::cout <<"Line no:" << 168 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getFloor(1) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getCeiling(1) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getNext(1) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->get(1) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 176 << " " << ((b->remove(487))==false) << std::endl;
std::cout << "Line no:" << 177 << " " << (a->insert(285)) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->remove(302)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->remove(331)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->remove(434)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(37)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(1)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((b->remove(187))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 186 << " " << ((b->remove(110))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << ((b->insert(409))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << ((b->insert(280))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 190 << " " << (a->insert(6)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 192 << " " << ((b->remove(457))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(302)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->insert(495)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(90)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(22)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 199 << " " << (a->insert(98)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->remove(98)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((a->remove(352))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << ((a->insert(129))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << ((a->remove(483))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(209)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(450)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 207 << " " << (b->remove(209)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 209 << " " << (a->remove(126)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(476)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(385)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(432)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(144)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 215 << " " << (a->insert(459)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->remove(358)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(144)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->remove(22)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 220 << " " << ((b->insert(280))==false) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(295)) << std::endl;
std::cout << "Line no:" << 222 << " " << ((b->insert(398))==false) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(101)) << std::endl;
std::cout << "Line no:" << 224 << " " << ((a->remove(67))==false) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(229)) << std::endl;
try{std::cout <<"Line no:" << 226 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getFloor(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getCeiling(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getNext(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->get(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 234 << " " << (a->remove(409)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
