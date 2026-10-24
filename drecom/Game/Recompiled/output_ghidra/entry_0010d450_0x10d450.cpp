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

// Function: entry_0010d450
// Address: 0x10d450 - 0x10d458
void entry_0010d450_0x10d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d450_0x10d450");
#endif

    ctx->pc = 0x10d450u;

    // 0x10d450: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10d450u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10d454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10d458u;
}
