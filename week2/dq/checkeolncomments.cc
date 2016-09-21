void checkEOLNComments(string& inputLine, variables& var) {
    size_t commentPosition = inputLine.find("//");
    switch (commentPosition) {
    case string::npos: // no comments on this line
        var.lineCounter += var.lineWeight * var.nestWeight;
        break;
    case 0: // whole line is a comment
        ++var.eolnComments;
        ++var.docCounter;
        break;
    default: // commment somewhere in line
        var.lineCounter += var.lineWeight * var.nestWeight;
        ++var.eolnComments;
        ++var.docCounter;
        break;
    }
}
