bool pairCompare(const P &firstElof, const P &secondElof)
{
    return firstElof.second > secondElof.second;
}

sort(all(v), pairCompare);