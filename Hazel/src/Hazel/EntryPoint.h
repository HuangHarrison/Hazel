#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
    auto pApp = Hazel::CreateApplication();
    pApp->Run();
    delete pApp;
    pApp = nullptr;
}

#endif