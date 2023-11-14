# Trie-Data-structure
Trie is a tree-based data structure, which is used for efficient retrieval of a key in a large dataset of strings.

It is a type of k-ary search tree used for storing and searching a specific key from a set. Using Trie, search complexities can be brought to optimal limit (key length).

# Trie Data
Data structure and relevant algorithms for extremely fast prefix/fuzzy string searching.



## Comparison with Binary Search Tree
If we store keys in a binary search tree, a well balanced BST will need time proportional to **M * log N**, where M is the maximum string length and N is the number of keys in the tree.

Trie is an efficient information retrieval data structure. Using Trie, search complexities can be brought to optimal limit **O(M) (Where M is the maximum string length)**.
<hr>

The idea is that all strings sharing common prefix should come from a common node. The tries are used in spell checking programs.

- Preprocessing pattern improves the performance of pattern matching algorithm. But if a text is very large then it is better to preprocess text instead of pattern for efficient search.
- A trie is a data structure that supports pattern matching queries in time proportional to the pattern size.

<hr>

### [Basic Implementation]
<img src="https://github.com/shinchancode/Trie-Data-structure/blob/main/example.png" height="500" />
<hr>

<p align ="middle">
<b align ="middle"><i>Do star ⭐ this Repository if you feel it helped & drop a follow!</b></i><br><br>
:blue_heart: <b> Happy Learning </b> :blue_heart:
<br></p>

## Demo || Working
 
Open the [folder](https://github.com/shinchancode/Trie-Data-structure/blob/main/Output) to view the working and output..

## Usage

Create a Trie with:

```Go
Trie *t = new Trie();
```

Add Keys with:

```Go
// i.e. you could store any information you would like to associate with
// this particular key.
t->insert(name, num);
```

Find a key with:

```Go
bool ok = t->search(s);
```

Remove Keys with:

```Go
t->remove(name);
```

Search with:

```Go
t->search(s);
```

Prefix search with:

```Go
t->starts_with(s);
```

Prefix search with recommendations:
```Go
t->show_recommendations(name);
```


## Contributing
Fork this repo and run tests with:

##

### Connect with me:

[<img align="left" alt="codeSTACKr.com" width="22px" src="https://img.icons8.com/?size=512&id=n9d0Hm43JCPK&format=png" />][website]
[<img align="left" alt="codeSTACKr | Twitter" width="22px" src="https://img.icons8.com/fluency/48/twitter.png" />][twitter]
[<img align="left" alt="codeSTACKr | LinkedIn" width="22px" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" />][linkedin]
[<img align="left" alt="codeSTACKr | Instagram" width="22px" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/instagram.svg" />][instagram]

<br />

[website]: https://shinchancode.github.io/3d-react-portfolio/
[twitter]: https://twitter.com/CodeShinchan
[instagram]: https://www.instagram.com/aarti.rathiii
[linkedin]: https://www.linkedin.com/in/aarti-rathi-a6031814b/
