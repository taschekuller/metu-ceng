#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(390)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(390)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(152)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(152)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(30)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(30)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(365)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->insert(365))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(3)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(27)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(365)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(484)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(495)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(71)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(2)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(2)) << std::endl;
std::cout << "Line no:" << 21 << " " << ((a->insert(3))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 24 << " " << (b->insert(277)) << std::endl;
std::cout << "Line no:" << 25 << " " << (b->insert(104)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(409)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->insert(320)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(215)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((b->insert(104))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(295)) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->remove(277)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(418)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->remove(320)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(470)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->remove(409)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->remove(27)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(241)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(478)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(29)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(318)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->remove(295)) << std::endl;
*b=*b;
std::cout << "Line no:" << 45 << " " << (b->insert(161)) << std::endl;
*b=*a;
std::cout << "Line no:" << 47 << " " << ((b->remove(201))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 49 << " " << (a->remove(241)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(348)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->insert(194)) << std::endl;
std::cout << "Line no:" << 52 << " " << ((a->insert(418))==false) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->insert(271)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(484) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(484) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(484) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(484) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (a->remove(418)) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->insert(342)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((a->insert(484))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(21)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(295)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((a->insert(215))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << ((a->insert(495))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(245)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 71 << " " << (a->insert(368)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->remove(495)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->remove(484)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((a->insert(495))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << ((a->insert(245))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->remove(71)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->remove(15)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(29)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 80 << " " << (b->remove(470)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(332)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->remove(478)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(478)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(306)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((a->insert(245))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 88 << " " << (b->remove(318)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 90 << " " << (b->insert(300)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->insert(478))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(411)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->remove(418)) << std::endl;
*a=*a;
std::cout << "Line no:" << 95 << " " << ((a->remove(210))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << ((b->remove(344))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->remove(29)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->remove(478)) << std::endl;
std::cout << "Line no:" << 99 << " " << ((b->insert(375))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << ((b->insert(375))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->remove(375)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(51)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(342)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 105 << " " << (b->insert(282)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(318)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(36)) << std::endl;
std::cout << "Line no:" << 108 << " " << ((a->remove(407))==false) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->remove(21)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->insert(171)) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->insert(309)) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(478) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(478) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(478) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(478) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (b->remove(215)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->insert(160)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(18)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((b->remove(116))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << ((a->insert(411))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(257)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(171)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(303)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(327)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(375)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((a->insert(411))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(331)) << std::endl;
std::cout << "Line no:" << 132 << " " << ((a->insert(470))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(199)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->remove(495)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 136 << " " << (a->insert(281)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(464)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((b->insert(331))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->remove(215)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(429)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((b->remove(22))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << ((a->insert(470))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(331)) << std::endl;
std::cout << "Line no:" << 144 << " " << ((b->insert(300))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 146 << " " << ((b->insert(36))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->insert(309))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->remove(70))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 150 << " " << (b->insert(337)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(268)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(282)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(33)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->remove(277))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(470)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(37)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->remove(265)) << std::endl;
*b=*b;
std::cout << "Line no:" << 161 << " " << (a->insert(267)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(393)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->insert(304)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 165 << " " << (b->insert(459)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(493)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(465)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((b->remove(349))==false) << std::endl;
std::cout << "Line no:" << 169 << " " << ((b->remove(428))==false) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(470) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(470) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(470) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(470) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << (a->remove(381)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->remove(411)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->remove(304)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((a->insert(368))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->insert(137)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(49)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(321)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->remove(281)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 187 << " " << ((b->insert(18))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(161)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(129)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(75)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->remove(137)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 194 << " " << (b->insert(5)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(322)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(131)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(111)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((a->insert(470))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(422)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(433)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->remove(433)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(318)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->remove(318)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->remove(422)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 206 << " " << (a->remove(71)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((b->insert(18))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(438)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(65)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(290)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((b->insert(75))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->insert(64)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((b->remove(287))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(313)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(83)) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->remove(484)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(39)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->remove(368)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(303)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(150)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->remove(303)) << std::endl;
*b=*a;
std::cout << "Line no:" << 223 << " " << (a->remove(429)) << std::endl;
std::cout << "Line no:" << 224 << " " << ((b->insert(245))==false) << std::endl;
std::cout << "Line no:" << 225 << " " << ((b->insert(65))==false) << std::endl;
std::cout << "Line no:" << 226 << " " << ((a->remove(251))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 228 << " " << (a->remove(295)) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(65) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(65) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(65) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(65) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << (b->remove(271)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
