# Task: ডিসকাউন্ট সহ পণ্যের মূল্য ক্যালকুলেটর (Product Price Calculator with Discount)

এই টাস্কে আপনাকে এমন একটি প্রোগ্রাম তৈরি করতে হবে যা তিনটি ভিন্ন পণ্যের মোট মূল্য গণনা করবে এবং তাদের মূল্যের যোগফলের উপর ভিত্তি করে ডিসকাউন্ট প্রয়োগ করবে।

## আপনার প্রোগ্রামটি যা যা করবে: 
- তিনটি আলাদা পণ্যের নাম (string variable) এবং মূল্য (floating-point number variable) সংরক্ষণের জন্য ভ্যারিয়েবল ডিক্লেয়ার (declare) করবে।

- প্রতিটি পণ্যের নাম এবং মূল্য ব্যবহারকারীর কাছ থেকে ডাইনামিকভাবে ইনপুট (dynamic user input) নেবে। অর্থাৎ, আপনার প্রোগ্রামটি ব্যবহারকারীকে জিজ্ঞাসা করবে, উদাহরণস্বরূপ: "আপনার ১ম পণ্যের নাম লিখুন:", "আপনার ১ম পণ্যের মূল্য লিখুন:", এবং এভাবে দ্বিতীয় ও তৃতীয় পণ্যের জন্যও ইনপুট নেবে।

- তিনটি পণ্যের মূল্যের মোট যোগফল (total sum) গণনা করবে।

- ডিসকাউন্ট লজিক (discount logic) প্রয়োগ করবে:
যদি তিনটি পণ্যের মোট যোগফল ৫০০-এর বেশি হয় (> 500), তাহলে মোট মূল্যের উপর ২০% ডিসকাউন্ট প্রয়োগ করা হবে।

- অন্যথায় (যদি মোট যোগফল ৫০০ বা তার কম হয়), কোনো ডিসকাউন্ট প্রয়োগ করা হবে না।

- একটি পরিষ্কার টেবিল ফরম্যাটে (table format) ফলাফল প্রদর্শন করবে। টেবিলটিতে যা থাকবে:
পণ্যের ক্রমিক নং ("No.") (যেমন: ১, ২, ৩)। পণ্যের নাম ("Product Name")।
প্রতিটি পণ্যের মূল্য ("Price")।
সবশেষে, "মোট মূল্য (Total Price)" প্রদর্শন করবে, যা ডিসকাউন্ট প্রযোজ্য হলে ডিসকাউন্ট সহ মূল্য এবং ডিসকাউন্ট না হলে সাধারণ মোট মূল্য হবে।


## লজিক ফর্মুলা (Logic Formula)
এখানে ডিসকাউন্ট লজিকের গাণিতিক সূত্র এবং শর্ত দেওয়া হলো:

ধরি,

price1, price2, price3 হলো তিনটি পণ্যের আলাদা আলাদা মূল্য।
totalSum হলো তিনটি পণ্যের মূল্যের মোট যোগফল।
finalPrice হলো ডিসকাউন্ট প্রযোজ্য হওয়ার পর চূড়ান্ত মূল্য।

১. মোট মূল্য গণনা (Calculate Total Sum): 
```
totalSum = price1 + price2 + price3
```

২. ডিসকাউন্ট শর্ত (Discount Condition):
যদি ```totalSum > 500``` হয়, তাহলে:

```
discountAmount = totalSum * 0.20
finalPrice = totalSum - discountAmount
```

অন্যথায় (যদি totalSum <= 500 হয়), তাহলে:
``` 
finalPrice = totalSum 
```


## Input And Output Example 01: 
```
Enter your 1st product name: Gaming PC
Enter your 1st product price: 800.00
Enter your 2nd product name: Monitor
Enter your 2nd product price: 250.00
Enter your 3rd product name: Keyboard
Enter your 3rd product price: 75.00

--- Product Order Summary ---
No. | Product Name | Price
--------------------------------
1   | Gaming PC    | 800.00
2   | Monitor      | 250.00
3   | Keyboard     | 75.00
--------------------------------
Subtotal: $1125.00
Discount (20%): -$225.00
Total Price (after discount): $900.00
```


## Input And Output Example 02: 
```
Enter your 1st product name: Book
Enter your 1st product price: 150.00
Enter your 2nd product name: Pen
Enter your 2nd product price: 10.00
Enter your 3rd product name: Notebook
Enter your 3rd product price: 340.00

--- Product Order Summary ---
No. | Product Name | Price
--------------------------------
1   | Book         | 150.00
2   | Pen          | 10.00
3   | Notebook     | 340.00
--------------------------------
Total Price: $500.00
```