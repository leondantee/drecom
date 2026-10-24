#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0010b044
// Address: 0x10b044 - 0x10b048
void entry_0010b044_0x10b044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b044_0x10b044");
#endif

    ctx->pc = 0x10b044u;

    // 0x10b044: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10b044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x10b048u;
}
