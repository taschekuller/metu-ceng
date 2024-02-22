#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(53)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 7 << " " << (a->insert(276)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 9 << " " << (a->insert(417)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->insert(276))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(276))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(267)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(188)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(301)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 16 << " " << (a->insert(454)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(323)) << std::endl;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 23 << " " << (a->insert(308)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(303)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(491)) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->insert(96)) << std::endl;
std::cout << "Line no:" << 27 << " " << (b->remove(96)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 29 << " " << (a->insert(82)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(178)) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->remove(64))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(284)) << std::endl;
std::cout << "Line no:" << 33 << " " << (b->insert(18)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->remove(178)) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->remove(18)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(491)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(262)) << std::endl;
std::cout << "Line no:" << 38 << " " << ((a->remove(433))==false) << std::endl;
std::cout << "Line no:" << 39 << " " << ((a->insert(303))==false) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(247)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->remove(262)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(490)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((b->insert(490))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(482)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(258)) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->remove(490)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->remove(82)) << std::endl;
a->printPretty();
*a=*b;
try{std::cout <<"Line no:" << 50 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getFloor(482) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getCeiling(482) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getNext(482) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->get(482) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 58 << " " << (a->remove(482)) << std::endl;
std::cout << "Line no:" << 59 << " " << (b->remove(482)) << std::endl;
std::cout << "Line no:" << 60 << " " << (b->insert(240)) << std::endl;
std::cout << "Line no:" << 61 << " " << (b->insert(387)) << std::endl;
std::cout << "Line no:" << 62 << " " << (b->insert(261)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(325)) << std::endl;
*b=*b;
std::cout << "Line no:" << 65 << " " << (a->insert(150)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(325)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->remove(391))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->remove(387)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((a->remove(349))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << ((a->insert(150))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->remove(150)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(231)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(490)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(322)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(276)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((a->remove(487))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << ((a->remove(301))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(61)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((a->insert(61))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << ((a->remove(204))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->remove(61)) << std::endl;
*a=*b;
std::cout << "Line no:" << 83 << " " << ((b->remove(70))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(33)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->remove(490)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(281)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(171)) << std::endl;
*a=*a;
std::cout << "Line no:" << 89 << " " << ((a->insert(261))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->remove(33)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(460)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((b->insert(231))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 94 << " " << ((b->insert(261))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->remove(276)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(443)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((b->remove(336))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(308)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(239)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(51)) << std::endl;
try{std::cout <<"Line no:" << 101 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 102 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 103 << " " << a->getFloor(239) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 104 << " " << a->getCeiling(239) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 105 << " " << a->getNext(239) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->get(239) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 109 << " " << (b->insert(297)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->insert(116)) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->remove(276)) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->insert(319)) << std::endl;
std::cout << "Line no:" << 113 << " " << ((b->remove(112))==false) << std::endl;
std::cout << "Line no:" << 114 << " " << (a->remove(322)) << std::endl;
std::cout << "Line no:" << 115 << " " << (a->remove(231)) << std::endl;
std::cout << "Line no:" << 116 << " " << ((b->remove(318))==false) << std::endl;
std::cout << "Line no:" << 117 << " " << (a->insert(389)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 119 << " " << ((a->insert(319))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->remove(171)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 122 << " " << ((a->insert(261))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << ((b->remove(290))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->remove(261)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(413)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(372)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(209)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(101)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(498)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(416)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->remove(101)) << std::endl;
std::cout << "Line no:" << 132 << " " << ((b->insert(460))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->insert(263)) << std::endl;
*a=*b;
std::cout << "Line no:" << 135 << " " << (b->insert(16)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 137 << " " << (b->insert(371)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->insert(231))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->remove(322)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(290)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(7)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->remove(416)) << std::endl;
*b=*b;
std::cout << "Line no:" << 144 << " " << (a->remove(443)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 146 << " " << ((a->insert(322))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(305)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(430)) << std::endl;
std::cout << "Line no:" << 149 << " " << ((a->remove(476))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(15)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 152 << " " << (b->remove(231)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(339)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(172)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 157 << " " << ((a->insert(308))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(71)) << std::endl;
try{std::cout <<"Line no:" << 159 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 160 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 161 << " " << a->getFloor(305) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 162 << " " << a->getCeiling(305) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 163 << " " << a->getNext(305) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 164 << " " << a->get(305) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 167 << " " << ((a->remove(103))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->remove(71)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->insert(200)) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->remove(290)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 172 << " " << ((a->insert(240))==false) << std::endl;
std::cout << "Line no:" << 173 << " " << ((b->insert(297))==false) << std::endl;
std::cout << "Line no:" << 174 << " " << ((a->insert(372))==false) << std::endl;
std::cout << "Line no:" << 175 << " " << (a->insert(177)) << std::endl;
std::cout << "Line no:" << 176 << " " << (b->insert(224)) << std::endl;
std::cout << "Line no:" << 177 << " " << (a->remove(305)) << std::endl;
std::cout << "Line no:" << 178 << " " << ((a->remove(41))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << ((b->remove(121))==false) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->remove(372)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(240)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->insert(16))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(116)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(5)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(427)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(200)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(191)) << std::endl;
std::cout << "Line no:" << 188 << " " << ((a->insert(308))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(471)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(54)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((a->insert(430))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << ((a->insert(322))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 194 << " " << (a->insert(447)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((b->insert(15))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << ((b->remove(144))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 198 << " " << (a->insert(90)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->remove(16)) << std::endl;
std::cout << "Line no:" << 200 << " " << ((b->insert(297))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << ((a->remove(337))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(15)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((a->insert(339))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(56)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 206 << " " << (b->insert(164)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(145)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->remove(339)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((a->insert(224))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 211 << " " << (a->insert(6)) << std::endl;
std::cout << "Line no:" << 212 << " " << ((a->remove(27))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->remove(224)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->remove(427)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->remove(427)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(376)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(251)) << std::endl;
try{std::cout <<"Line no:" << 218 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 219 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 220 << " " << a->getFloor(460) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 221 << " " << a->getCeiling(460) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 222 << " " << a->getNext(460) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 223 << " " << a->get(460) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 226 << " " << (a->remove(471)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
