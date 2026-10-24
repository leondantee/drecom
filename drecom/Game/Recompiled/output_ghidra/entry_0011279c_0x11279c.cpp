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

// Function: entry_0011279c
// Address: 0x11279c - 0x1127a4
void entry_0011279c_0x11279c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011279c_0x11279c");
#endif

    ctx->pc = 0x11279cu;

    // 0x11279c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11279cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1127a0: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1127a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x1127a4u;
}
