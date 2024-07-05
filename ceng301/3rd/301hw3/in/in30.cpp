#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(326)) << std::endl;
std::cout << "Line no:" << 6 << " " << ((a->insert(326))==false) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(48)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->remove(318))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(48)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(442)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(125)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(133)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->insert(133))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 16 << " " << (a->insert(289)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->remove(390))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 20 << " " << (b->insert(453)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(133)) << std::endl;
std::cout << "Line no:" << 22 << " " << (b->insert(57)) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->insert(308)) << std::endl;
std::cout << "Line no:" << 24 << " " << (b->insert(24)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 26 << " " << (a->remove(453)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 28 << " " << (a->insert(273)) << std::endl;
std::cout << "Line no:" << 29 << " " << ((a->insert(273))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(58)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 32 << " " << ((b->remove(62))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 34 << " " << ((b->insert(289))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->insert(442))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->insert(306)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->remove(24)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 39 << " " << (b->remove(442)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(314)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(306)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(442)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(343)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(4)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(473)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((b->insert(289))==false) << std::endl;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 49 << " " << (a->insert(313)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(300)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 53 << " " << ((a->insert(58))==false) << std::endl;
std::cout << "Line no:" << 54 << " " << (b->insert(182)) << std::endl;
std::cout << "Line no:" << 55 << " " << (a->remove(289)) << std::endl;
try{std::cout <<"Line no:" << 56 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getFloor(57) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getCeiling(57) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getNext(57) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->get(57) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 63 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 64 << " " << (a->remove(58)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->remove(326)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(449)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(18)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(45)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 71 << " " << (a->insert(68)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(147)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(449)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 77 << " " << (a->remove(68)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(273)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(58)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((a->insert(308))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(10)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(9)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(405)) << std::endl;
*a=*a;
std::cout << "Line no:" << 85 << " " << (a->insert(317)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->remove(57)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(90)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(456)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(15)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(30)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->remove(70))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 93 << " " << ((a->remove(250))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(167)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(383)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->remove(273)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 98 << " " << (a->remove(58)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->remove(167)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->remove(456)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(337)) << std::endl;
std::cout << "Line no:" << 102 << " " << ((a->insert(300))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(449)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(176)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(103)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(136)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(404)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->remove(90)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->insert(45)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->remove(103)) << std::endl;
std::cout << "Line no:" << 111 << " " << ((b->insert(30))==false) << std::endl;
std::cout << "Line no:" << 112 << " " << ((a->insert(125))==false) << std::endl;
std::cout << "Line no:" << 113 << " " << (a->insert(116)) << std::endl;
try{std::cout <<"Line no:" << 114 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getFloor(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getCeiling(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getNext(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->get(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 121 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 122 << " " << (a->remove(449)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((a->insert(308))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << ((b->remove(26))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 126 << " " << ((b->insert(289))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->remove(182)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(125)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(76)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(497)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->remove(176)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 133 << " " << (b->insert(486)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 136 << " " << ((a->insert(45))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(473)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(252)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->remove(125)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(60)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(168)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((a->remove(270))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(415)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(293)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((a->insert(136))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 147 << " " << (a->insert(489)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 149 << " " << ((a->insert(489))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(243)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->remove(243)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(436)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(79)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->remove(404)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 156 << " " << (a->remove(436)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((a->insert(317))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << ((b->remove(379))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << ((a->insert(76))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->remove(60)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(220)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(168)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->remove(76)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 165 << " " << ((a->insert(45))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(335)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(332)) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(321)) << std::endl;
std::cout << "Line no:" << 169 << " " << ((b->insert(168))==false) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->insert(236)) << std::endl;
std::cout << "Line no:" << 171 << " " << (b->insert(13)) << std::endl;
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(326) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(326) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(326) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(326) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 180 << " " << (a->remove(45)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->remove(79)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 184 << " " << ((a->insert(343))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 186 << " " << (b->remove(220)) << std::endl;
std::cout << "Line no:" << 187 << " " << ((b->insert(308))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(193)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 190 << " " << ((a->remove(401))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->remove(313)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->remove(343)) << std::endl;
std::cout << "Line no:" << 193 << " " << ((a->insert(252))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 195 << " " << (b->insert(31)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->remove(58)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(477)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(291)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((a->insert(252))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(39)) << std::endl;
*b=*b;
std::cout << "Line no:" << 202 << " " << ((a->remove(355))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(104)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(197)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(497)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(36)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 208 << " " << (b->remove(197)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(121)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(263)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->remove(168)) << std::endl;
std::cout << "Line no:" << 212 << " " << ((b->insert(30))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 214 << " " << (a->insert(42)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->remove(24)) << std::endl;
*a=*a;
std::cout << "Line no:" << 217 << " " << (a->insert(32)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->remove(42)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(416)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(398)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(66)) << std::endl;
std::cout << "Line no:" << 222 << " " << ((a->insert(4))==false) << std::endl;
std::cout << "Line no:" << 223 << " " << ((a->insert(415))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->insert(23)) << std::endl;
*b=*b;
std::cout << "Line no:" << 226 << " " << (b->insert(204)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->insert(296)) << std::endl;
std::cout << "Line no:" << 228 << " " << ((b->insert(337))==false) << std::endl;
std::cout << "Line no:" << 229 << " " << (a->insert(150)) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(121) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(121) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(121) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(121) << std::endl;}catch(NoSuchItemException a){;}
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
