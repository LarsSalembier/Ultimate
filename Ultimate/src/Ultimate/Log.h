#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Ultimate {

	class ULTIMATE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> CoreLogger;
		static std::shared_ptr<spdlog::logger>
			ClientLogger;
	};

}

// Core log macros
#define ULT_CORE_ERROR(...)::Ultimate::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ULT_CORE_TRACE(...) ::Ultimate::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ULT_CORE_INFO(...) ::Ultimate::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ULT_CORE_WARN(...) ::Ultimate::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ULT_CORE_ERROR(...) ::Ultimate::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ULT_CORE_CRITICAL(...) ::Ultimate::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define ULT_ERROR(...)::Ultimate::Log::GetClientLogger()->error(__VA_ARGS__)
#define ULT_TRACE(...) ::Ultimate::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ULT_INFO(...) ::Ultimate::Log::GetClientLogger()->info(__VA_ARGS__)
#define ULT_WARN(...) ::Ultimate::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ULT_ERROR(...) ::Ultimate::Log::GetClientLogger()->error(__VA_ARGS__)
#define ULT_CRITICAL(...) ::Ultimate::Log::GetClientLogger()->critical(__VA_ARGS__)
