#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(353))==false) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(227)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(227)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 9 << " " << (a->insert(478)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->remove(197))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(245)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(419)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(181)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->insert(181))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(419)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(483)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->insert(245))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 19 << " " << ((a->insert(478))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(181)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(64)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(333)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(412)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(168)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 26 << " " << (a->insert(350)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 28 << " " << ((a->insert(333))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << ((a->insert(245))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(350)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(163)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(176)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(92)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 35 << " " << (a->insert(453)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->insert(163))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(34)) << std::endl;
std::cout << "Line no:" << 38 << " " << ((a->insert(333))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 40 << " " << (a->insert(466)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(181)) << std::endl;
std::cout << "Line no:" << 42 << " " << ((a->insert(168))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(313)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(57)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(130)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 47 << " " << ((a->insert(168))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(312)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->remove(312)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(385)) << std::endl;
try{std::cout <<"Line no:" << 51 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getFloor(181) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getCeiling(181) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getNext(181) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->get(181) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 59 << " " << (a->remove(313)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 62 << " " << (a->insert(402)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->remove(402)) << std::endl;
*a=*a;
std::cout << "Line no:" << 65 << " " << (b->insert(163)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(300)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->remove(300)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->remove(163)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(123)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(192)) << std::endl;
*b=*a;
std::cout << "Line no:" << 72 << " " << (a->insert(450)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(78)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->remove(78)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 76 << " " << ((a->insert(450))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(195)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->remove(450)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(178)) << std::endl;
*b=*b;
std::cout << "Line no:" << 81 << " " << ((a->insert(178))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->remove(56))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->remove(178)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->remove(274))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(454)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(147)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(470)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(366)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->remove(454)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(308)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(460)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(18)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(390)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->remove(390)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->remove(195)) << std::endl;
*b=*a;
std::cout << "Line no:" << 97 << " " << (a->insert(431)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(446)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(38)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(451)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->remove(18)) << std::endl;
std::cout << "Line no:" << 102 << " " << ((a->insert(18))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << ((b->insert(147))==false) << std::endl;
try{std::cout <<"Line no:" << 104 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 105 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->getFloor(366) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getCeiling(366) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getNext(366) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->get(366) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 112 << " " << (b->insert(16)) << std::endl;
std::cout << "Line no:" << 113 << " " << (a->insert(452)) << std::endl;
std::cout << "Line no:" << 114 << " " << ((b->insert(366))==false) << std::endl;
std::cout << "Line no:" << 115 << " " << (a->insert(198)) << std::endl;
std::cout << "Line no:" << 116 << " " << (a->remove(198)) << std::endl;
std::cout << "Line no:" << 117 << " " << (a->insert(88)) << std::endl;
std::cout << "Line no:" << 118 << " " << ((a->insert(147))==false) << std::endl;
std::cout << "Line no:" << 119 << " " << (a->remove(446)) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->remove(147)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->insert(367)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(202)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(366)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->remove(451)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->remove(88)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 127 << " " << (b->insert(37)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 129 << " " << (b->insert(131)) << std::endl;
*b=*b;
std::cout << "Line no:" << 131 << " " << ((a->remove(348))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(311)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(311)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(273)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(423)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(18)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(216)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(478)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(22)) << std::endl;
std::cout << "Line no:" << 140 << " " << ((b->insert(423))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->remove(431)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(452)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 145 << " " << (b->insert(127)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((b->insert(127))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->remove(202)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->insert(22))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->remove(127)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->remove(235)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(286)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(465)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(250)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 155 << " " << (b->remove(131)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(185)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(206)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((a->insert(286))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->remove(22)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(251)) << std::endl;
std::cout << "Line no:" << 161 << " " << ((a->insert(185))==false) << std::endl;
try{std::cout <<"Line no:" << 162 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 163 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 164 << " " << a->getFloor(286) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->getCeiling(286) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getNext(286) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->get(286) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 170 << " " << (a->insert(32)) << std::endl;
std::cout << "Line no:" << 171 << " " << (a->remove(465)) << std::endl;
std::cout << "Line no:" << 172 << " " << (b->remove(423)) << std::endl;
std::cout << "Line no:" << 173 << " " << (a->remove(185)) << std::endl;
std::cout << "Line no:" << 174 << " " << (a->insert(416)) << std::endl;
std::cout << "Line no:" << 175 << " " << (a->remove(251)) << std::endl;
std::cout << "Line no:" << 176 << " " << ((a->remove(188))==false) << std::endl;
std::cout << "Line no:" << 177 << " " << (a->insert(48)) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->insert(338)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 180 << " " << (a->insert(355)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(286)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->remove(338)) << std::endl;
*a=*b;
std::cout << "Line no:" << 184 << " " << (b->insert(382)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 186 << " " << (a->insert(391)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(173)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 189 << " " << (b->insert(183)) << std::endl;
std::cout << "Line no:" << 190 << " " << ((a->insert(206))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->remove(16)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(250)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(206)) << std::endl;
std::cout << "Line no:" << 194 << " " << ((a->remove(256))==false) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->remove(366)) << std::endl;
*b=*a;
std::cout << "Line no:" << 197 << " " << (a->insert(110)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((a->insert(391))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(173)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->remove(367)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(334)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(406)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(220)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((a->insert(391))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->remove(173)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(239)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(300)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 209 << " " << (b->insert(400)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 211 << " " << (a->insert(200)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->remove(334)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(195)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(114)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(393)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(2)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((a->insert(200))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(357)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(328)) << std::endl;
try{std::cout <<"Line no:" << 220 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 221 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 222 << " " << a->getFloor(147) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 223 << " " << a->getCeiling(147) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getNext(147) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->get(147) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 228 << " " << ((a->insert(216))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
