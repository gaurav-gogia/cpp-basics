#include <iostream>

class vulnerability
{
    std::string remediation;
    bool canRemediate;
    std::string cveid;
    std::string description;
    int cvss;

protected:
    bool GetCanRemediate()
    {
        return canRemediate;
    }

    std::string GetRemediation()
    {
        return remediation;
    }

public:
    vulnerability(std::string _remediation, bool _canRemediate, std::string _cveid, std::string _description, int _cvss)
    {
        remediation = _remediation;
        canRemediate = _canRemediate;
        cveid = _cveid;
        description = _description;
        cvss = _cvss;
    }

    std::string GetCVEID()
    {
        return cveid;
    }

    std::string GetDescription()
    {
        return description;
    }

    int GetCVSS()
    {
        return cvss;
    }
};

class remediator : vulnerability
{
public:
    remediator(std::string _remediation, bool _canRemediate, std::string _cveid, std::string _description, int _cvss) : vulnerability(_remediation, _canRemediate, _cveid, _description, _cvss) {}
    bool RunRemediation()
    {
        return (GetCanRemediate()) && (GetRemediation() != "");
    }
};

int main()
{
    remediator rem = remediator("", false, "", "", 0);
    std::cout << rem.RunRemediation() << std::endl;

    /*
        NOTE:
            cannot use any PUBLIC functions of class vulnerability through class remediator
            this is because class remediator inherits class vulnerability using PRIVATE access specifier by default

            uncomment following line of code to verify
    */

    // rem.GetCVSS();

    return 0;
}