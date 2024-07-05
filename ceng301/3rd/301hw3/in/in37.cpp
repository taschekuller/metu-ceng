#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << (a->insert(83)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 8 << " " << (a->insert(68)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(48)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 11 << " " << (a->remove(68)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(458)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(458)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->insert(83))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(153)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(130)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(309)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(309)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 22 << " " << (a->insert(419)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(140)) << std::endl;
std::cout << "Line no:" << 24 << " " << (b->insert(71)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 26 << " " << (b->insert(310)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((b->insert(71))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->insert(444)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->remove(71)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 31 << " " << (a->insert(396)) << std::endl;
*b=*a;
std::cout << "Line no:" << 33 << " " << (a->insert(423)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->remove(444)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(231)) << std::endl;
*a=*a;
std::cout << "Line no:" << 37 << " " << (a->insert(488)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(225)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(376)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(311)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(441)) << std::endl;
std::cout << "Line no:" << 42 << " " << ((a->remove(303))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(252)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((b->insert(252))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << ((b->insert(252))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->insert(252)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 48 << " " << (b->insert(131)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(329)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->remove(252)) << std::endl;
std::cout << "Line no:" << 51 << " " << ((b->insert(310))==false) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->remove(444)) << std::endl;
std::cout << "Line no:" << 53 << " " << (b->insert(363)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(423) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(423) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(423) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(423) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (a->remove(396)) << std::endl;
std::cout << "Line no:" << 63 << " " << ((a->remove(350))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(110)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(420)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(376)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 68 << " " << ((a->remove(120))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(352)) << std::endl;
std::cout << "Line no:" << 70 << " " << ((a->insert(488))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 72 << " " << (b->insert(255)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(481)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(381)) << std::endl;
std::cout << "Line no:" << 75 << " " << ((b->insert(255))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(275)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->remove(352)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(213)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(117)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(140)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 82 << " " << (b->insert(179)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->remove(225)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(116)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(477)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(154)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 88 << " " << (b->remove(329)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(441)) << std::endl;
*a=*a;
std::cout << "Line no:" << 91 << " " << (a->remove(419)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->remove(213)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->remove(117)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->remove(396)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(175)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(314)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(61)) << std::endl;
*a=*b;
std::cout << "Line no:" << 100 << " " << (a->insert(311)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->remove(420)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(278)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->insert(477))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(171)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(88)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 107 << " " << (a->remove(252)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(408)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 110 << " " << (a->insert(471)) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->remove(381)) << std::endl;
*b=*b;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(171) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(171) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(171) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(171) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << ((a->insert(171))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(26)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 124 << " " << (a->insert(120)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->remove(154)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(275)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(348)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 129 << " " << (b->remove(255)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((a->insert(363))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(100)) << std::endl;
std::cout << "Line no:" << 132 << " " << ((b->insert(363))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << ((a->insert(311))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(25)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((b->insert(311))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(135)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(311)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 139 << " " << (b->insert(476)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(179)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(193)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(473)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(278)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(103)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->remove(103)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(197)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(377)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->insert(179))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 150 << " " << (b->insert(31)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(333)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->remove(154)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->remove(363)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 155 << " " << ((a->remove(107))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(383)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(115)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((b->insert(419))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(332)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 161 << " " << (b->insert(397)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->remove(419)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 164 << " " << (b->insert(440)) << std::endl;
*a=*b;
*b=*b;
std::cout << "Line no:" << 167 << " " << (a->remove(333)) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(414)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->insert(70)) << std::endl;
std::cout << "Line no:" << 170 << " " << ((a->remove(112))==false) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(420) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(420) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(420) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(420) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << ((a->insert(420))==false) << std::endl;
a->printPretty();
*a=*a;
std::cout << "Line no:" << 182 << " " << (b->insert(251)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(179)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(159)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((b->remove(418))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(75)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(412)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(471)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(116)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->remove(140)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(393)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(254)) << std::endl;
std::cout << "Line no:" << 193 << " " << ((a->remove(299))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << ((b->insert(252))==false) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(457)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->remove(311)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->remove(179)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(388)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(160)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(453)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(261)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(61)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(468)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((b->insert(140))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(40)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 208 << " " << (b->remove(251)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(220)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->remove(26)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((a->insert(332))==false) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 214 << " " << (b->insert(90)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->remove(160)) << std::endl;
*b=*a;
std::cout << "Line no:" << 217 << " " << (a->insert(363)) << std::endl;
std::cout << "Line no:" << 218 << " " << ((b->insert(332))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(27)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 221 << " " << ((b->remove(400))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->remove(476)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(414)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(493)) << std::endl;
std::cout << "Line no:" << 225 << " " << ((a->insert(471))==false) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->remove(468)) << std::endl;
std::cout << "Line no:" << 227 << " " << ((a->insert(476))==false) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->insert(294)) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(179) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(179) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(179) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(179) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
