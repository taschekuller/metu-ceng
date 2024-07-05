#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(148))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 7 << " " << (a->insert(56)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(56)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(171)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 12 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(85)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 15 << " " << (b->insert(85)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(250)) << std::endl;
std::cout << "Line no:" << 17 << " " << (b->remove(250)) << std::endl;
std::cout << "Line no:" << 18 << " " << (b->remove(85)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(252)) << std::endl;
std::cout << "Line no:" << 20 << " " << ((b->insert(252))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << ((b->insert(252))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (b->remove(252)) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->insert(273)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(273)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(119)) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->remove(119)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(98)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((b->insert(98))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << ((a->remove(224))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->remove(98)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 32 << " " << (b->insert(398)) << std::endl;
std::cout << "Line no:" << 33 << " " << (b->insert(433)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->remove(398)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 36 << " " << (a->insert(222)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(370)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->remove(433)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(370)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 41 << " " << ((a->insert(222))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << ((b->insert(222))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(89)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->remove(89)) << std::endl;
std::cout << "Line no:" << 45 << " " << ((b->remove(424))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->remove(222)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(435)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(435)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(480)) << std::endl;
std::cout << "Line no:" << 50 << " " << ((a->insert(480))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(110)) << std::endl;
std::cout << "Line no:" << 52 << " " << ((a->insert(480))==false) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->insert(399)) << std::endl;
std::cout << "Line no:" << 54 << " " << (a->insert(114)) << std::endl;
std::cout << "Line no:" << 55 << " " << ((a->remove(274))==false) << std::endl;
std::cout << "Line no:" << 56 << " " << (b->insert(45)) << std::endl;
std::cout << "Line no:" << 57 << " " << (b->insert(473)) << std::endl;
std::cout << "Line no:" << 58 << " " << (b->remove(114)) << std::endl;
std::cout << "Line no:" << 59 << " " << (a->remove(480)) << std::endl;
std::cout << "Line no:" << 60 << " " << (a->remove(399)) << std::endl;
std::cout << "Line no:" << 61 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 62 << " " << ((b->remove(471))==false) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->remove(345)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((b->remove(387))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(300)) << std::endl;
std::cout << "Line no:" << 66 << " " << ((b->insert(473))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->insert(128)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->remove(300)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->remove(110)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->remove(45)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(451)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(473)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->remove(451)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((a->insert(128))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(357)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(53)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->remove(357)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(53)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(164)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(456)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(122)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(256)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(254)) << std::endl;
*a=*a;
std::cout << "Line no:" << 85 << " " << (b->insert(258)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 87 << " " << (b->insert(218)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->remove(164)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(203)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((b->remove(500))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(14)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(377)) << std::endl;
std::cout << "Line no:" << 93 << " " << ((a->insert(254))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->remove(122)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(299)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(127)) << std::endl;
try{std::cout <<"Line no:" << 97 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 98 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 99 << " " << a->getFloor(299) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 100 << " " << a->getCeiling(299) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 101 << " " << a->getNext(299) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 102 << " " << a->get(299) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 103 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 104 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 105 << " " << (a->insert(71)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->remove(203)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->remove(127)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->remove(254)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->remove(456)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(113)) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->insert(438)) << std::endl;
std::cout << "Line no:" << 112 << " " << (b->insert(397)) << std::endl;
std::cout << "Line no:" << 113 << " " << (b->insert(266)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 115 << " " << ((a->remove(76))==false) << std::endl;
std::cout << "Line no:" << 116 << " " << (a->remove(113)) << std::endl;
std::cout << "Line no:" << 117 << " " << ((a->remove(100))==false) << std::endl;
std::cout << "Line no:" << 118 << " " << ((a->insert(128))==false) << std::endl;
std::cout << "Line no:" << 119 << " " << ((a->remove(92))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->insert(159)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((b->insert(128))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->remove(71)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->remove(218)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->remove(122)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(199)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(471)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(487)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(356)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(340)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(328)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->remove(266)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 133 << " " << (b->insert(448)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(51)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(349)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(128)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(356)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 139 << " " << (a->remove(254)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->remove(438)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->remove(256)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->remove(448)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((a->remove(48))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(82)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(51)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 147 << " " << (a->insert(88)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->remove(82)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 150 << " " << (b->remove(128)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((a->remove(133))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 153 << " " << (b->insert(197)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->remove(377)) << std::endl;
try{std::cout <<"Line no:" << 155 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 156 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 157 << " " << a->getFloor(340) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 158 << " " << a->getCeiling(340) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 159 << " " << a->getNext(340) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 160 << " " << a->get(340) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 161 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 162 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 163 << " " << (b->remove(14)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(342)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 166 << " " << (b->insert(354)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(189)) << std::endl;
*b=*a;
std::cout << "Line no:" << 169 << " " << ((b->insert(159))==false) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->remove(159)) << std::endl;
std::cout << "Line no:" << 171 << " " << ((a->insert(159))==false) << std::endl;
std::cout << "Line no:" << 172 << " " << (a->remove(340)) << std::endl;
std::cout << "Line no:" << 173 << " " << ((b->remove(317))==false) << std::endl;
std::cout << "Line no:" << 174 << " " << (a->remove(487)) << std::endl;
std::cout << "Line no:" << 175 << " " << ((a->remove(145))==false) << std::endl;
std::cout << "Line no:" << 176 << " " << (a->remove(299)) << std::endl;
std::cout << "Line no:" << 177 << " " << (b->remove(487)) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->remove(471)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->remove(349)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(336)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((b->insert(336))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(200)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(484)) << std::endl;
*a=*b;
std::cout << "Line no:" << 185 << " " << ((b->remove(489))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(317)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(478)) << std::endl;
std::cout << "Line no:" << 188 << " " << ((a->insert(299))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 190 << " " << (a->insert(212)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((a->remove(409))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(170)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(370)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(88)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->remove(478)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 197 << " " << (b->insert(290)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->remove(199)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(95)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(425)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(341)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(58)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(258)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(394)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->remove(340)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->remove(189)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(245)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((a->insert(425))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << ((a->remove(410))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 211 << " " << ((a->remove(332))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(199)) << std::endl;
*b=*a;
try{std::cout <<"Line no:" << 214 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 215 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 216 << " " << a->getFloor(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 217 << " " << a->getCeiling(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 218 << " " << a->getNext(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 219 << " " << a->get(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 220 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 221 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 222 << " " << ((a->remove(382))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
