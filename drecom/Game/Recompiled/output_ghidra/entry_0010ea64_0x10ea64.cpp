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

// Function: entry_0010ea64
// Address: 0x10ea64 - 0x10ea68
void entry_0010ea64_0x10ea64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ea64_0x10ea64");
#endif

    ctx->pc = 0x10ea64u;

    // 0x10ea64: 0x26304fe0  addiu       $s0, $s1, 0x4FE0
    ctx->pc = 0x10ea64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20448));
    ctx->pc = 0x10ea68u;
}
