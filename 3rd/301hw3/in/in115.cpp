#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(342)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(342)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 9 << " " << ((a->remove(282))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(378)) << std::endl;
std::cout << "Line no:" << 11 << " " << (b->insert(51)) << std::endl;
b->printPretty();
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 15 << " " << (a->remove(51)) << std::endl;
std::cout << "Line no:" << 16 << " " << ((b->insert(378))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(198)) << std::endl;
std::cout << "Line no:" << 18 << " " << ((b->remove(390))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(343)) << std::endl;
std::cout << "Line no:" << 20 << " " << (b->insert(164)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(378)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(200)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->remove(81))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << ((b->insert(200))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(269)) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->insert(321)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 28 << " " << (a->insert(187)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->remove(200)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(187)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 32 << " " << ((b->insert(164))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(165)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->remove(198)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((b->insert(343))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(165)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->remove(164)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 40 << " " << ((b->insert(321))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(75)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(483)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->remove(321)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->remove(343)) << std::endl;
std::cout << "Line no:" << 45 << " " << ((b->insert(269))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 47 << " " << (a->remove(269)) << std::endl;
std::cout << "Line no:" << 48 << " " << ((a->insert(75))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->remove(483)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->remove(75)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(443)) << std::endl;
try{std::cout <<"Line no:" << 52 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getFloor(443) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getCeiling(443) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getNext(443) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->get(443) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 60 << " " << ((b->insert(443))==false) << std::endl;
std::cout << "Line no:" << 61 << " " << (b->insert(113)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->insert(360)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 64 << " " << (a->insert(192)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(360)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(113)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->insert(257)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(192)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(443)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(233)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->remove(257)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(230)) << std::endl;
*b=*a;
std::cout << "Line no:" << 74 << " " << (a->insert(103)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(230)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->remove(233)) << std::endl;
*b=*a;
b->printPretty();
std::cout << "Line no:" << 79 << " " << (b->remove(233)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(103)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->remove(103)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->remove(233)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((b->remove(439))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 85 << " " << (b->insert(341)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(58)) << std::endl;
*a=*a;
std::cout << "Line no:" << 88 << " " << (b->insert(186)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(436)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(40)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(421)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(20)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 95 << " " << (a->insert(202)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(103)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((b->insert(103))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->remove(436)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->remove(186)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(69)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(135)) << std::endl;
std::cout << "Line no:" << 102 << " " << ((a->remove(230))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << ((b->insert(421))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->remove(135)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(260)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((a->insert(202))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 108 << " " << (b->insert(245)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((a->remove(200))==false) << std::endl;
try{std::cout <<"Line no:" << 110 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getFloor(40) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getCeiling(40) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getNext(40) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->get(40) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 118 << " " << (b->insert(50)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 120 << " " << (b->remove(421)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->remove(245)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(486)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(327)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(191)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(397)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(50)) << std::endl;
std::cout << "Line no:" << 127 << " " << ((a->remove(87))==false) << std::endl;
std::cout << "Line no:" << 128 << " " << ((b->insert(341))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(260)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(105)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->remove(105)) << std::endl;
std::cout << "Line no:" << 132 << " " << ((a->remove(404))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << ((b->insert(327))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(385)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(143)) << std::endl;
std::cout << "Line no:" << 136 << " " << ((a->insert(486))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->remove(327)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(187)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 140 << " " << (a->remove(486)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->remove(187)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(252)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(341)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(105)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(248)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(55)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 148 << " " << ((a->insert(69))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 150 << " " << ((b->remove(133))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << ((a->remove(338))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << ((a->insert(40))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(469)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->remove(40)) << std::endl;
std::cout << "Line no:" << 155 << " " << ((b->insert(252))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(20)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(195)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->remove(69)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->remove(195)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(45)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(387)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->remove(58)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->insert(489)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(408)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((a->insert(45))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(41)) << std::endl;
std::cout << "Line no:" << 167 << " " << ((b->insert(248))==false) << std::endl;
try{std::cout <<"Line no:" << 168 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getFloor(408) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getCeiling(408) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getNext(408) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->get(408) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 176 << " " << (a->remove(408)) << std::endl;
std::cout << "Line no:" << 177 << " " << ((a->remove(176))==false) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->remove(105)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->remove(191)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(155)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->remove(248)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->remove(121))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(202)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->remove(55)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(290)) << std::endl;
*b=*a;
std::cout << "Line no:" << 187 << " " << (a->insert(417)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 189 << " " << (b->insert(151)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(140)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->remove(45)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 193 << " " << (b->remove(290)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(118)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 196 << " " << ((a->insert(417))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 198 << " " << (b->insert(150)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 200 << " " << (a->insert(159)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(80)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(80)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((b->insert(151))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(496)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(383)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 207 << " " << (a->insert(264)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->remove(140)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 211 << " " << ((b->insert(383))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->remove(383)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(495)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(37)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->remove(151)) << std::endl;
*b=*b;
std::cout << "Line no:" << 217 << " " << ((b->insert(45))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(219)) << std::endl;
*b=*a;
std::cout << "Line no:" << 220 << " " << (a->insert(68)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(447)) << std::endl;
std::cout << "Line no:" << 222 << " " << ((a->remove(231))==false) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->remove(496)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(397)) << std::endl;
std::cout << "Line no:" << 225 << " " << ((b->remove(312))==false) << std::endl;
try{std::cout <<"Line no:" << 226 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getFloor(68) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getCeiling(68) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getNext(68) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->get(68) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
*a=*a;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
