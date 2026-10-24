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

// Function: entry_0010a810
// Address: 0x10a810 - 0x10a814
void entry_0010a810_0x10a810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a810_0x10a810");
#endif

    ctx->pc = 0x10a810u;

    // 0x10a810: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x10a810u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x10a814u;
}
