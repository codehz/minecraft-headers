#pragma once

#include <string>
#include <vector>

class CommandOutputParameter;

enum class CommandOutputMessageType {
    DEFAULT
};

class CommandOutput {

public:

    void success();
    void error(std::string const&, std::vector<CommandOutputParameter> const& = {});
    void addMessage(std::string const&, std::vector<CommandOutputParameter> const& = {}, CommandOutputMessageType = CommandOutputMessageType::DEFAULT);

};

class CommandOutputParameter {

private:
    std::string str;
    int type;

public:
    CommandOutputParameter(std::string const&);
    CommandOutputParameter(int);

};