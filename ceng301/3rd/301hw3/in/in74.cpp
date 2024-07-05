#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(358)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(273)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(273)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(358)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(123)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->remove(471))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 13 << " " << (b->insert(310)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->remove(139))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 16 << " " << ((a->insert(310))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(310)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(454)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((b->insert(454))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (b->insert(56)) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->remove(56)) << std::endl;
std::cout << "Line no:" << 22 << " " << (b->insert(330)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(454)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 25 << " " << (b->remove(330)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((b->remove(158))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (b->insert(58)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->remove(56))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << ((b->remove(150))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 31 << " " << (a->insert(16)) << std::endl;
*b=*a;
std::cout << "Line no:" << 33 << " " << (b->insert(325)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->remove(58)) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->insert(5)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(198)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((b->remove(404))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->remove(5)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->remove(16)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->remove(16)) << std::endl;
std::cout << "Line no:" << 41 << " " << ((a->remove(279))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->remove(58)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 44 << " " << ((b->insert(325))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->remove(198)) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->remove(325)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(290)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->insert(394)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(455)) << std::endl;
try{std::cout <<"Line no:" << 50 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getFloor(290) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getCeiling(290) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getNext(290) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->get(290) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 58 << " " << (a->remove(455)) << std::endl;
std::cout << "Line no:" << 59 << " " << (b->insert(163)) << std::endl;
std::cout << "Line no:" << 60 << " " << ((b->remove(74))==false) << std::endl;
std::cout << "Line no:" << 61 << " " << (b->remove(163)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->remove(290)) << std::endl;
std::cout << "Line no:" << 63 << " " << ((b->insert(394))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(231)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(152)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(250)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->remove(231)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 69 << " " << ((a->insert(152))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(258)) << std::endl;
*b=*b;
std::cout << "Line no:" << 72 << " " << (b->remove(394)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(188)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(77)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(77)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(240)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((b->remove(205))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(329)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 80 << " " << (a->insert(37)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((a->insert(240))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(493)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((b->remove(457))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->remove(345))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(337)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((b->remove(50))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(305)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(122)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->remove(305)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(348)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->remove(348)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(232)) << std::endl;
std::cout << "Line no:" << 94 << " " << ((a->remove(195))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << ((a->insert(250))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(208)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(110)) << std::endl;
*a=*a;
std::cout << "Line no:" << 99 << " " << (a->insert(263)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((a->insert(337))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->insert(337))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(36)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(1)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(255)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(497)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(387)) << std::endl;
try{std::cout <<"Line no:" << 107 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getFloor(387) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getCeiling(387) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getNext(387) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->get(387) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 115 << " " << ((a->remove(167))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 117 << " " << ((b->remove(71))==false) << std::endl;
std::cout << "Line no:" << 118 << " " << (b->insert(251)) << std::endl;
std::cout << "Line no:" << 119 << " " << ((b->insert(36))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->remove(122)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->remove(232)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((a->insert(337))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 124 << " " << ((b->insert(251))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->remove(250)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(54)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->remove(387)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(339)) << std::endl;
*b=*a;
b->printPretty();
std::cout << "Line no:" << 131 << " " << (a->remove(54)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(466)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 134 << " " << ((a->remove(365))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->remove(1)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(329)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 138 << " " << (a->insert(198)) << std::endl;
*b=*a;
std::cout << "Line no:" << 140 << " " << ((a->remove(479))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << ((b->insert(208))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->remove(339)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((b->insert(110))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << ((a->remove(246))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->remove(277))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(346)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 148 << " " << (b->insert(406)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 150 << " " << (b->insert(15)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 153 << " " << ((a->insert(208))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(282)) << std::endl;
std::cout << "Line no:" << 155 << " " << ((b->remove(30))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(500)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((a->insert(497))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(378)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->remove(37)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(91)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(413)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->remove(258)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 164 << " " << (b->insert(97)) << std::endl;
try{std::cout <<"Line no:" << 165 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getFloor(208) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getCeiling(208) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getNext(208) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->get(208) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 173 << " " << ((a->insert(337))==false) << std::endl;
std::cout << "Line no:" << 174 << " " << ((a->remove(405))==false) << std::endl;
std::cout << "Line no:" << 175 << " " << (b->insert(356)) << std::endl;
std::cout << "Line no:" << 176 << " " << (a->insert(271)) << std::endl;
std::cout << "Line no:" << 177 << " " << (a->remove(240)) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->remove(263)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->remove(500)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(480)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->remove(282)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((a->insert(339))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(329)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((a->insert(152))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(194)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(152)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(357)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(275)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->remove(263)) << std::endl;
std::cout << "Line no:" << 190 << " " << ((b->remove(447))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << ((a->insert(194))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(182)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(317)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 195 << " " << (a->remove(329)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(103)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(128)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(149)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(364)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((b->remove(494))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(480)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->remove(258)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(290)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 206 << " " << (a->insert(84)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(89)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((b->insert(128))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(379)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((b->insert(91))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(204)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->insert(213)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((b->remove(301))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->remove(152)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 216 << " " << (a->insert(385)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->insert(134)) << std::endl;
std::cout << "Line no:" << 218 << " " << ((a->remove(182))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(68)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(377)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->insert(422)) << std::endl;
try{std::cout <<"Line no:" << 223 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getFloor(68) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getCeiling(68) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getNext(68) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->get(68) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 231 << " " << ((a->insert(422))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
